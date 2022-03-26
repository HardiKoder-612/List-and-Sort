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
void search(node *n,int key)
{
    int flag=0;
    while(n!=NULL)
    {
        if(n->data==key)
        {
            flag=1;
        }
        else
        n=n->next;
    }
    if(flag==1)
    {
        cout<<"\nElement is found: ";
    }
    else
    cout<<"\nElement not found.";
}
 
int main()
{
    int n,value,key;
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
   printList(head);
   cout<<"\nEnter the element to be searched: ";
   cin>>key;
   search(head,key);
}