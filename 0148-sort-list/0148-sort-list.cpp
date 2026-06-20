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
    ListNode* merge(ListNode* list1,ListNode* list2){
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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;

        // M-I -> This Algo. gaves TLE
        // ListNode* a = head;
        // while(a->next){
        //     ListNode* temp = a->next;
        //     while(temp){
        //         if(a->val>=temp->val){
        //             int num = a->val;
        //             a->val = temp->val;
        //             temp->val = num;
        //         }
        //         temp = temp->next;
        //     }
        //     a = a->next;
        // }

        // M-II -> By Merge Sort

        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* a = head;
        ListNode* b = slow->next;
        slow->next = NULL;
        a = sortList(a);
        b = sortList(b);
        ListNode* c = merge(a,b);
        return c;

    }
};