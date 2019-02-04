#include <stdio.h>
#include <stdlib.h>

typedef struct IntNode_struct {
	int dataVal;
	struct IntNode_struct* nextNodePtr;
} IntNode;

IntNode* CreateNode(int dataInit, IntNode* nextLoc) {
    IntNode* tempNode = NULL;

    tempNode = (IntNode*)malloc(sizeof(IntNode));
    tempNode->dataVal = dataInit;
    tempNode->nextNodePtr = nextLoc;

    return tempNode;
}

// Print dataVal
void PrintNodeData(IntNode* thisNode) {
    printf("%d", thisNode->dataVal);
}

IntNode* FindNode(int searchData, IntNode* startingNode) {
    return NULL;
}

void InsertNodeAfter(int dataInit, IntNode* thisNode) {
   thisNode->nextNodePtr=CreateNode(dataInit, thisNode->nextNodePtr);
}


void print_menu();

int main(void) {
	char cmd;
	int newData;
	int oldData;

	IntNode* headNode = NULL; // Create intNode objects
	IntNode* tempNode = NULL;
	IntNode* lastNode = NULL;
	IntNode* tempNode2 = NULL;
	int listLength = 0;

	headNode = CreateNode(0,NULL); // empty header node
	lastNode = headNode; // pointer to last node in the list

	do
	{
		print_menu();
		scanf(" %c", &cmd);

		switch (cmd)
		{
		case '+'://Insert x at the end
			scanf("%d", &newData);
			InsertNodeAfter(newData, lastNode);
			lastNode-> = lastnode ->nextPtr;
            headnote = dataVal++;
            break;
		case '*': //insert x at head
			scanf("%d", &newData);
			printf("------------------\n");
			printf("NOT IMPLEMENTED YET.\n");
			printf("------------------\n");
			break;

		case 'P': case 'p'://Print current list contents
			printf("------------------\n");
			printf("NOT IMPLEMENTED YET.\n");
			printf("------------------\n");
			break;

		case '^': //Replace item x with y
			scanf("%d %d", &oldData, &newData);
			printf("------------------\n");
			printf("NOT IMPLEMENTED YET.\n");
			printf("------------------\n");
			break;

		case '>': //Insert y after x
			scanf("%d %d", &oldData, &newData);
			printf("------------------\n");
			printf("NOT IMPLEMENTED YET.\n");
			printf("------------------\n");
			break;

		case '<': //Insert y before x
			scanf("%d %d", &oldData, &newData);
			printf("------------------\n");
			printf("NOT IMPLEMENTED YET.\n");
			printf("------------------\n");
			break;

		case '-'://Remove the data item
			scanf("%d", &oldData);
			printf("------------------\n");
			printf("NOT IMPLEMENTED YET.\n");
			printf("------------------\n");
			break;

		case 'C': case 'c'://Clear the list
			printf("------------------\n");
			printf("NOT IMPLEMENTED YET.\n");
			printf("------------------\n");
			break;

		case 'E': case 'e'://Empty list?
			printf("------------------\n");
			printf("NOT IMPLEMENTED YET.\n");
			printf("------------------\n");
			break;

		case 'F': case 'f'://Full list?
			printf("------------------\n");
			printf("NOT IMPLEMENTED YET.\n");
			printf("------------------\n");
			break;

		case 'L': case 'l'://Current List Size
			printf("------------------\n");
			printf("NOT IMPLEMENTED YET.\n");
			printf("------------------\n");
			break;

		case '?'://Search list for x
			scanf("%d", &oldData);
			printf("------------------\n");
			printf("NOT IMPLEMENTED YET.\n");
			printf("------------------\n");
			break;

		case 'M': case 'm': //Menu
			print_menu();
			break;

		case 'Q': case 'q':                   // Quit test program
			break;

		case 'P': case 'p':

		tempNode = headNode->nextNodePtr;
		while(tempNode!= NULL){
		    PrintNodeData(tempNode);
		    tempNode = tempNode -> nextNodePtr;
		}

		default:                               // Invalid command
			printf("Invalid command\n");
			break;
		}
	} while (cmd != 'Q'  &&  cmd != 'q');

	return 0;
}

void print_menu()
{
	printf("Menu...\n");
	printf("  M      : Menu (displays this message)\n");
	printf("  +x     : Insert x at the end\n");
	printf("  *x     : Insert x at the head\n");
	printf("  >x y   : Insert y after item x\n");
	printf("  <x y   : Insert y before item x\n");
	printf("  ^x y   : Replace item x with y\n");
	printf("  -x     : Find & Remove the item x\n");
	printf("  ?x     : Search list for x\n");
	printf("  C      : Clear the list\n");
	printf("  E      : List Empty?\n");
	printf("  F      : List full?\n");
	printf("  L      : Current List Size\n");
	printf("  P      : Print current list contents\n");
	printf("  Q      : Quit the test program\n");
	printf("Enter Command: ");
}
