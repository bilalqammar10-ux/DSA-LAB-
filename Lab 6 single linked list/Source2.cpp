//
//#include <iostream>
//using namespace std;
//
//class Node {
//public:
//    int data;
//    Node* next;
//};
//
//class LinkedList {
//public:
//    Node* head;
//
//    LinkedList() {
//        head = NULL;
//    }
//    void insertBeginning(int value) {
//        Node* newNode = new Node();
//
//        newNode->data = value;
//        newNode->next = head;
//        head = newNode;
//    }
//    void insertEnd(int value) {
//        Node* newNode = new Node();
//
//        newNode->data = value;
//        newNode->next = NULL;
//
//        if (head == NULL) {
//            head = newNode;
//        }
//        else {
//            Node* temp = head;
//
//            while (temp->next != NULL) {
//                temp = temp->next;
//            }
//
//            temp->next = newNode;
//        }
//    }
//    void deleteNode(int value) {
//        Node* temp = head;
//        Node* prev = NULL;
//
//        if (head == NULL) {
//            cout << "List is empty";
//            return;
//        }
//
//        if (head->data == value) {
//            head = head->next;
//            delete temp;
//            return;
//        }
//
//        while (temp != NULL && temp->data != value) {
//            prev = temp;
//            temp = temp->next;
//        }
//
//        if (temp == NULL) {
//            cout << "Value not found";
//            return;
//        }
//
//        prev->next = temp->next;
//        delete temp;
//    }
//    void display() {
//        Node* temp = head;
//
//        while (temp != NULL) {
//            cout << temp->data << " -> ";
//            temp = temp->next;
//        }
//
//        cout << "NULL" << endl;
//    }
//};
//
//int main() {
//    LinkedList list;
//
//    list.insertBeginning(20);
//    list.insertBeginning(10);
//
//    list.insertEnd(30);
//    list.insertEnd(40);
//
//    cout << "Linked List: ";
//    list.display();
//
//    list.deleteNode(30);
//
//    cout << "After Deletion: ";
//    list.display();
//
//    return 0;
//}
