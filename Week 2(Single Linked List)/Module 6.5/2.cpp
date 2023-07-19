#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekn last node e
    tmp->next = newNode;
}
void duplicate(Node *head)
{
    Node*tmp=head; 
    int flag=0;
    while (tmp!=NULL)
    {
        if (tmp==tmp->next)
        {
            flag=1;
        }
    }
    if (flag==0)
    {
        cout<<"NO"<<endl;
    }
    else if(flag==1)
    {
        cout<<"YES"<<endl;
    }
}
int main()
{
    int val;
    Node*head=NULL;
    while (true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,val);
    }
    duplicate(head);
    return 0;
}