
class Solution {
public:
    void insert_tail(ListNode*&head,ListNode*&tail,int val)
    {
        ListNode* newNode=new ListNode(val);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=tail->next;
    }
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
    bool isPalindrome(ListNode* head) {
        ListNode*newHead=NULL;
        ListNode*newTail=NULL;
        ListNode*tmp=head;
        while(tmp!=NULL)
        {
            insert_tail(newHead,newTail,tmp->val);
            tmp=tmp->next;
        }
        reverse(newHead,newHead);
        tmp=head;
        ListNode*tmp2=newHead;
        while(tmp!=NULL)
        {
            if(tmp->val!=tmp2->val)
            {
                return false;
            }
            tmp=tmp->next;
            tmp2=tmp2->next;
        }
        return true;
    }
};