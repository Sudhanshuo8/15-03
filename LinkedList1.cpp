#include<iostream>
#include<stdlib.h>
using namespace std;

struct demo
{
	int data;
	struct demo *next;
};

struct demo*firstNode(int input)
{
	struct demo*n=(struct demo*)malloc(sizeof(struct demo));
	n->data=input;
	n->next=NULL;
	
	return n;
}
struct demo*createNode(int input)
{
	struct demo*c=(struct demo*)malloc(sizeof(struct demo));
	c->data=input;
	c->next=NULL;
	
	
	return c;
}
void connect(struct demo*n,struct demo*c)
{
	n->next=n;
}
void traverse(struct demo*temp)
{
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
int main()
{
	struct demo*d1=firstNode(10);
	struct demo*d2=createNode(20);
	struct demo*d3=createNode(30);
	
	connect(d1,d2);
	connect(d2,d3);
	
	traverse(d3);
	return 0;
}
