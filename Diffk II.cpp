int Solution::diffPossible(const vector<int> &A, int B) {
    int i=0,j=0;
    //base case
    if(A.size()==0||A.size()==1) return 0;
    
    unordered_map <int,int> m;
    
    for(i=0;i<A.size();i++){
        m.insert({A[i],i});
    }
    
    for(j=0;j<A.size();j++){
        int k=B+A[j];
        if(m.find(k)!=m.end()){
            if(m[k]!=j)
                return 1;t
        }
    }
    
    return 0;
}
