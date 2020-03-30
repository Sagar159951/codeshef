#include<constream.h>
struct node
{	int data;
	node *link;
}*n,*t=NULL,*h;
void insert(int x)
{	n = new node;
	n->data = x;
	n->link = NULL;
	if(t==NULL)
	{	t=h=n;
		cout<<"inserted";
	}
	else
	{	n->link=t;
		t=n;
		cout<<"\nInserted";
	}

}
void remove()
{	if(t==NULL)
		cout<<"\nlist is empty";
	else
	{       n=t;
		t=t->link;
		cout<<"\nRemoved";
		delete n;
	}
}
void traverse()
{	if(t==NULL)
		cout<<"\nList is empty";
	else
	{	n=t;
		while(n!=NULL)
		{	cout<<endl<<n->data;
			n=n->link;
		}
	}
}
void main()
{ 	clrscr();
	insert(2);
	insert(3);
	insert(4);
	traverse();
	remove();
	traverse();
	getch();

}