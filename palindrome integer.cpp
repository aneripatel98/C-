int Solution::isPalindrome(int A) {
    // int size=0,i=0,b=A,c=A,flag=0;
    // if(b<0) return flag;
    // while(b){
    //     b/=10;
    //     size++;
    // }
    
    // if(size==1||size==0) return flag++;
    
    // for(i=0;i<size/2;i++){
    //     if((c/(10^(size-i-1)))%10 != (c/(10^i))%10){
    //         flag=0;
    //         break;
    //     }
    // }
    string b = to_string(A);
    // cout<<b;
    int i=0,j=b.size()-1;
    while(i<j){
        if(b[i]==b[j]){
            i++;j--;
        }
        else return 0;
    }
    return 1;
}
