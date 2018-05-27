int Solution::isPalindrome(int A) {
    int size=0,i=0,b=A,c=A,flag=0;
    if(b<0) return flag;
    while(b){
        b/=10;
        size++;
    }
    
    if(size==1||size==0) return flag++;
    
    for(i=0;i<size/2;i++){
        if((c/(10^(size-i-1)))%10 != (c/(10^i))%10){
            flag=0;
            break;
        }
    }
    return flag;
}
