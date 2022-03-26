#include <bits/stdc++.h>
using namespace std;
 
class node {
public:
    int data;
    node* next;
};
 
// This function prints contents of linked list
// starting from the given node
void printList(node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}
 
// Driver code
int main()
{
    node* first = NULL;
    node* second = NULL;
    node* third = NULL;
    node* head;
    // allocate 3 nodes in the heap
    first = new node();
    second = new node();
    third = new node();
    head=first;
    first->data = 1; // assign data in first node
    first->next = second; // Link first node with second
 
    second->data = 2; // assign data to second node
    second->next = third;
 
    third->data = 3; // assign data to third node
    third->next = NULL;
 
    printList(head);
 
    return 0;
}