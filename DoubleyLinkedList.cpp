#include<iostream>
#include<stdlib.h>
using namespace std;
struct panda
{
	int data;
	struct panda*next;
	struct panda*prv;
};

struct panda*newNode(int input)
{
	struct panda*n=(struct panda*)malloc(sizeof(struct panda));
		n->data=input;
		n->next=NULL;
		n->prv=NULL;
		
		return n;
}
struct panda*createNode(int input)
{
	struct panda*n1=(struct panda*)malloc(sizeof(struct panda));
		n1->data=input;
		n1->next=NULL;
		n1->prv=NULL;
		
		return n1;
}
void connect(struct panda *n,struct panda *n1)
{
	n->next=n1;
	n1->prv=n;
}
void traverse(struct panda*temp)
{
	
	//struct panda *temp=n;
	
	while(temp!=NULL)
	{
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}
int main()
{
	struct panda*d1=newNode(10);
	struct panda*d2=createNode(20);
	connect(d1,d2);
	traverse (d1);
}




