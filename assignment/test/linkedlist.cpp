#include<iostream>
#include<string>
#include <cstdlib>

using namespace std;

// We created a node
struct Node{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr){
    while(ptr!=NULL){
        cout << "[Element: " << ptr->data << "]" << endl;
        ptr = ptr->next;
    }
}

struct Node* insertAtBegining(struct Node* head, int newData){
    //creating a new node
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = newData; // Sets the data of new node to newData
    newNode->next =  head; // Sets the next pointer of new node to current head
    head = newNode; // Updates the head to point to the newNode
    return head;
}

void insertAtGiven(struct Node* prevNode, int num) {
    if(prevNode==NULL){
        cout<<"Invalid Node Pointer"<<endl;
        return;
    }

    //create a new node
    struct Node* new_Node= (struct Node*) malloc(sizeof(struct Node));
    new_Node->data = num;
     
    //set next pointer of new_Node to next pointer of prevNode
    new_Node->next = prevNode->next;
    
    //set next pointer of prevNode to new_Node
    prevNode->next = new_Node; 
}

void insertAtMiddle(struct Node* head, int data , int position){
    if(position<1){
        return;
    }

    // Creating a new node
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    // Find the node before the desired position
    struct Node* current = head;
    for(int i = 0; i < position-1 && current != NULL; i++){
        current = current->next;
    }

    // Check if position is beyond the end of the list
    if (current == NULL) {
        free(new_node);
        return;
    }

    // Insert the new node
    new_node->next = current->next;
    current->next = new_node;
}

int main(){
    struct Node *left;
    struct Node *middle;
    struct Node *right;

    // Allocate memory for nodes in linked list in heap
    left = (struct Node*) malloc(sizeof(struct Node));
    middle = (struct Node*) malloc(sizeof(struct Node));
    right = (struct Node*) malloc(sizeof(struct Node));

    // linking left and middle node
    left->data = 8;
    left->next = middle;

    // linking middle and right node
    middle->data = 22;
    middle->next = right;

    // terminating at right node
    right->data = 43;
    right->next = NULL;
  
    cout << "Linked List:" << endl;
    //left = insertAtMiddle(left, 33, 2);
    insertAtGiven(middle, 15);
    //insertAtBegining(left, 5);

    linkedListTraversal(left);
    return 0;
}
