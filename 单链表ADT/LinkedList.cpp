#include "linkedList.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct line *creat(struct line *head)//创建链表 
{
	if(head!=NULL)//判断链表是否存在 
	{
		printf("A linked list already exists\n");
	}
	else
	{
		n=0;
		struct line *p1,*p2;
		p1=p2=(struct line*)malloc(len);
		printf("Please input the integer data.\nIf you want to finish the entry, please enter 0 after entering the data\n");
		scanf("%d",&p1->data);
		head=NULL;
		while(p1->data!=0)
		{
			n=n+1;
			if(n==1) head=p1;
			else p2->next=p1;
			p2=p1;
			p1=(struct line*)malloc(len); 
			scanf("%d",&p1->data);
		}
		p2->next=NULL;
		if(head==NULL)
		printf("You did not successfully create a linked list\n");//创建失败提示 
		else
		printf("You have created a linked list successfully\n");//创建成功提示 
	}
	system("pause");
	system("cls");
	return (head);
}

void deleteline(struct line *head)
{
	if(head==NULL)//判断链表是否存在 
	{
		printf("The linked list does not exist\n");
	}
	else
	{
		struct line *p;
		p=head;
		while(p!=NULL)
		{
			p=p->next;
			free(head);
			head=p;
		}
		printf("The linked list has been destroyed successfully\n");
	}
	system("pause");
	system("cls");
}

struct line *insert(struct line *head)
{
	if(head==NULL)//判断链表是否存在 
	{
		printf("The linked list does not exist\n");
	}
	else
	{
		int j,i;
		struct line *p,*np;//np=new p
		np=(struct line*)malloc(len);
		printf("Please input the new data\n");
		scanf("%d",&np->data);
		printf("There are %d nodes now\n",n);
		printf("Enter the number of nodes after which to insert the new node\n");//在第j个节点后插入 
		printf("If you want to insert before the head node, enter 0\n");
		scanf("%d",&j);
		if(j!=0)
		{
			p=head;
			for(i=1;i<j;i++)
			{
				p=p->next;
				if(p->next==NULL)
				break;
			}
			np->next=p->next;
			p->next=np;
		}
	else
	{
		p=head;
		head=np;
		np->next=p;
	}
	n++;
	printf("The node is successfully inserted\n");
	}
	system("pause");
	system("cls");
	return (head); 
}

struct line *deletenode(struct line *head)
{
	if(head==NULL)//判断链表是否存在 
	{
		printf("The linked list does not exist\n");
	}
	else
	{
		struct line *p1,*p2,*p3;
		printf("Please enter the data for the deleted node\n");
		int deledata;
		scanf("%d",&deledata);
		p2=p1=head;
		if(head->data==deledata)
		{
			p1=p1->next;
			head=p1;
			free(p2);
		}
		else
		{
			while(p1->data!=deledata)
			{
				p2=p1;
				p1=p1->next;
			}
			p3=p1;
			p1=p1->next;
			p2->next=p1;
			free(p3);
		}
		printf("The node is successfully deleted\n");
		n--;
	}
	system("pause");
	system("cls");
	return (head); 
}

struct line *reverselist(struct line *head)
{
	if(head==NULL)//判断链表是否存在 
	{
		printf("The linked list does not exist\n");
	}
	else
	{
		struct line *p1,*p2,*p3;
		p1=head;
		if(p1->next!=NULL)
		{
			p2=p1->next;
			if(p2->next!=NULL)
			{
				p3=p2->next;
				if(p1==head)
				{
					p1->next=NULL;
				}
				while(p3!=NULL)
				{
					p2->next=p1;
					p1=p2;
					p2=p3;
					p3=p3->next;
				}
				p2->next=p1;
				head=p2;
			}
			else
			{
				p1->next=NULL;
				head=p2;
				p2->next=p1;
			}
		}
	printf("The singly linked list was successfully flipped\n");	
	}
	system("pause");
	system("cls");
	return (head);
}

void print(struct line *head)//输出数据 
{
	if(head==NULL)//判断链表是否存在 
	{
		printf("The linked list does not exist\n");
	}
	else
	{
		int i;
		struct line *p;
		p=head;
		for(i=0;i<n;i++)
		{
			printf("%d ",p->data);
			if(i!=n-1)
			p=p->next;
		}
	}
		system("pause");
		system("cls");
	}

void judgealoopLinkedList(struct line *head)
{
	if(head==NULL)//判断链表是否存在 
	{
		printf("The linked list does not exist\n");
	}
	else
	{
		struct line *fa,*sl;
		fa=sl=head;
		while(1)
		{
			fa=fa->next;
			if(fa==NULL)
			{
				printf("That is not a circular linked list\n");
				break;
			}
			fa=fa->next;
			if(fa==NULL)
			{
				printf("That is not a circular linked list\n");
				break;
			}
			sl=sl->next;
			if(fa==sl)
			{
				printf("This is a circular linked list\n");
				break;
			}
		}
	}
	system("pause");
	system("cls");
}

void listlength(void)
{
	if(n==0)
	printf("The linked list does not exist\n");
	else
	printf("There are %d nodes\n",n);//可以遍历链表做
	system("pause");
	system("cls");
}

void findmidnode(struct line *head)
{
	if(head==NULL)//判断链表是否存在 
	{
		printf("The linked list does not exist\n");
	}
	else
	{
		struct line *fa,*sl;
		fa=sl=head;
		while(1)
		{
			fa=fa->next;
			if(fa==NULL)
			{
				printf("the midnode is %d\n",sl->data);
				break;
			}
			fa=fa->next;
			if(fa==NULL)
			{
				printf("the midnode is %d\n",sl->data);
				break;
			}
			sl=sl->next;
		}
	}
	system("pause");
	system("cls");
}

void makelooplink(struct line *head)
{
	if(head==NULL)//判断链表是否存在 
	{
		printf("The linked list does not exist\n");
	}
	else
	{
		struct line *p;
		p=head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=head;
		printf("The circular linked list was successfully built\n");
	}
	system("pause");
	system("cls");
}
