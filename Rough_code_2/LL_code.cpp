#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};






void insert(struct node **head,int value)                     //from end
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));

    if(*head==NULL)
    {
        newnode->data=value;
        newnode->next=NULL;
        *head=newnode;
    }
    else
    {
         newnode->data=value;
         struct node *ptr=*head;
         while(ptr->next!=NULL)
         {
            ptr=ptr->next;
         }
         ptr->next=newnode;
         newnode->next=NULL;
    }    
}


void find_middle(struct node **head)
{
	if(*head==NULL)
	{
		cout<<"underflow";
	}
    
   else{
		struct node *ptr=*head;
		struct node *temp=*head;
            int a=0;

		while(ptr!=NULL)
		{
			ptr=ptr->next;	
                  a++;	
            }    
cout<<"length = "<<a;  

}
}




void display(struct node **head)
{
struct node *ptr=*head;
while(ptr!=NULL)
{
    cout<<" "<<ptr->data;
    ptr=ptr->next;
}
cout<<endl;

}





int main()
{
struct node *head;
head=NULL;
int x,ch;

while(1)
{
cout<<"enter ch :";
cin>>ch;

if(ch==1)
{
	cin>>x;
	insert(&head,x);
}

if (ch==2)
{
	find_middle(&head);
}

if (ch==3)
{
	display(&head);
}
}
    return 0;
}
