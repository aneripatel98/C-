vector<int> Solution::sieve(int A) {
    int i=0,j=0;
    vector<bool> sol(A+1,0);
    vector<int> ans;
    //sieve
    for(i=2;i<=A/2;i++){
        for(j=i*2;j<=A;j+=i){
            sol[j]=1;
        }
    }
    //pushing into ans
    for(j=0;j<=A;j++){
        if(sol[j]==0){
            ans.push_back(j);
        }
    }
    return ans;
}
