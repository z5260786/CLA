#include <stdlib.h>
#include <stdio.h>

//Node object
struct node {
    int data;
    struct node *next;
};

typedef struct node node;

node *head;

//Make empty list
void createEmpty() {
    head = NULL;
}

//If list is empty (TRUE) if not empty (FALSE)
int isEmpty() {
    if(head == NULL) {
        return 1;
    } else {
        return 0;
    }
}

/*
//Make a new node and add it to the start
void insertHead(int data) {
    node *n = (node*) malloc(sizeof(node));

    n->data = data;
    n->next = head;

    head = n;
}
*/

//Print all of list
void printList() {
    node *point = head;
    
    printf("List: [");
    
    if(isEmpty()) {
        printf("List is empty");
    } else {
        while(point != NULL) {
            printf("(%i)", point->data);
            point = point->next;
        }
    }

    printf("]\n");
}


/*
//Insert at end of list
void insertTail(int data) {
    node *point = head;

    node *n = (node*) malloc(sizeof(node));
    n->data = data;
    n->next = NULL;

    while(point->next != NULL) {
        point = point->next;
    }

    point->next = n;
}*/

//Delete node at start
void deleteHead() {
    node *n = head;

    head = n->next;
    free(n);
}

//Delete node at end
void deleteTail() {
    node *curr = head;
    node *prev;

    while(curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    }

    prev->next = NULL;
    free(curr);
}

//Insert item to list
void insertItem(int data) {
    node *curr = head;
    node *prev;

    node *n = (node*) malloc(sizeof(node));
    n->data = data;
    n->next = NULL;

    if(isEmpty()) {//Insert at start if empty (no order to check)
        head = n;
    } else if(curr->data > data) {//If head is greater than data
        n->next = curr;

        head = n;
    } else {
        while(curr != NULL && data > curr->data) { //If there is a next node and current node is less than or equal to
            prev = curr;
            curr = curr->next;
        }

        prev->next = n;
        n->next = curr;
    }
}

//Delete all with value data
void deleteItem(int data) {
    node *curr = head;
    node *prev = NULL;

    if(isEmpty()) {
        printf("List is empty.");
    } else {
        while(curr != NULL) {//Loop through list
            
            if(curr->data == data) {//If current node has same value
                if (prev == NULL) {//If it's the first item
                    head = curr->next;//Set new head to next item
                    free(curr);//Erase node
                    curr = head;
                } else {
                    prev->next = curr->next;//Skip current node
                    free(curr);//Erase node
                    curr = prev;//Make current node the old node to continue loop
                }
            }
            if(!isEmpty()) {    
                prev = curr;//Rotate through the nodes
                curr = curr->next;
            }
        }
    }
}

void main() {
    createEmpty();

    /*insertItem(2);
    insertItem(3);
    insertItem(1);

    printList();

    insertItem(4);

    printList();

    insertItem(2);insertItem(-2);insertItem(1);insertItem(7);insertItem(0);insertItem(2);
    
    printList();

    deleteItem(2);

    printList();*/

    insertItem(3);
    deleteItem(3);
    printList();
}
