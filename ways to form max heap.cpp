#define MAXN 101 
long long int sol[MAXN]; 
long long int nck[MAXN][MAXN]; 
long long int lo[MAXN]; 
 
// dp method to calculate nCk
long long int choose(long long int n, long long int k)
{
    if (k > n)
        return 0;
    if (n <= 1)
        return 1;
    if (k == 0)
        return 1;
 
    if (nck[n][k] != -1)
        return nck[n][k];
 
    long long int answer = choose(n - 1, k - 1) + choose(n - 1, k);
    nck[n][k] = answer;
    return answer;
}
 
// calculate l for give value of n
long long int leftvalue(long long int n)
{
    if (n == 1)
        return 0;
    long long int h = lo[n];
    long long int maxh = (1 << h); //(2 ^ h)
    long long int p = n - ((1 << h) - 1);
 
    // if more than half-filled
    if (p >= (maxh / 2))
        return (1 << h) - 1;
    else
        return (1 << h) - 1 - ((maxh / 2) - p);
}
 
// number of heaps for n
long long int numberOfHeaps(long long int n)
{
    if (n <= 1)
        return 1;
 
    if (dp[n] != -1)
        return dp[n];
 
    long long int left = leftvalue(n);
    long long int ans = (choose(n - 1, left) * numberOfHeaps(left)) * (numberOfHeaps(n - 1 - left));
    dp[n] = ans;
    return ans;
}

int Solution::solve(int A) {
     
    //set soln dp array
    for (int i = 0; i <= A; i++)
        dp[i] = -1;
    //set factorial and log array
    for (int i = 0; i <= A; i++){
        for (int j = 0; j <= A; j++){
            nck[i][j] = -1;
        }
    }
        
    int cl = -1;
    int cp = 1;
 
    // floor of log2
    for (int i = 1; i <= A; i++) {
        if (cp == i) {
            cl++;
            cp *= 2;
        }
        lo[i] = cl;
    }
 
    return (numberOfHeaps(A)%1000000007);
}
