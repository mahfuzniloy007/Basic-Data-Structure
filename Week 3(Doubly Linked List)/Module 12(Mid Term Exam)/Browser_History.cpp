#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        string val;
        Node* next;
        Node* prev;

        Node(string val)
        {
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};
void insert(Node* &head, Node* &tail,string n)
{
    Node* newNode = new Node(n);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode; 
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}
void visitedAddress(Node*head,Node* &cur,string address)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        if(tmp->val==address)
        {
            cout<<tmp->val<<endl;
            cur=tmp;
            return;
        }
        tmp=tmp->next;
    }
    cout<<"Not Available"<<endl;
}
void nextAddress(Node* &cur)
{
    if(cur->next!=NULL)
    {
        cur=cur->next;
        cout<<cur->val<<endl;
    }
    else cout<<"Not Available"<<endl;
}
void previousAddress(Node* &cur)
{
    if(cur->prev!=NULL)
    {
        cur=cur->prev;
        cout<<cur->val<<endl;
    }
    else cout<<"Not Available"<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    string str;
    while(cin >> str && str != "end")
    {
        insert(head,tail,str);
    }
    int q;
    cin>>q;
    string cmnd,address;
    Node* cur=head;
    for(int i=0;i<q;i++)
    {
        cin>>cmnd;
        if(cmnd=="visit")
        {
            cin>>address;
            visitedAddress(head,cur,address);
        }
        else if(cmnd=="next")
        {
            nextAddress(cur);
        }
        else if(cmnd=="prev")
        {
            previousAddress(cur);
        }
    }
    return 0;
}
