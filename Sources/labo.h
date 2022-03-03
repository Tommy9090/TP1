#include <stdint.h>
#include <assert.h>

#define HEAP_SIZE 1024 * 1024
extern uint8_t* heap;
extern size_t heap_top;

static void* allocate(size_t size) {
	size_t old_top = heap_top;
	heap_top += size;
	assert(heap_top <= HEAP_SIZE);
	return &heap[old_top];
}

typedef struct item {
	char* nom;
	int valeur;
}item;

typedef struct Node {
	Node* prev;
	void* data;
	Node* next;
}Node;

void Add(Node* node, void* newdata);

void Remove(Node* node);

void Sort(Node* node, int valeur);

item* FindByPos(Node* pos);

item* FindByName(Node* node, char* name);

int ItemQuantitie(Node* node, item* item);