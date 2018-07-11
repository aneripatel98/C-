#define mod 1000000007

int Solution::hammingDistance(const vector<int> &A) {

    long long int ans = 0;
    int count;
    
    //count no. of digits with ith bit 1
    //for each bit
    for(int i = 0; i < 31; i++){
        count = 0;
        //for each digit
        for(int j = 0; j < A.size(); j++){
            if(A[j] & (1 << i)){
                count++;
            }
        }
        //2*no. of digits that dont have the ith bit 1
        ans = ans + (2*count*(A.size()-count));
        //mod ans
        ans = ans%mod;
    }
    
return (int)ans;
    
}
