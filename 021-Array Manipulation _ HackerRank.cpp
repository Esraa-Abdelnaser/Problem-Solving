//pass all cases 
long arrayManipulation(int n, vector<vector<int>> queries) {

    vector<long> arr(n+1,0);
    int start=0;
    int end=0;
    int value=0;
    long max=0;
    for(int i=0;i<queries.size();i++){
        start=queries[i][0];
        end=queries[i][1];
        value=queries[i][2];
        arr[start-1]+=value;
        if(end<n){
            arr[end]-=value;
        } 
    }
    long sum = 0;
    for(int j=0;j<n;j++){
        sum += arr[j]; 
            if(sum>max) 
                max = sum;
    }
    return max;
}

//first try, it does not pass all cases because of time i think
/*
long arrayManipulation(int n, vector<vector<int>> queries) {

    int start=0;
    int end=0;
    int value=0;
    int arr[n];
    long max=0;
    for(int i=0;i<n;i++){
       arr[i]=0;
    }
    for(int i=0;i<queries.size();i++){
        start=queries[i][0];
        end=queries[i][1];
        value=queries[i][2];
        for(int j=start-1;j<end;j++){
            arr[j]+=value;
            if(max<arr[j]){
                max=arr[j];
                cout<<max<<endl;
            }
        }
    }
    return max;
}
*/
