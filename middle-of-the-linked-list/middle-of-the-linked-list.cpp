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
    ListNode* middleNode(ListNode* head) {
        ListNode *curr = head;
        ListNode *twoPoint = head;
        while(curr != NULL){
             if(twoPoint->next == NULL){
                break;
            }else if(twoPoint->next->next == NULL){
                curr = curr->next;
                break;
            }
            twoPoint = twoPoint->next->next;
            curr = curr->next;
        }
        return curr;        
    }
};