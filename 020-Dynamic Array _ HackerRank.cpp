/*
Query WXY
w is the first digit, x is second digit, y third digit
the condition on W = 1 or 2
*/
vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    int lastAnswer=0;
    vector<int> ans;
    vector<vector<int>> arr(n);
    int idx;
    for(int i;i<queries.size();i++){
        if(queries[i][0]==1){
            idx=((queries[i][1]  ^ lastAnswer)%n);
            arr[idx].push_back(queries[i][2]);
        }
        else if(queries[i][0]==2){
            int idx=((queries[i][1])^lastAnswer)%n;
            lastAnswer=arr[idx][(queries[i][2])%arr[idx].size()];
            ans.push_back(lastAnswer);
        }
    }
    return ans;
}