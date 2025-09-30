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
        ListNode* dummyNode=new ListNode(-1);
        ListNode* cur=dummyNode;
        int carry=0;
        while(l1!=NULL||l2!=NULL){
            int sum=carry;
            if(l1)sum=sum+l1->val;
            if(l2)sum=sum+l2->val;
            carry=sum/10;
            if(l1)l1=l1->next;
            if(l2)l2=l2->next;
            ListNode* newNode=new ListNode(sum%10);
            cur->next=newNode;
            cur=cur->next;
        }
        if(carry){
            ListNode* newNode=new ListNode(carry);
            cur->next=newNode;
            cur=cur->next;
        }
        return dummyNode->next;

    }
};