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
void sorting(Node *head)
{
    // Node*tmp=head;
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
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

void find_mid(Node *head)
{
    Node *tmp = head;
    int size = countLength(head);
    int mid = (size + 1) / 2;
    for (int i = 1; i < mid; i++)
    {
        tmp = tmp->next;
    }
    if (size % 2 == 0)
    {
        cout << tmp->val << " " << tmp->next->val << endl;
    }
    else if (size % 2 != 0)
    {
        cout << tmp->val << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    sorting(head);
    int size = countLength(head);
    find_mid(head);
    return 0;
}