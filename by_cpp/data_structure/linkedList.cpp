// A complete working C++ program to demonstrate all insertion methods
// All the methods are implemented in a single file for simplicity

#include <bits/stdc++.h>
using namespace std;

// A linked list node
class Node
{
public:
    int data;
    Node *next;
};

// Given a reference (pointer to pointer) to the head of a list and an int, inserts a new node on the front of the list.
void push(Node **head_ref, int new_data)
{
    // Allocate node
    Node *new_node = new Node();

    // Put in the data
    new_node->data = new_data;

    // Make next of new node as head
    new_node->next = (*head_ref);

    // Move the head to point to the new node
    (*head_ref) = new_node;
}

void insertAfter(Node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        cout << "The given previous node cannot be NULL" << endl;
        return;
    }

    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void append(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    Node *last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_node;
    return;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << " " << node->data;
        node = node->next;
    }
}