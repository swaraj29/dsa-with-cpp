#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " Memory is freed for node with data " << value << endl;
    }
};

void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node* head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtPosition(Node* &head, int position, int d) {
    if (position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL) {
        cout << "Invalid position." << endl;
        return;
    }

    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node* &head) {
    if (head == NULL) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    if (position == 1) {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    Node* curr = head;
    Node* prev = NULL;
    int cnt = 1;

    while (cnt < position && curr != NULL) {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    if (curr == NULL) {
        cout << "Invalid position." << endl;
        return;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;

    print(head);

    insertAtPosition(head, 2, 12);
    print(head);

    insertAtPosition(head, 3, 15);
    print(head);

    insertAtPosition(head, 4, 22);
    print(head);

    deleteNode(3, head);
    print(head);

    return 0;
}
