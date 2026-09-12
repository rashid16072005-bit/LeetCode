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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l1 = list1;
        ListNode* l2 = list2;
        ListNode* c = new ListNode(-1);
        ListNode* tc = c;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val<l2->val){
                tc->next = l1;
                tc = tc->next;
                l1 = l1->next;
            }
            else{
                tc->next = l2;
                tc = tc->next;
                l2 = l2->next;
            }
        }
        if(l1==NULL) tc->next = l2;
        else tc->next = l1;
        return c->next;
    }
};