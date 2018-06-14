/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    map<int,int> m;
    
    for(int i=0;i<A.size();i++){
        ListNode* c=A[i];
        while(c!=NULL){
            int v=c->val;
            if(m.find(v)!=m.end()){
                m[v]++;
            }
            else{
                m[v]=1;
            }
            c=c->next;
        }
    }
    auto it =m.begin();
    ListNode* head= NULL;
    ListNode* curr= NULL;
    
    while(it!=m.end()){
        while(it->second!=0){
            ListNode* n= new ListNode(it->first);
            if(head==NULL){
                head=n;
                curr=n;
            }
            else{
                curr->next=n;
                curr=curr->next;
            }
            it->second--;
        }
        it++;
    }
    return head;
}
