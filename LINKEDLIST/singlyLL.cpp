#include<iostream>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void insertAtHead(Node* &head, int d) {

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}

void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

void insertAtPosition(Node* &tail, Node* & head, int position, int d) {


    //insert at Start
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
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
    insertAtTail(tail, 12);

    // Print the linked list (now it contains node with 12 and node1)
    print(head);

    // Insert a new node with data 15 at the head of the list
    insertAtTail(tail, 15);

    // Print the linked list (now it contains node with 15, 12, and node1)
    print(head);

    insertAtPosition(tail,head, 4 ,22);
    print(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

    deleteNode(3, head);
    print(head);


    return 0;
}
