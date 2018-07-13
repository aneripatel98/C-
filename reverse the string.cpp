void Solution::reverseWords(string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
//     int i=0,start=0,end=A.size();
//     stack<string> c;
//     string temp;
    
//     // cout<<start<<" : "<<end<<endl;
//     //push words into stack
//     for(i=start;i<end;i++){
//         if(A[i]==' '){
//             while(start<i){
//                 if(A[start]!=' '){
//                     //cout<<start<<endl;
//                     temp=temp+A[start++];
//                 }
//             }
//             start++;
//             c.push(temp);
//             //cout<<temp<<endl;
//             temp="";
//         }
//     }
//     //cout<<c.top()<<endl;
//     for(i=start;i<end;i++){
//         if(A[i]!=32){
//             //cout<<i<<endl;
//             temp=temp+A[i];
//             //cout<<temp<<endl;
//         }        
//     }
//     //cout<<temp<<endl;
//     c.push(temp);
    
//     if(c.size()>1){
//         A="";
//         //cout<<c.top()<<endl;
//         A=A+c.top();
//         c.pop();
//         while(c.size()>=1){
//         //    cout<<c.top()<<endl;
//             A=A+" "+ c.top();
//             c.pop();
//         }
//     }
    stack<char> s;
    string sol;
    char c;
    int flag=0;
    int j=A.size()-1;
    for(;j>=-1;j--){
        if(isspace(A[j])||j==-1){
            flag=1;
            while(!s.empty()){
                c=s.top();
                sol+=c;
                s.pop();
            }
            sol+=" ";
        }
        else{
            c=A[j];
            s.push(A[j]);
        }
    }
    //removing final space
    sol= sol.substr(0,sol.size()-1);
    //if one word, string remains same
    if(flag==0)sol=A;
    //transfer sol to A
    A=sol;
}
