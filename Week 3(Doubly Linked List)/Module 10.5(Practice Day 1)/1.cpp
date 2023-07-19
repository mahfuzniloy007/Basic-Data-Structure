#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

// void print_normal(Node *head)
// {
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
// }

// void print_reverse(Node *tail)
// {
//     Node *tmp = tail;
//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->prev;
//     }
//     cout << endl;
// }

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

int countLength(Node *head)
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

void same(Node *head1, Node *head2, int sz1, int sz2)
{
    int cnt = 0;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->val == head2->val)
        {
            cnt++;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if (sz1 != sz2)
    {
        cout << "NO" << endl;
    }
    else if (cnt == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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
        insert_tail(head1, tail1, val);
    }
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head2, tail2, val);
    }
    int sz1 = countLength(head1);
    int sz2 = countLength(head2);
    same(head1, head2, sz1, sz2);
    return 0;
}