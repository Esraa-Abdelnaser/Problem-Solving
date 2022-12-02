SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

SinglyLinkedListNode* temp1=head1;
SinglyLinkedListNode* temp2=head2;

SinglyLinkedList* mergedList = new SinglyLinkedList();

    if(!temp1){
        return temp2;
    }
    if(!temp2){
        return temp1;
    }
    while (temp1||temp2) {
        if(!temp1&&temp2){
            mergedList->insert_node(temp2->data);
            temp2=temp2->next;
        }
        else if(!temp2&&temp1){
            mergedList->insert_node(temp1->data);
            temp1=temp1->next;
        }
        else if (temp1->data<temp2->data) {
            mergedList->insert_node(temp1->data);
            temp1=temp1->next;
        }
        else{
            mergedList->insert_node(temp2->data);
            temp2=temp2->next;
        }
    }
    
    return mergedList->head;
}