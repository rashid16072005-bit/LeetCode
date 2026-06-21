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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* l1 = list1;
        ListNode* l2 = list2;
        ListNode* temp = list1;
        int n = 1;
        while(temp){
            n++;
            temp = temp->next;
            if(n==a) l1 = temp;
            else if(n==b+1) l2 = temp;
            if(temp==l2) break;
        }
        l1->next = list2;
        while(list2->next) list2 = list2->next;
        list2->next = l2->next;
        return list1;
    }
};