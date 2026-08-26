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
    ListNode* reverse(ListNode* head){
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        int sum = 0;
        ListNode* res = new ListNode(0);
        ListNode* temp = res;
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        int carry = 0;
        while(l1 && l2)
        {
            sum = l1->val + l2->val +carry;
            ListNode* new_node = new ListNode(sum%10);
            carry = sum/10;
            temp->next = new_node;
            temp = temp->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        if(l2==NULL){
            while(l1){
                sum = l1->val +carry;
                ListNode* new_node = new ListNode(sum%10);
                carry = sum/10;
                temp->next = new_node;
                temp = temp->next;
                l1 = l1->next;
            }
            if(carry!=0) temp->next = new ListNode(carry);
        }
        else{
            while(l2){
                sum = l2->val +carry;
                ListNode* new_node = new ListNode(sum%10);
                carry = sum/10;
                temp->next = new_node;
                temp = temp->next;
                l2 = l2->next;
            }
            if(carry!=0) temp->next = new ListNode(carry);
        }
        return reverse(res->next);
    }
};