#include <iostream>
using namespace std;

// Define a class for nodes in a singly linked list
class Node
{
public:
    int data;     // Data stored in the node
    Node* next;   // Pointer to the next node in the list

    // Constructor to initialize a node with data
    Node(int data)
    {
        this->data = data;  // Initialize the data field
        this->next = NULL;  // Initialize the next pointer to nullptr
    }
};

// Function to insert a new node at the head of the linked list
void InsertAtHead(Node* &head, int d )
{
    // Create a new node with the given data
    Node* temp = new Node(d);

    // Make the new node point to the current head
    temp->next = head;

    // Update the head to point to the new node, effectively making it the new head
    head = temp;
}

void InsertAtTail(Node* &tail, int d )
{
    // Create a new node with the given data
    Node* temp = new Node(d);

    // Make the new node point to the current tail
    tail->next = temp;

    // Update the head to point to the new node, effectively making it the new head
    tail = temp;
}

void InsertAtPosition(Node* &head, int position, int d)
{
    
    //insert at Start
    if(position == 1) {
        InsertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int count = 1;
    while (count < position - 1)
    {
      temp = temp ->next;
      count ++;

    }
    // creating a node for d
    
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp->next = nodeToInsert;
    
}


// Function to traverse and print the linked list
void print(Node* &head)
{
    Node* temp = head;  // Start at the head of the list

    while(temp != NULL)
    {
        cout << temp->data << " ";  // Print the data in the current node
        temp = temp->next;  // Move to the next node
    }

    cout << endl;
}

int main()
{

    // Create a new node with data 10 and store it in node1
    Node* node1 = new Node(10); // This creates a node on the heap

    // Print the data and next pointer of node1
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // Set the head of the linked list to node1
    Node* head = node1;
    Node* tail = node1;

    // Print the linked list (it only contains node1)
    print(head);

    // Insert a new node with data 12 at the head of the list
    InsertAtTail(tail, 12);

    // Print the linked list (now it contains node with 12 and node1)
    print(head);

    // Insert a new node with data 15 at the head of the list
    InsertAtTail(tail, 15);

    // Print the linked list (now it contains node with 15, 12, and node1)
    print(head);

    InsertAtPosition(head, 3 ,22);
    print(head);

    InsertAtPosition(head, 1 ,22);
    print(head);


    return 0;
}
