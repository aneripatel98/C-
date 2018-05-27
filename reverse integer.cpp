int Solution::reverse(int A) {
    int sum=0,i=0,size=0,flag=0,b=A,c=A,d=0,n=-1;
    //if negative
    if(b<0){n=1;b=b*-1;c=c*-1;}//negative
    //size
    while(b){
        b=b/10;
        size++;
    }
    if(size==0 || size==1) return A;
    //sum
    if(size==10 && c%10>2) return 0;
    while(i<size){
        d=(int)(double(c)/pow((double)10,(double)i))%10;
        if((INT_MAX-sum) > (d*(int)pow(10.0,(double)size-i-1))){
            sum =sum + (d*(int)pow(10.0,(double)size-i-1));
            i++;
        }
        else
            return 0;
    }
    return -1*n*sum;
}
