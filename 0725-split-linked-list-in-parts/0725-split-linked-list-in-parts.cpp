/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> v;
        int n = 0;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;
            n++;
        }
        int len = n/k;
        int rem = n%k;
        // int s = len;
        temp = head;
        while(temp)
        {
            ListNode* t = new ListNode(100);
            ListNode* tc = t;
            int s = len;
            if(rem>0) s++;
            rem--;
            for(int i=1;i<=s;i++)
            {
                tc->next = temp;
                temp = temp->next;
                tc = tc->next;
            }
            tc->next = NULL;
            v.push_back(t->next);
        }
        if(v.size()<k){
            int rest = k - v.size();
            for(int i=1;i<=rest;i++)
                v.push_back(NULL);
        }
        return v;
    }
};