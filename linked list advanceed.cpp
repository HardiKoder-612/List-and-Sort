#include <iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
};
void printList(node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}
 
int main()
{
    int n,value;
   node *prev,*head;
   node *p;
   head=new node();
   cout<<"\nEnter the number of nodes: ";
   cin>>n;
   cout<<"\nEnter the value of node 1: ";
   cin>>value;
   head->data=value;
   head->next=NULL;
   prev=head;
   for(int i=2;i<=n;i++)
   {
       p=new node();
       cout<<"\nEnter data of Node "<<i<<": ";
       cin>>value;
       p->data=value;
       p->next=NULL;
       
       prev->next=p;
       prev=prev->next;
   }
   cout<<"\nThe entered list is->\n";
   while(head!=NULL)
   {
        cout << head->data << " ";
        head = head->next;
   }
}