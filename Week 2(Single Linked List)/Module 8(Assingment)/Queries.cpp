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

void insert_at_head(Node *&head, int value)
{
    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = newnode;
        return;
    }

    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (tail == NULL)
    {
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    cin >> Q;

    while (Q--)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            insert_at_head(head, V);
            if (tail == NULL)
            {
                tail = head;
            }
        }
        else if (X == 1)
        {
            insert_at_tail(tail, V);
            if (head == NULL)
            {
                head = tail;
            }
        }

        cout << head->val << " " << tail->val << endl;
    }

    return 0;
}
