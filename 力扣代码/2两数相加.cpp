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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *now = nullptr;
        ListNode *add = nullptr;
        ListNode *head = nullptr;
        int start=0;
        int state=0;
        int sum = 0;
        while(l1||l2){
            int n1 = l1 ? l1->val: 0;
            int n2 = l2 ? l2->val: 0;
            sum = n1+n2+state;
            state = sum/10;
            sum = sum%10;
            now=new ListNode(sum);
            if(start==0){
                head=add=now;
            }else{
                add->next=now;
                add=add->next;
            }
            start++;
            if (l1) {
                l1 = l1->next;
            }
            if (l2) {
                l2 = l2->next;
            }
            cout<<sum<<" "<<state<<endl;
        }
        if(state>0){
            add->next=new ListNode(state);
        }
        return head;
    }
};
