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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode *> N;
        ListNode *now = headA;
        while(now!=NULL){
            N.insert(now);
            now = now->next;
        }
        now = headB;
        while(now!=NULL){
            if(N.count(now)==true){
                return now;
            }
            now = now->next;
        }
        return NULL;
    }
};
