vector<string> Solution::fizzBuzz(int A) {
    string t="Fizz";
    string f="Buzz";
    string c;
    vector<string> sol;
    for(int i=1;i<=A;i++){
        if(i%15==0) sol.push_back(t+f);
        else if(i%3==0) sol.push_back(t);
        else if(i%5==0) sol.push_back(f);
        else{
            string c=to_string(i);
            sol.push_back(c);
        }
    }
    return sol;
}
