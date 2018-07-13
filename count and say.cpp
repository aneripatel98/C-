string Solution::countAndSay(int A) {
    //soln string
    string result = "";
    
    //if 0
    if(!A)
        return result;
        
    //if 1, initialize count
    string str = "1";
    int cnt = 1;
    
    //till A
    for (int i = 1; i<A; ++i)
    {
        //append count of number and number to result
        int len = str.length();
        for(int j = 0; j<len; j++)
        {
            //count no. of times a number appeared
            if (j+1 != len && str[j]==str[j+1])
            {
                ++cnt; 
            }
            //if not same, append count+number to end of result
            //reset count
            else
            {
                result += to_string(cnt) + str[j];
                cnt = 1;
            }
        }
        //empty result after done for every number
        str = result;
        result.clear();
    }
    return str;
}
