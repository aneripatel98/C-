int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int x = A[0], y = B[0]; //present indices
    int total = 0, i, h, v, n=A.size();//total - total steps, h-horizontal steps, v-vertical steps  
    for(i = 1; i < n; i++){  
        h = abs(A[i] - x);  
        v = abs(B[i] - y);  
        x = A[i];  
        y = B[i];  
        if(h >= v){  
          total = total + h; 
          //min(h,v) steps diagonally and then h-v steps horizontal, totalling to h
        }else{  
          total = total + v; 
           //min(h,v) steps diagonally and then h-v steps horizontal, totalling to h

        }  
    }  
   return total;  
}
