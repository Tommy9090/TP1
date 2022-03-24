#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "labo.h"

void Add(Node* node, void* newData)
{
	Node* nextNode = allocate(sizeof(Node));
	nextNode->data = newData;
	nextNode->prev = node;
	nextNode->next = node->next;
	node->next = nextNode;
	nextNode->prev->next = nextNode;
}

void Remove(Node* node)
{
	if (node->prev != NULL)
	{
		Node* last = node->prev;
		node->prev = last->prev;
		last->prev->next = NULL;
		last->prev = NULL;
		last->next = NULL;

	}
}

void Sort(Node* node, int valeur)
{

}

item* FindByPos(Node* head, Node* pos)
{
	Node* n = head->next;

	while (n != pos)
	{
		if (n == pos)
		{
			return n->data;
		}
		n = n->next;
	}
}

item* FindByName(Node* node, char* name)
{

}

int ItemQuantitie(Node* node, item* item)
{

}