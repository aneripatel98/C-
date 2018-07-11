int bsearch(vector<vector<int>> &A, int B){
    int i=0,start=0,mid,rows=A.size(),cols = A[0].size(),end=rows*cols-1;
    
    while(start<=end){
        mid=start+(end-start)/2;
        
        //i=mid/cols, j=mid%cols -> A[i][j]
        if(A[mid/cols][mid%cols]==B) return 1;
        else if(A[mid/cols][mid%cols]>B){
            end = mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return 0;
}
int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    return bsearch(A, B);
}
