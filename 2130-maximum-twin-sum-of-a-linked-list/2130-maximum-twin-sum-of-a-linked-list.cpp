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
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(slow->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* p1 = head;
        ListNode* p2 = slow->next;
        slow->next = NULL;
        ListNode* curr = p2;
        ListNode* prev = NULL;
        ListNode* Next = p2;
        while(curr){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        p2 = prev;
        int max = INT_MIN;
        while(head){
            if(max < p1->val+p2->val)
                max = p1->val+p2->val;
            p1 = p1->next;
            p2 = p2->next;
            head = head->next;
        }
        return max;
    }
};