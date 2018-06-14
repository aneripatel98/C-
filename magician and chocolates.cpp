int sol( priority_queue<int> pq, int n){
    int ans = 0;
    int mod = pow(10, 9) + 7;
    for(int i=0;i<n;i++){
        int top = pq.top();
        
        ans = (ans + (top%mod))%mod;
        
        pq.pop();
        pq.push(top/2);
    }
    
    return ans;
}

int Solution::nchoc(int A, vector<int> &B) {
    
    priority_queue<int> pq;
    if(B.size() == 0){
        return 0;
    }
    
    for(int i = 0; i < B.size(); i++){
        pq.push(B[i]);
    }

    return sol(pq, A);
}