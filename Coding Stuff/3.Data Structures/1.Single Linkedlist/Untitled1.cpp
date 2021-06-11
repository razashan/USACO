#include<iostream>
#define MAX 5
#include<conio.h>
using namespace std;
class Stack
{
	int arr[5];
	int top;
public:
	Stack()
	{
		top=-1;
	}
	void push(int a)
	{
		if(top>4)
		{
			cout<<"OverFlow"<<endl;
			return;
		}
		else
		{
			arr[++top]=a;
		}
	}
	int is_empty()
	{
		return(top==0);
	}
	int is_full()
	{
		return (top==MAX);
	}
	void pop()
	{
		if(top<0)
		{
			cout<<"UnderFlow"<<endl;
			return ;
		}
		else
		{
			cout<<arr[top];
			arr[top--];

		}
	}
	void disp()
	{
		for(int i=top; i>=0; i--)
		{
			cout<<arr[i]<<endl;
		}
	}
};
int main()
{
	int ch;
	int item;
	Stack s;
	while (1)
	{
		cout<<"1 For Push "<<endl;
		cout<<"2 For Pop  "<<endl;
		cout<<"3 For Display "<<endl;
		cout<<"4 Check is Empty"<<endl;
		cout<<"5 Check is Full "<<endl;
		cout<<"6 For Exit "<<endl;
		cin>>ch;
		switch (ch)
		{
		case 1:
			cout<<"Enter the element ";
			cin>>item;
			s.push(item);
			break;
		case 2:
			s.pop();
			break;
		case 3:
			s.disp();
			break;
		case 4:
			s.is_full();
			break;
		case 5:
			s.is_empty();
			break;
		case 6:
			exit(0);
			break;
		}
	}
	system("pause");
}
	
