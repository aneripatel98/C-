int Solution::isPalindrome(string A) {
    int i=0, j=A.size()-1;
    while(i<j){
        //cout<<A[i]<<" : "<<A[j]<<endl;
        //if match
        if(A[i]==A[j] || A[i]==(A[j]+32) || (A[i]+32)==A[j]){
            i++;
            j--;
        }
        //if i is a special character
        else if(!((A[i]<=122 && A[i]>=97)||(A[i]>=65 && A[i]<=90)||(A[i]>=48 && A[i]<=57))){
            if(A[i]!=A[j] || A[i]!=(A[j]+32) || (A[i]+32)!=A[j]){
                // cout<<A[i]<<" : "A[j]<<endl;
                i++;
            }
        }
        //if j is a special character
        else if(!((A[j]<=122 && A[j]>=97)||(A[j]>=65 && A[j]<=90)||(A[j]>=48 && A[j]<=57))){
            if(A[i]!=A[j] || A[i]!=(A[j]+32) || (A[i]+32)!=A[j]){
                j--;
            }
        }
        //if both are special characters
        else if(!((A[i]<=122 && A[i]>=97)||(A[i]>=65 && A[i]<=90)) && !((A[j]<=122 && A[j]>=97)||(A[j]>=65 && A[j]<=90)) && !((A[i]>=48 &&A[i]<=57)||(A[j]>=48 && A[j]<=57))
        ){
            i++;
            j--;
        }
        
        else{
            return 0;
        }
    }
    return 1;
}
