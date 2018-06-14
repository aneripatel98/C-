vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    int size=A.size();
    int i;
    vector<vector<int>> v;
    vector<string> strs;
    unordered_map<string,vector<int>> m;
    
    //all possible fractions of all strings
    for(i=0;i<size;i++){
        string s="";
        s=A[i];
        sort(s.begin(),s.end());
        strs.push_back(s);
    }
    //assigning indices
    for(i=0;i<size;i++)
        m[strs[i]].push_back(i+1);
        
    for(auto it=m.begin();it!=m.end();it++){
        v.push_back(it->second);
    }
    return v;
}
