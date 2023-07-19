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
void getmax(Node*head)
{
    Node*tmp=head;
    int mx=INT_MIN;
    while (tmp!=NULL)
    {
        if (tmp->val>mx)
        {
            mx=tmp->val;
        }
        tmp=tmp->next;
    }
    cout<<mx<<" ";
}
void getmin(Node*head)
{
    Node*tmp=head;
    int mn=INT_MAX;
    while (tmp!=NULL)
    {
        if (tmp->val<mn)
        {
            mn=tmp->val;
        }
        tmp=tmp->next;
    }
    cout<<mn<<endl;
}
int main()
{
    int val;
    Node*head=NULL;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,val);
    }
    getmax(head);
    getmin(head);
    return 0;
}