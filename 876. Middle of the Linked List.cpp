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
        int count=1;
        ListNode* start=head;
        while(head->next!=NULL){
            count++;
            head=head->next;
        }
        int n=count/2;
        while(n>0){
            start=start->next;
            n--;
        }
        return start;
        
    }
};
