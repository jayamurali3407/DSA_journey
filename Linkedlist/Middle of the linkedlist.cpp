#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    node *middlenode(node *head)
    {

        if (head == NULL)
            return NULL;
        node *slow = head;
        node *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;       // moves 1 step
            fast = fast->next->next; // moves 2 steps
        }
        return slow;
    }
};

int main()
{
    node *head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    head->next->next->next = new node(4);
    head->next->next->next->next = new node(5);
    head->next->next->next->next->next = new node(6);

    Solution sol;

    node *middle = sol.middlenode(head);

    cout << "The middle node is : " << middle->data << endl;

    return 0;
}