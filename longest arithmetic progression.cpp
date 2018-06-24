int lengthLongestAP(vector<int> A, int n)
{
    //sort input array
    sort(A.begin(),A.end());
    //initialize dp where A[i][j] contains length of AP with A[i] and A[j] as 1st two elements
    vector<vector<int> > dp(A.size(),vector<int> (A.size(),2));
    int length = 0; //solution
    for(int j=n-1;j>0;j--)
    {
        int i=j-1, k=j+1;
            //a+c=2*b
            int next = 2*A[j];
            // cout<<next<<endl;
            while(i>=0 && k<n)
            {
                if(A[i] + A[k] == next)
                {    
                    dp[i][j] = dp[j][k] + 1;
                    if(dp[i][j] > length){
                        length = dp[i][j];
                    }
                    i--;
                    k++;
                }
                else if(A[i] + A[k] < next)  //   a+c < 2*b, find a higher value of c by incrementing k  (array is in sorted order)
                    k++;
                else                          //   a+c > 2*b, find a lower value of a by decrementing i   (array is in sorted order)
                    i--;
            }

        }
    return length;
}
int Solution::solve(const vector<int> &A) {
    int n=A.size();
    if(A.size()==1) return 1;
    if(A.size()==2) return 2;
    return lengthLongestAP(A,n);
}
