void swap(int* i, int* j){
    int t = *i;
    *i = *j;
    *j = t;
}

int Solution::firstMissingPositive(vector<int> &A) {
    int j=0;
    int n=A.size();
    // move +ve numbers to right 
    for(int i=0;i<n;i++){
        if(A[i]>0){
            swap(A[i],A[j]);
            j++;
        }
    }
    //first missing positive number will be less than the size of the array
    //if integer a is found, mark index a negative 
    for(int i=0;i<j;i++){
        if(abs(A[i])<j && A[abs(A[i])]>0){
            A[abs(A[i])] =- A[abs(A[i])];
        }
    }
    //iterate array for 1st positive value, return its index if found
    for(int i=1;i<j;i++){
        if(A[i]>0)
        return i;
    }
    //if no positive value found, return 1
    //if no missing value, return next number
    return j+1;
}



    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more detail
