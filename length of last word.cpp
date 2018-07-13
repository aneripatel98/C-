int Solution::lengthOfLastWord(const string A) {
    int length = 0;
    int size=A.size();
    int count=0;
    int lspace=0;
    int flag=0;
    //rstrip blank space
    for (int i=A.size()-1;i>-1;i--){
    
        if(isspace(A[i])){
            size--;
        }
        else break;
    }
    string a=A.substr(0,size);
    
    //find last space
    for(auto c:a){
        if (isspace(c)){
            flag=1;
            lspace=count; //storing index
        }
        count++;
    }
    //if one word
    if(flag==0) return count;
    //size of last word
    return size-lspace-1;
    
    //     for(int i = A.size()-1 ; i >=0; i--){
    //         char c = A[i];
    //         if(isspace(c)){
    //             if(length != 0){
    //                 return length;
    //             }
    //             else{
    //                 length = 0;    
    //             }
    //         }
    //         else{
    //             length++;    
    //         }
    //     }
    
    // return length;
}
