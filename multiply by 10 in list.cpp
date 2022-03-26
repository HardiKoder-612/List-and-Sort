/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
class node
{
    public:
    int data;
    node *next;
};
int main()
{
    int n;
    node *head=new node();
    node *head2=new node();
    node *temp=new node();
    std::cout<<"\nEnter the number of nodes: ";
    std::cin>>n;
    std::cout<<"\nEnter the data of first node: ";
    std::cin>>head->data;
    head->next=NULL;
    temp=head;
    head2=head;
    for(int i=1;i<n;i++)
    {
        node *t=new node();
        std::cout<<"\nEnter the data value of node "<<i+1<<": ";
        std::cin>>t->data;
        t->next=NULL;
        temp->next=t;
        temp=temp->next;
    }
    std::cout<<"\nEntered list is->\n";
    while(head!=NULL)
    {
        std::cout<<head->data<<"\t";
        head=head->next;
    }
    temp=head2;
    while(temp!=NULL)
    {
        temp->data*=10;
        temp=temp->next;
    }
    std::cout<<"\nUpdated array is->\n";
    while(head2!=NULL)
    {
        std::cout<<head2->data<<"\t";
        head2=head2->next;
    }
    delete head2;
    delete temp;
    delete head;
    return 0;
}
