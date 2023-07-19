#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;

        Node(int val)
        {
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};
int lengthCount(Node* head)
{
    Node* tmp=head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void insert(Node* &head, Node* &tail,int pos,int val)
{
    Node* newNode = new Node(val);
    Node* tmp=head;
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    else if(pos==0)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }
    else if(pos==lengthCount(head))
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        return;
    }
    for (int i = 1; i < pos; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}
void printHead(Node *head)
{
    Node *tmp = head;
    cout<<"L ->"<<" ";
    while (tmp != NULL)
    {
        
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void printTail(Node *tail)
{
    Node *tmp = tail;
    cout<<"R ->"<<" ";
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail= NULL;
    int q;
    cin>>q;
    while(q--)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos>lengthCount(head)) cout<<"Invalid"<<endl;
        else
        {
            insert(head, tail, pos, val);
            printHead(head);
            printTail(tail);
        }
    }
    return 0;
}