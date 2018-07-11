vector<int> Solution::maxset(vector<int> &A) {
    int i=0,ms = -1,me=-1,start=0,end=0,n=A.size();
    long int count=0, max=0;
    vector<int> sol;
    
    for (i=0;i<n;i++){
        //set start
        if(A[i]<0){
            count=0;
            start=i+1;
        }
        //set end
        else{
            count+=A[i];
            end=i;
        }
        //if max then transer values of start and end to ms and me
        if(count>max){
            max = count;
            ms = start;
            me = end+1;
        }
        //if = counts, compare sizes
        if(count==max){
            if((end-start+1) > (me - ms)){
                ms = start;
                me = end + 1;
            }
            //if = size, compare beginnings
            else if((end+1-start) == (me - ms)){
                //check starting points
                if(start < ms){
                    ms = start;
                    me = end + 1;
                }
            }
                
        }   
    }
    
    //push numbers from indices ms to me into sol vector
    for(i = ms; i < me; i++){
        sol.push_back(A[i]);
    }
    return sol;
}
