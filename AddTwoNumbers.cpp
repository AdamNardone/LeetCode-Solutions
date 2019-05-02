/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry = 0, x = 0, y = 0;
        ListNode* result = new ListNode(0), *r = result; //create initial node for list
        
        while(l1 || l2){ //continue if there are stil not null nodes in either list
            
            x = l1 ? l1 -> val : 0; //if not null grab integer from list, else make 0
            y = l2 ? l2 -> val : 0;
            
            int sum = carry + x + y; 
            carry = sum / 10; //store carry value
            
            result -> next = new ListNode(sum %10); //node value cannot be higher than ten
            
            result = result -> next; //move to next node
            
            l1 = l1 ? l1->next : l1; //move to next node
            l2 = l2 ? l2->next : l2;
            }
        
        if (carry > 0) //if there is carry left over, create new node
            result -> next = new ListNode(carry);

        return r -> next; //returns result
        
        }
    };
