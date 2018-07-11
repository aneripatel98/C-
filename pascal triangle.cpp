vector<vector<int> > Solution::generate(int A) {
    int i=2,j=0,size=A,temp=1;
    vector<int> r,b; //r - row
    vector<vector<int>> p; //p - pascals triangle
    
    //base cases
    if(A==0) return p;
    r.push_back(1);
    p.push_back(r);
    if(A==1) return p;
    else if(A==2) {
        r.push_back(1);
        p.push_back(r);
        return p;
    }
    else{
        r.push_back(1);
        p.push_back(r);
    }
    
    //rows >2
    for(i=2;i<A;i++){
        //columns
        r.clear();
        for(j=0;j<=i;j++){
            //if first or last element of row, push 1
            if(j==0 || j==i) 
                r.push_back(1);
            //otherwise, add element right above in previous row, and diagonal
            else
                r.push_back(p[i-1][j] + p[i-1][j-1]);
        }
        p.push_back(r);
    }
    return p;
}
