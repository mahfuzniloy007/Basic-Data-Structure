class Solution {
public:
    void reverse(ListNode*&head,ListNode*crnt)
    {
        if(crnt->next==NULL)
        {
            head=crnt;
            return;
        }
        reverse(head,crnt->next);
        crnt->next->next=crnt;
        crnt->next=NULL;
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return head;
        reverse(head,head);
        return head;
    }
};