bool has_cycle(SinglyLinkedListNode* head) {
    vector<int> vec;
    SinglyLinkedListNode* temp=head;
    SinglyLinkedListNode* temp2=head;
    
    bool chk=0;
    if(head==NULL){
        return 0;
    }
    while(temp!=NULL &&temp->next !=NULL){
        temp = temp->next->next;
        temp2 = temp2->next;
            if(temp == temp2){
                chk=1;
                break;
            }
    }
    return chk;
}