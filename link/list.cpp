#include<list.h>
#include<stdio.h>

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0

LinkList::LinkList()
{
	list = NULL;
	length = 0;
}

LinkList::~LinkList()
{
	if(ClearList())
	{
		list = NULL;
		return;
	}
	printf("~LinkList failure\n");
	return;
}

int LinkList::ListEmpty()
{
	if((NULL == list) && (0 == length))
	{
		return TURE;
	}
	return FALSE;
}

int LinkList::ClearList()
{
	if((NULL == list) && (0 == length))
	{
		return OK;
	}
	Node *p = list;
	Node *q = p->next;
	while(NULL != p)
	{
		q = p->next;
		free(p);
		p = q;
		length--;
	}
	list = 	NULL;
	if(0 != length)
	{
		return ERROR;
	}
	return OK;
}

int LinkList::GetElem(int index, int &elem)
{
	if((index <= 0) || (index > length))
	{
		printf("ERROR index argument:%d\n", index);
		return ERROR;
	}
	Node *p = list;
	while(index != 1)
	{
		p = p->next;
		index--;
	}
	elem = p->data;
	return OK;
}

int LinkList::InsertElem(int index, int &elem)
{
	if((index <= 0) && (index > (length +1)))
	{
		printf("ERROR index argument:%d\n", index);
		return ERROR;
	}
	Node tmpNode* = new Node;
	if(NULL == tmpNode)
	{
		printf("new failure\n");
		return ERROR;
	}
	Node.data = elem;
	
	Node *p = list;
	Node *q = p->next;
	
	while(index > 1)
	{
		p = p->next;
		q = p->next;
		index--;
	}
	
	p->next = tmpNode;
	tmpNode->next = q;
	length++;
	return OK;
}

int LinkList::DeleteElem(int index, int &elem)
{
	if((index <= 0) && (index > length))
	{
		printf("ERROR index argument:%d\n", index);
		return ERROR;
	}
	Node *p = list;
	Node *q = p->next;
	if(index == 1)
	{
		free(p);
		list = q;
		length--;
		return OK;
	}
	while(index != 2)
	{
		p = p->next;
		q = p->next;
		index--;
	}
	
	p->next = q->next;
	free(q);
	length--;
	return OK;
}
void LinkList::Display()
{
	Node *p =list;
	printf("Display is start:\n")
	if(p = NULL)
	{
		printf("the list is empty!\n");
	}
	int i = 1;
	while(p != NULL)
	{
		printf("index:%d,data:%d\n", i, p->data);
		p = p->next;
		i++;
	}
	return;
}

int LinkList::GetLength(int &length)
{
	return length;
}

int main()
{
	class LinkList *Link;
	Link->InsertElem(1,1);
	Link->InsertElem(2,2);
	Link->InsertElem(3,3);
	Link->InsertElem(4,4);
	Link->Display();
	
	printf("delete the 3th element:\n");
	Link->Display();
	
	printf("get the 2th element:\n");
	Link->GetElem();
	
	printf("insert the element £¨2,8£©\n");
	Link->InsertElem(2,8);
	Link->Display();
	
	printf("clear list:\n");
	Link->ClearList();
	Link->Display();
	return 0;
}
