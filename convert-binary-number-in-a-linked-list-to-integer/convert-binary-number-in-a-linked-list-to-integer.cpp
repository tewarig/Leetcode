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
    int getDecimalValue(ListNode* head) {
        ListNode *curr = head;
        int count = 0;
        long long int two = 1;
        while(curr->next != NULL){
            two *=2;
            curr = curr->next;
            
        }
       curr = head;
        int num = 0;
        while(curr != NULL){
            num += two*(curr->val);
            
            two /= 2;
            curr=curr->next;
        }
        return num;        
        
    }
};