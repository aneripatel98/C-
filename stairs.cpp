int countstairs(int n){
    if(n<0) return 0;
    if(n==1) return 1;
    if(n==2) return 2;
    return (countstairs(n-2)+countstairs(n-1));
}
int Solution::climbStairs(int A) {
    return countstairs(A);
}
