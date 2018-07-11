void Solution::arrange(vector<int> &A) {
    //A[i]/n gives new value, A[i]%n gives old value
    int i=0,n=A.size();
    for (i=0; i < n; i++){
        A[i] += (A[A[i]]%n)*n;
    }
    for (i=0; i<n; i++)
        A[i] /= n;
}
