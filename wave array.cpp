vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    int i=0, size = A.size(), temp=0;
    for(i=1;i<size;i+=2){
        temp = A[i];
        A[i] = A[i-1];
        A[i-1] = temp;
    }
    return A;
}
