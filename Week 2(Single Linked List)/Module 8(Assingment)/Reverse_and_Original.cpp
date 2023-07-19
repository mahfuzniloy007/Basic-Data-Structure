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
void print_reverse(Node *head)
{
    if (head == NULL)
        return;
    print_reverse(head->next);
    cout << head->val << " ";
}
void print_recursivly(Node *head)
{
    if (head == NULL)
        return;
    cout << head->val << " ";
    print_recursivly(head->next);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        input(head, tail, val);
    }
    print_reverse(head);
    cout << endl;
    print_recursivly(head);
    return 0;
}