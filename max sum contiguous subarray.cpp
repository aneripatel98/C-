int Solution::maxSubArray(const vector<int> &A) {

    int size=A.size(),s=0,ms=A[0],i=0,start=0,stop=0;
    vector<int> sum(size,0);
    //s-sum, ms-max sum
    sum[0] = A[0]; //assigning inital value of dp
    for(i=1;i<size;i++){
        if(sum[i-1]>0){
                sum[i]=sum[i-1] + A[i];
        }
        else{
            sum[i] = A[i];
        }
        if(sum[i]>ms){
            ms=sum[i];
        }
    }
    return ms;
}
