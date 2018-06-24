
int Solution::lis(const vector<int> &A) {
    vector<int> dp ( A.size(),0);
    int n=A.size();
    int ans=1;
    for(int i=n-1;i>-1;i--){
        dp[i]=1;
        for(int j=i+1;j<n;j++){
            if(A[j]>A[i])dp[i]=max(dp[i],dp[j]+1);
            ans=max(ans,dp[i]);
        }
    }
    
    return ans;
}
