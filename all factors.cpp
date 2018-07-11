vector<int> Solution::allFactors(int A) {
    int i=0;
    vector<int> sol;
    
    for(i=1;i<=sqrt(A);i++){
        if(A%i==0){
            sol.push_back(i);
            if(i!=sqrt(A))
                sol.push_back(A/i);
        }
    }
    sort(sol.begin(),sol.end());
    return sol;
}
