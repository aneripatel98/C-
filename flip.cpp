vector<int> Solution::flip(string A) {
    int i=0,sum=0,finalsum=0,start=0,end=-1,size=A.size(),front=0,back=0,fs=-1,fe=-1;
    vector <int> res;
    for(i=0;i<size;i++){
        if(A[i]=='1'){
            sum-=1;
        }
        else{
            sum+=1;
        }
        
        if(sum<0){
            sum=0;
            start=i+1;
        }
        
        else if(sum>finalsum){
            finalsum=sum;
            end=i;
            fs=start;fe=end;
        }
    }
    //if start hasnt been changed, i.e. soln includes 1st element
    if(fe!=-1 && fs==-1) {
        fs=0;
        res.push_back(fs);
        res.push_back(fe);
    }
    //normal case
    else if(fe!=-1 && fs!=-1){
        fs++;fe++;
        res.push_back(fs);
        res.push_back(fe);
    }
    
    return res;
}
