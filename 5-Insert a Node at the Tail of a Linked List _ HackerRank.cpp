SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* newNode=(SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
    newNode->data=data;
    if (head==NULL){
        head=newNode;       
    }
    else{
        SinglyLinkedListNode* temp=head;
        while(temp->next !=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=NULL;
    }
    return head;
}