int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    
    SinglyLinkedListNode* temp=llist;
    int size=0;
    while(temp){
        temp=temp->next;
        size++;
    }
    temp=llist;
    for(int i=0;i<size-positionFromTail-1;i++){
            temp=temp->next;
    }
     
    return temp->data;
}