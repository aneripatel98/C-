vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int r=A.size();
    int c=A[0].size();
    vector <vector<int> >sol;
    
    for(int j=0;j<c;j++){
        vector<int> row;
        int col=j;
        int i=0;
        while(i<=j){
            row.push_back(A[i++][col--]);
        }
        sol.push_back(row);
    }
    
    for(int i=1;i<r;i++){
        vector<int> row;
        int ro=i;
        int j=c-1;
        while(j>=i){
            row.push_back(A[ro++][j--]);
        }
        sol.push_back(row);
    }
    
    // for(int i=0;i<sol.size();i++){
    //     for(int j=0;j<sol[0].size();j++){
    //         cout<<sol[i][j];
    //     }
    //     cout<<endl;
    // }
    return sol;
}
