void Solution::setZeroes(vector<vector<int> > &A) {
 int r = A.size();
 int c = A[0].size();
 bool r1 = false, c1 = false;

for(int j=0;j<c;j++){
     if(A[0][j]==0 ){
         r1=true;
         break;
     }
 }
 
 for(int j=0;j<r;j++){
     if(A[j][0]==0){
         c1=true;
         break;
         
     }
 }
 
 for(int i =1;i<r;i++){
     for (int j=1;j<c;j++){
        if(A[i][j]==0){
            A[i][0]=0;
            A[0][j]=0;
        }
     }
 }
 
 
 for(int i=1;i<r;i++){
     for(int j=1;j<c;j++){
         if(A[i][0]==0 || A[0][j]==0){
             A[i][j]=0;
         }
     }
 }
 
 if(r1){
     for(int i=0;i<c;i++){
         A[0][i]=0;
     }
 }
 
 if(c1){
     for(int i=0;i<r;i++){
         A[i][0]=0;
     }
 }
}