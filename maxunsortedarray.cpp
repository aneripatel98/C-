vector<int> Solution::subUnsort(vector<int> &A) {
    int i=0,size=A.size(),li=-1,ri=-1,min,max,f=0,maxi=0,mini=0;
    vector<int> sol;
    //left mismatch
    for(i=1;i<size;i++){
        if(A[i]<A[i-1]){
            li=i-1;
            break;
        }
    }
    
    //right mismatch
    for(i=(size-1);i>0;i--){
        if(A[i]<A[i-1]){
            ri=i;
            break;
        }
    }
    
    //find min and max
    min=A[li];max=A[li];
    for(i=li;i<=ri;i++){
        if(A[i]<min)min=A[i];
        if(A[i]>max)max=A[i];
    }
    
    //find pos of min
    for(i=0;i<li;i++){
            if(A[i]>min){
                li=i;
                break;
            }
    }
    
    for(i=size-1;i>ri;i--){
        if(A[i]<max){
            ri=i;
            break;
        }
    }
    
    if(li==-1 && ri==-1) sol.push_back(-1);
    else{
        sol.push_back(li);
        sol.push_back(ri);
    }
    return sol;
}
