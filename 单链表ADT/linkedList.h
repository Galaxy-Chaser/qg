/***************************************************************************************
 *	File Name				:	linkedList.h
 *	CopyRight				:	2023 QG Studio
 *	SYSTEM					:   win11
 *	Create Data				:	2023.3.19
 *
 *
 *--------------------------------Revision History--------------------------------------
 *	No	version		Data			Revised By			Item			Description
 *
 *
 ***************************************************************************************/

 /**************************************************************
*	Multi-Include-Prevent Section
**************************************************************/
#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

/**************************************************************
*	Macro Define Section
**************************************************************/

#define OVERFLOW -1
#define len sizeof(struct line)

/**************************************************************
*	Struct Define Section
**************************************************************/

// define struct of linked list
struct line
{
	int data;
	struct line *next;
};

static int n=0;

/**************************************************************
*	Prototype Declare Section
**************************************************************/

/**
 *  @name        : struct line *creat(struct line *head);
 *	@description : create an empty linked list 
 *	@param		 : head(the head node)
 *	@return		 : head
 *  @notice      : None
 */
struct line *creat(struct line *head);

/**
 *  @name        : struct line *deleteline(struct line *head);
 *	@description : destroy a linked list, free all the nodes
 *	@param		 : head(the head node)
 *	@return		 : None
 *  @notice      : None
 */
void deleteline(struct line *head);

/**
 *  @name        : struct line *insert(struct line *head)
 *	@description : insert node np after node p
 *	@param		 : np, p
 *	@return		 : head
 *  @notice      : None
 */
struct line *insert(struct line *head);

/**
 *  @name        : struct line *deletenode(struct line *head)
 *	@description : delete the node with the exact data 
 *	@param		 : p1,p2,p3
 *	@return		 : head
 *  @notice      : None
 */
struct line *deletenode(struct line *head);

/**
 *  @name        : struct line *reverselist(struct line *head)
 *	@description : reverse the linked list
 *	@param		 : head(the head node)
 *	@return		 : head
 *  @notice      : None
 */
struct line *reverselist(struct line *head);

/**
 *  @name        : void judgealoopLinkedList(struct line *head)
 *	@description : judge whether the linked list is looped
 *	@param		 : fa,sl
 *	@return		 : None
 *  @notice      : None
 */
void judgealoopLinkedList(struct line *head);

/**
 *  @name        : void findmidnode(struct line *head)
 *	@description : find the middle node in the linked list
 *	@param		 : fa,sl
 *	@return		 : head
 *  @notice      : choose to finish
 */
void findmidnode(struct line *head);

/**
 *  @name        : void findmidnode(struct line *head)
 *	@description : make a circular linked list
 *	@param		 : head
 *	@return		 : none
 *  @notice      : none
 */
void makelooplink(struct line *head);

/**
 *  @name        : void print(struct line *head)
 *	@description : output the data
 *	@param		 : head
 *	@return		 : none
 *  @notice      : none
 */
void print(struct line *head);

void listlength(void);

 /**************************************************************
*	End-Multi-Include-Prevent Section
**************************************************************/
#endif
