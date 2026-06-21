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
    ListNode* reverseList(ListNode* head)
    {
        ListNode* Next = head;
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr)
        {
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* a = head;
        ListNode* b = reverseList(slow->next);
        slow->next = NULL;
        ListNode* c = new ListNode(0);
        ListNode* tC = c;
        ListNode* tA = a;
        ListNode* tB = b;
        while(tA && tB){
            tC->next = tA;
            tA = tA->next;
            tC = tC->next;
            tC->next = tB;
            tB = tB->next;
            tC = tC->next;
        }
        tC -> next = tA;
        head = c->next;
    }
};