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
void input(Node *&head, Node *&tail, int val)
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

int countLength(Node *&head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void same(Node *head1, Node *head2,int s1,int s2)
{
    int flag=0;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->val != head2->val)
        {
            flag++;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    if (s1!=s2)
    {
        cout<<"NO";
    }
    else if (flag==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        input(head1, tail1, val);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        input(head2, tail2, val);
    }
    int s1=countLength(head1);
    int s2=countLength(head2);
    same(head1, head2,s1,s2);
    return 0;
}