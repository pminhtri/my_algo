#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

typedef struct Node *node;

node createNode(int data)
{
    node temp = new Node();
    temp->data = data;
    temp->next = NULL;
    return temp;
}

bool isEmpty(node head)
{
    return head == NULL;
}

int size(node head)
{
    int count = 0;
    node temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertHead(node &head, int data)
{
    node temp = createNode(data);
    if (isEmpty(head))
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}

void insertTail(node &head, int data)
{
    node temp = createNode(data);
    if (isEmpty(head))
    {
        head = temp;
    }
    else
    {
        node last = head;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = temp;
    }
}

void insertAt(node &head, int data, int position)
{
    if (position < 0)
    {
        cout << "Invalid position" << endl;
    }
    else if (position == 0)
    {
        insertHead(head, data);
    }
    else if (position >= size(head))
    {
        insertTail(head, data);
    }
    else
    {
        node temp = createNode(data);
        node prev = NULL;
        node curr = head;
        for (int i = 0; i < position; i++)
        {
            prev = curr;
            curr = curr->next;
        }
        temp->next = curr;
        prev->next = temp;
    }
}

void deleteHead(node &head)
{
    if (isEmpty(head))
    {
        cout << "List is empty" << endl;
    }
    else
    {
        node temp = head;
        head = head->next;
        delete temp;
    }
}

void deleteTail(node &head)
{
    if (isEmpty(head))
    {
        cout << "List is empty" << endl;
    }
    else
    {
        node prev = NULL;
        node curr = head;
        while (curr->next != NULL)
        {
            prev = curr;
            curr = curr->next;
        }
        if (prev == NULL)
        {
            head = NULL;
        }
        else
        {
            prev->next = NULL;
        }
        delete curr;
    }
}

void deleteAt(node &head, int position)
{
    if (isEmpty(head))
    {
        cout << "List is empty" << endl;
    }
    else if (position < 0 || position >= size(head))
    {
        cout << "Invalid position" << endl;
    }
    else if (position == 0)
    {
        deleteHead(head);
    }
    else if (position == size(head) - 1)
    {
        deleteTail(head);
    }
    else
    {
        node prev = NULL;
        node curr = head;
        for (int i = 0; i < position; i++)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;
    }
}

void printList(node head)
{
    if (isEmpty(head))
    {
        cout << "List is empty" << endl;
    }
    else
    {
        node temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}