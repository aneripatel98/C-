int Solution::solve(vector<int> &A) {
    int i=0,size=A.size();
    //base case
    if(size==0){
        return -1;
    }
    //sort
    sort(A.begin(),A.end());
    //for repeating numbers, consider the last occurence and check
    for(i=0;i<size;i++){
        if(A[i]==A[i+1] && i<(size-1)){
            continue;
        }
        //if number of numbers greater than number = number, return 1
        if(A[i]==(size-1-i))
            return 1;
    }
    //if no noble integer, return -1
    return -1;
}
