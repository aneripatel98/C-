//compare lexicographically and not by length
bool sortbydig(int i,int j){
    string s1 = to_string(i);
    string s2 = to_string(j);
    return ((s1+s2)>(s2+s1));
}
string Solution::largestNumber(const vector<int> &A) {
    int i=0;
    string ans;
    //copy array A into sol
    vector<int> sol = A;
    //sort array by fn sortbydig
    sort(sol.begin(),sol.end(),sortbydig);
    
    //soln
    for(i=0;i<sol.size();i++){
        ans+=to_string(sol[i]);
    }
    
    //base case handling
    if(ans[0]=='0'){
        return "0";
    }
    
    return ans;
}
