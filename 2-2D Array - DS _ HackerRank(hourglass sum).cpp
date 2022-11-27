int hourglassSum(vector<vector<int>> arr) {
    int rows=arr.size()-1;
    int columns=arr[0].size()-1;
    int max=-99999;
    int sum=0;
    for(int i=1;i<rows;i++){
        for(int j=1;j<columns;j++){
            sum=0;
            //value in the middle
            sum+=arr[i][j];
            
            //upper row
            sum+=arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1];
        
            //lower row
            sum+=arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
          
            if(max<sum)
                max=sum;
        }   
    }
    return max;
    
}