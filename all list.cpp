//Program to create a node and insert elementss in it.
#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};
int main()
{
	int n;
	cout<<"\nEnter the number of nodes: ";
	cin>>n;
	node *head= new node();
	node *head1= new node();
	node *list=new node();
	node *head2= new node();
	node *head3= new node();
	node *head4= new node();
	node *head5= new node();
	cout<<"\nEnter the data value of first node: ";
	cin>>head->data;
	head->next=NULL;
	list=head;
	head1=head;
	head2=head;
	head3=head;
	head4=head;
	head5=head;
	for(int i=1;i<n;i++)
	{
		node *temp=new node();
		cout<<"\nEnter the data value of node "<<i+1<<": ";
		cin>>temp->data;
		temp->next=NULL;
		list->next=temp;
		list=list->next;
	}
	cout<<"\nEntered node is->\n";
	while(head!=NULL)
	{
		cout<<head->data<<"\t";
		head=head->next;
	}
	/*
	//Program to add node at the beginning
	node *first=new node();
	cout<<"\nEnter the value of node to be entered at the beginning: ";
	cin>>first->data;
	first->next=head1;
	head1=first;
	cout<<"\nEntered node is->\n";
	while(head1!=NULL)
	{
		cout<<head1->data<<"\t";
		head1=head1->next;
	}
	//program to add node after a certain index
	int index;
	node *temp1=new node();
	node *ele=new node();
	temp1=head2;
	cout<<"\nEnter the index: ";
	cin>>index;
	for(int i=0;i<index;i++)
	{
		temp1=temp1->next;
		if(temp1==NULL)
		{
			cout<<"\nCannot insert more....\nTerminating the program";
		}
	}
	cout<<"\nEnter the data value: ";
	cin>>ele->data;
	ele->next=temp1->next;
	temp1->next=ele;

	while(head2!=NULL)
	{
		cout<<head2->data<<"\t";
		head2=head2->next;
	}
	return 0;
	//program to insert a node at the ending
	node *temp2=new node();
	node *last=new node();
	cout<<"\nEnter the data avlue of last node: ";
	cin>>last->data;
	temp2=head3;
	while(temp2->next!=NULL)
	{
	    temp2=temp2->next;
	}
	temp2->next=last;
	cout<<"\nEntered node is->\n";
	while(head3!=NULL)
	{
		cout<<head3->data<<"\t";
		head3=head3->next;
	}
	//program to delete a node from beginning
	node *temp3=new node();
	temp3=head4;
	head4=temp3->next;
	delete temp3;
	cout<<"\nEntered node is->\n";
	while(head4!=NULL)
	{
		cout<<head4->data<<"\t";
		head4=head4->next;
	}*/
	//program to delete from ending
	node *temp4=new node();
	node *slast;	
	temp4=head5;
	while(temp4->next!=NULL)
	{
		slast=temp4;
		temp4=temp4->next;
	}
	slast->next=NULL;
	while(temp4!=NULL)
	{
		cout<<temp4->data<<"\t";
		temp4=temp4->next;
	} 
}

