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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // if ( list1[i] -> list1[i + 1]   )   
        ListNode dummy(0);
        ListNode* node = &dummy;

        // traverse set curr to 
        while(list1 && list2) {
            // it needs to make 2 comparision, the next node and the curr node in the second list
            if(list1->val  < list2->val ) {
                //append and move the 
                node->next = list1;
                list1 = list1-> next;
            } else {
                node->next = list2;
                list2 = list2-> next;
            }
            node = node-> next;
        }

            if(list1) {
                node->next = list1;
            } else {
                node->next = list2;
            }

            return dummy.next;
        
    }
};
