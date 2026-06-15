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
    ListNode* deleteMiddle(ListNode* head) {
        // ListNode* slow = head;
        // ListNode* fast = head;
        // while(fast && fast->next){
        //     slow = slow->next;
        //     fast = fast->next->next;
        // }
        int n = 0;
        ListNode* temp = head;
        while(temp){
            n++;
            temp = temp->next;
        }
        if(n==2){
            head->next = NULL;
            return head;
        }
        if(n==1) return NULL;
        temp = head;
        for(int i=1;i<n/2;i++){
            temp = temp->next;
        }
        ListNode* temp2 = temp->next;
        temp->next = temp2->next;
        return head;
    }
};