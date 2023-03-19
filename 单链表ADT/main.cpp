#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"
#include "LinkedList.cpp"

int main()
{
	int choice,re=1;
	struct line *head;
	do
	{
		printf("0 Exit the program\n");
		printf("1 Create a linked list\n");
		printf("2 Delete an existing linked list\n");
		printf("3 Insert a node\n");
		printf("4 Delete a node\n");
		printf("5 Reverse a linked list\n");
		printf("6 Output data from a linked list\n");
		printf("7 Determine whether the linked list is circular\n");
		printf("8 Output the length of the linked list\n");
		printf("9 Find the middle node\n");
		printf("10 Make a linked list looping\n");
		printf("Please enter the number to select the corresponding function\n");
		scanf("%d",&choice);
		switch(choice)//通过输入数字来选择功能 
			{
			case 0:re=0;break;
			case 1:head=creat(head);break;
			case 2:deleteline(head);break;
			case 3:head=insert(head);break;
			case 4:head=deletenode(head);break;
			case 5:head=reverselist(head);break;
			case 6:print(head);break;
			case 7:judgealoopLinkedList(head);break;
			case 8:listlength();break;
			case 9:findmidnode(head);head;
			case 10:makelooplink(head);
			default:
				{
					printf("Without this option, hit Enter to reselect\n");
					system("pause");
					system("cls");
					break;
				}
			}
	}while(re!=0);	
	return 0;
}
