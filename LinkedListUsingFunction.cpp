#include<iostream>
#include<stdlib.h>
using namespace std;


struct demo
{
int data;
struct demo *next;

};
struct demo *firstNode(int input)
{
   struct demo *n=(struct demo*)malloc(sizeof(struct demo));
    n->data=input;
    n->next=NULL;
   
   return n;
}
struct demo *createNode(int input)
{
   struct demo *n1=(struct demo*)malloc(sizeof(struct demo));
   n1->data=input;
   n1->next=NULL;
   
   return n1;
}
void connection(struct demo*n,struct demo*n1)
{
	n->next=n1;
}
int main()
{
	struct demo*d=firstNode(10);
    struct demo*d1=createNode(30);	
	
	connection(d,d1);
	
	
}


