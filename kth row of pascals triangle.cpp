vector<int> Solution::getRow(int A) {
    vector<int> row;
    int c = 1;
    //capacity - no. of elements in specified row
    int capacity = A + 1;
    for(int i=1;i<=capacity;i++){
        row.push_back(c);
        c = c * (capacity - i )/i;
    }
    return row;
}