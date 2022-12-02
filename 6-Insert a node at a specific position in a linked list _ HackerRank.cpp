SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {

    SinglyLinkedListNode* newNode=(SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
    newNode->data=data;
    
    SinglyLinkedListNode* temp=llist;
    for(int i=0;i<position-1;i++){
            temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;    
    
    return llist;
}