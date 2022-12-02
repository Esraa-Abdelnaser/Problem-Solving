void reversePrint(SinglyLinkedListNode* llist) {

    vector<int> vec;
    SinglyLinkedListNode* temp=llist;
    int cnt=0;
    while(temp!=NULL){
        vec.push_back(temp->data);
        temp=temp->next;
        cnt++;
    }
    for (int i=vec.size()-1; i>=0;i--) {
        cout<<vec[i]<<endl;
    }
}