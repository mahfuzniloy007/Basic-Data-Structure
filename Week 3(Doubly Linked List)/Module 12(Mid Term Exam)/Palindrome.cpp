#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void insert_tail2(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

void reverse(Node *&head, Node *crnt)
{
    if (crnt->next == NULL)
    {
        head = crnt;
        return;
    }
    reverse(head, crnt->next);
    crnt->next->next = crnt;
    crnt->next = NULL;
}

int main()
{
    int val;
    Node *head = NULL;
    Node *tail = NULL;
    Node *newHead = NULL;
    Node *newTail = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    Node *tmp = head;
    while (tmp != NULL)
    {
        insert_tail2(newHead, newTail, tmp->val);
        tmp = tmp->next;
    }
    reverse(newHead, newHead);
    tmp = head;
    Node *tmp2 = newHead;
    bool flag=true;
    while (tmp != NULL)
    {
        if (tmp->val != tmp2->val)
        {
            flag=false;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    if(flag==true)
    {
        cout<<"YES"<<endl;
    }
    else if(flag==false)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}