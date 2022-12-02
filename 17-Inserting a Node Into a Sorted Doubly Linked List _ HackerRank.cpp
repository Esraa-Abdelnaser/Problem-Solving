DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    
    DoublyLinkedListNode * temp = llist;
    DoublyLinkedListNode * ele=new DoublyLinkedListNode(data);
    DoublyLinkedListNode * tail ;
    while(temp && (temp->data <data)){
        if (temp->next==NULL) {
            tail= temp;
        }
        temp = temp->next;      
    }    
    if(!temp){
        if(llist==NULL){
            llist=ele;
        }
        else{
            ele->prev=tail;
            tail->next=ele;    
            ele->next=NULL; 
        }
           
    }

    else if(temp==llist){
        llist->prev=ele;
        ele->next=llist;
        llist=ele;
    }
    else{
        temp->prev->next=ele; 
        ele->prev=temp->prev; 
        temp->prev=ele; 
        ele->next=temp; 
    }
    cout<<llist->data;
    return llist;
}