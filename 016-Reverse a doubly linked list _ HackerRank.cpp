DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    
    DoublyLinkedList* revList = new DoublyLinkedList();
    DoublyLinkedListNode* temp=llist;
    while(temp->next != NULL){
        temp=temp->next;
    }
    while(temp !=NULL){
        revList->insert_node(temp->data);
        temp=temp->prev;
    }
    return revList->head;
}