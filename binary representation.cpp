string Solution::findDigitsInBinary(int A) {
    int i=0;
    string sol;
    while(A){
        s=to_string(A%2)+s;
        A/=2;
    }
    return s;
}
