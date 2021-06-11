#include<iostream>
#include<conio.h>
struct node
{
	int data;
	struct node *link;
};
struct node* root=NULL;
int len;
void append(void);
void addatbegin(void);
void addatafter(void);
int length(void);
void display(void);
void deletee(void);
void addatbegin( void)
{
}
void addafter(void)
{
}
void delete(void)
{

}

using namespace std;
int main(){
	int ch;
	while (1)
	{
		
		cout<<"Single  Linked list Operations "<<endl;
		cout<<"1 for Append "<<endl;
		cout<<"2 ADD At begin "<<endl;
		cout<<"3 Add After "<<endl;
		cout<<"4 Length "<<endl;
		cout<<"5 Display "<<endl;
		cout<<"6 Delete "<<endl;
		cout<<"7 Exit "<<endl;
		cout<<"Enter your choice ";
		cin>>ch;
		switch (ch)
		{
		case 1:
			append();
			break;
		case 2:
			addatbegin();
			break;
		case 3:
			addafter();
			break;
		case 4:
			len=length();
			cout<<"Length is "<<len <<endl;
			break;
		case 5:
			display();
			break;
		case 6:
			deletee();
			break;
		case 7:
			exit(0);
		
		default:
			cout<<"In-Valid Input "<<endl;

		}

	}
	getch();
}
void append()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	cout<<"Enter the data ";
	cin>>temp->data;
	temp->link=NULL;
	if(root==NULL)  // list is empty
	{
		root=temp;
	}
	else
	{
		struct node*p;
		p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
}
int	length()
{
	struct node *temp;
	int count =0;
	temp=root; // because we need to start counting fdrom first node
	while(temp!=NULL)
	{
		count++;
	temp=	temp->link;

	}
	return count;

}
void display()
{
	struct node *temp;
	temp=root;
	if(temp==NULL)
	{
		cout<<"List is empty "<<endl;
	}
	else
	{
		while (temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->link;
		}
	}
		
}
void delete(void)
{
	struct node * temp;
	int loc
		;
	cout<<"Enter the loc ";
	cin>>loc;
	if(loc>length())
	{
		cout<<"out of range ";
	}
	else if ( loc==1)
	{
		temp=root;
		root=temp->link;
		temp->link=NULL;
		free(temp);
	}
	else
		
	{
		struct node * p=root,*q;
		int i;
		while (i<loc-1)
		{
			{
				p=p->link;
				i++;
				q=p->link;
				p->link=q->link;
				q->link=NULL;
				free(q);
			}
		}
	}
}
