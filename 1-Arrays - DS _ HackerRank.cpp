vector<int> reverseArray(vector<int> a) {
    int temp=0;
    int j=a.size()-1;
    cout<<j<<endl;
    for(int i=0;i<=j/2;i++){
        temp=a[i];
        a[i]=a[j-i];
        a[j-i]=temp;
    }
    return a;
}