string Solution::longestCommonPrefix(vector<string> &A) {
    vector<char> c;
    int i,j,flag;
    char ch;
    for(i=0;i<A[0].size();i++){
        //1st string, character i
        ch=A[0][i];
        //flag turns 1 if doesnt match
        flag=0;
        for(j=0;j<A.size();j++){
            
            if(A[j][i]!=ch){
                flag=1;
                break;
            }
            
        }
        //if match
        if(flag==0) c.push_back(ch);
        else break;
    }
    string str(c.data(),c.size());
    return str;
}
