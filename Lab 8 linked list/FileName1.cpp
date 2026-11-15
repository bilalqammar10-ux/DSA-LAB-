//
//#include <iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    Node* next;
//};
//
//void insertBeginning(Node*& head, int value) {
//    Node* newNode = new Node;
//    newNode->data = value;
//    newNode->next = head;
//    head = newNode;
//}
//
//void insertEnd(Node*& head, int value) {
//    Node* newNode = new Node;
//    newNode->data = value;
//    newNode->next = NULL;
//
//    if (head == NULL) {
//        head = newNode;
//    }
//    else {
//        Node* temp = head;
//
//        while (temp->next != NULL) {
//            temp = temp->next;
//        }
//
//        temp->next = newNode;
//    }
//}
//
//void insertPosition(Node*& head, int value, int pos) {
//    if (pos == 1) {
//        insertBeginning(head, value);
//        return;
//    }
//
//    Node* temp = head;
//
//    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
//        temp = temp->next;
//    }
//
//    if (temp == NULL) {
//        cout << "Invalid Position!" << endl;
//        return;
//    }
//
//    Node* newNode = new Node;
//    newNode->data = value;
//    newNode->next = temp->next;
//    temp->next = newNode;
//}
//
//void display(Node* head) {
//    Node* temp = head;
//
//    while (temp != NULL) {
//        cout << temp->data << " ";
//        temp = temp->next;
//    }
//    cout << endl;
//}
//
//int main() {
//    Node* head = NULL;
//    int choice, value, pos;
//
//    do {
//        cout << "\n1. Insert Beginning";
//        cout << "\n2. Insert End";
//        cout << "\n3. Insert Position";
//        cout << "\n4. Display";
//        cout << "\n5. Exit";
//        cout << "\nEnter choice: ";
//        cin >> choice;
//
//        if (choice == 1) {
//            cout << "Enter value: ";
//            cin >> value;
//            insertBeginning(head, value);
//        }
//        else if (choice == 2) {
//            cout << "Enter value: ";
//            cin >> value;
//            insertEnd(head, value);
//        }
//        else if (choice == 3) {
//            cout << "Enter value: ";
//            cin >> value;
//            cout << "Enter position: ";
//            cin >> pos;
//            insertPosition(head, value, pos);
//        }
//        else if (choice == 4) {
//            display(head);
//        }
//
//    } while (choice != 5);
//
//    return 0;
//}
