int Solution::trailingZeroes(int A) {
    int i,c=0;
    while(A>0)
    {
        c+=A/5;;
        A=A/5;
    }
    return c;
}
