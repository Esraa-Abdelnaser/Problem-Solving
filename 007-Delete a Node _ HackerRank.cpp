SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    if(position<0){
        return llist;
    }
    if(llist==NULL|llist->next==NULL){
        return NULL;
    }
    if (position==0) {
        llist=llist->next;
        return llist;
    }
    else{
        SinglyLinkedListNode* temp=llist;
        for(int i=0;i<position-1;i++){
                temp=temp->next;
        }
        if(temp->next==NULL){
            return NULL;
        }
        else{
            temp->next=temp->next->next;    
        }
        
        
        return llist;
    }
    
}
