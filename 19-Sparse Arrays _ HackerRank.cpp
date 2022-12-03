vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    
    vector<int> vec(queries.size());
    int cnt;
    for (int i=0;i<queries.size();i++) {
        cnt=0;
        for (int j=0; j<stringList.size();j++) {
            if (queries[i]==stringList[j]) {
                cnt++;    
            }
        }
        vec[i]=cnt;
    }
    
    return vec;
}