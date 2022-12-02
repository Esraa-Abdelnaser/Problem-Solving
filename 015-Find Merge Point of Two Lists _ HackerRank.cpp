int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    
    SinglyLinkedListNode* temp1=head1;
    SinglyLinkedListNode* temp2=head2;
    int chk=0;
    while(temp1){
        temp2=head2;
        while (temp2) {
            if (temp1==temp2){
                return temp2->data;
            }
            else{
                temp2=temp2->next;
            }
        }
        temp1=temp1->next;    
    }
    return 0;
}