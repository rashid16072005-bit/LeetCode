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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* new_node = new ListNode(0);
        ListNode* t = new_node;
        ListNode* temp = head;
        // ListNode* temp2 = head->next;
        // while(temp2){
        //     if(temp1->val==temp2->val){
        //         while(temp1->val==temp2->val){
        //             temp2 = temp2->next;
        //         }
        //         temp1 = temp2;
        //         if(temp2) temp2 = temp2->next;
        //     }
        //     else{
        //         ListNode* new_node = new ListNode(temp1->val);
        //         t->next = new_node;
        //         t = t->next;
        //         temp1 = temp2;
        //         temp2 = temp2->next;
        //     }

        // }
        // if(temp1) ListNode* last = new ListNode(temp1->val);
        // if(temp1) t->next = last;
        // return new_node->next;
        map<int , int> m;
        while(temp){
            m[temp->val]++;
            temp = temp->next;
        }
        for(auto mp : m){
            if(mp.second == 1){
                ListNode* new_node = new ListNode(mp.first);
                t->next = new_node;
                t = t->next;
            }
        }
        return new_node->next;
    }
};