#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
}*head;
clist(int n)
{
	node *newnode, *temp;
	int data;
	head=new node();
	if(head==NULL)
	{
		cout<<"\nUnable to allocate memory";
		exit(1);
	}
	else
	{
		cout<<"\nEnter data of first node: ";
		cin>>data;
		head->data=data;
		head->next=NULL;
		temp=head;
		for(int i=1;i<n;i++)
		{
			newnode= new node();
			if(newnode==NULL)
			{
				cout<<"\nUnable to allocate memory";
				break;
			}
			else
			{
			cout<<"\nEnter data of node "<<i+1<<": ";
			cin>>data;
			newnode->data=data;
			newnode->next=NULL;
			temp->next=newnode;
			temp=temp->next;
		}
		}
	}
}
void dbeg()
{
	if(head==NULL)
	{
		cout<<"\nThe list is empty.";
	}
	node *temp;
	temp=head;
	head=head->next;
}
void dlast()
{
	if(head->next==NULL)
	{
		head=NULL;
	}
	node *temp=head,*slnode;
	while(temp->next!=NULL)
	{
		slnode=temp;
		temp=temp->next;
	}
	delete temp;
	slnode->next=NULL;
}
void display()
{
	node *temp;
	if(head==NULL)
	{
		cout<<"\nList is empty.";
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<"\t";
			temp=temp->next;
		}
		cout<<endl;
	}
}
int main()
{
	int n,ch;
	cout<<"\nEnter the number of nodes in the list: ";
	cin>>n;
	clist(n);
	cout<<"\nList before deletion is->\n";
	display();
	cout<<"\n1. Deletion from beginning.\n2. Deletion from end. \nEnter you choice-> ";
	cin>>ch;
	if(ch==1)
	{
		dbeg();
		cout<<"\nList after deletion is->\n";
		display();
	}
	else
	{
		dlast();
		cout<<"\nList after deletion is->\n";
		display();
	}
	return 0;
}
