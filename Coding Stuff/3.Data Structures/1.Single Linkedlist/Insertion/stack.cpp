#define MAX 10
#include<iostream>
#include<conio.h>
using namespace std;
class Stack
{
	int data[MAX];
	int front ;
public:
	//int push(int);
	//int pop();
	//int top();
	//int is_empty();
	//int is_full();
	int is_empty()
	{
		return(front==0);
	}
	int is_full()
	{
		return (front==MAX);
	}
	int push(int a)
	{
		if(is_full())
		{
			return -1;
		}
		else
		{
			data[front++]=a;
			return 1;
		}
	}
	int pop()
	{
		if(is_empty())
		{
			return -1;
		}
		else
		{
			return data[--front];
		}
	}
	int top()
	{
		if(is_empty())
		{
			return -1;
		}
		else
		{
			return data[front-1];
		}

	}
	void disp()
	{
		for(int i=front ; i>=0; i--)
		{
			cout<<data[i]<<endl;
		}
	}

};
int main()
{
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.disp();
	system("pause");
}
