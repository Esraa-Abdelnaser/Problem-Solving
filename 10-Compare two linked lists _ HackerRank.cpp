bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    SinglyLinkedListNode* temp1=head1;
    SinglyLinkedListNode* temp2=head2;
    bool chk=true;
    while(temp1||temp2){
        if ((temp1==NULL&&temp2)||(temp2==NULL&&temp1)) {
            chk=false;
            break;
        }
        if(temp1->data==temp2->data){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else{
            chk=false;
            break;
        } 
    }
    
    return chk;

}