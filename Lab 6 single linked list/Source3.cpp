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
//    void insert(int value, int pos) {
//        Node* newNode = new Node();
//        newNode->data = value;
//        if (pos == 1) {
//            newNode->next = head;
//            head = newNode;
//            return;
//        }
//        Node* temp = head;
//        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
//            temp = temp->next;
//        }
//        if (temp == NULL) {
//            cout << "Invalid position!" << endl;
//            delete newNode;
//            return;
//        }
//        newNode->next = temp->next;
//        temp->next = newNode;
//
//        cout << "Node inserted successfully!" << endl;
//    }
//    void deleteNode(int pos) {
//        if (head == NULL) {
//            cout << "List is empty!" << endl;
//            return;
//        }
//        Node* temp = head;
//        if (pos == 1) {
//            head = head->next;
//            delete temp;
//            cout << "Node deleted!" << endl;
//            return;
//        }
//        Node* prev = NULL;
//
//        for (int i = 1; i < pos && temp != NULL; i++) {
//            prev = temp;
//            temp = temp->next;
//        }
//        if (temp == NULL) {
//            cout << "Invalid position!" << endl;
//            return;
//        }
//        prev->next = temp->next;
//        delete temp;
//
//        cout << "Node deleted!" << endl;
//    }
//    void search(int value) {
//        Node* temp = head;
//        int pos = 1;
//
//        while (temp != NULL) {
//            if (temp->data == value) {
//                cout << "Element found at position " << pos << endl;
//                return;
//            }
//
//            temp = temp->next;
//            pos++;
//        }
//        cout << "Element not found!" << endl;
//    }
//    void countNodes() {
//        Node* temp = head;
//        int count = 0;
//
//        while (temp != NULL) {
//            count++;
//            temp = temp->next;
//        }
//
//        cout << "Total nodes = " << count << endl;
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
//int main() {
//    LinkedList list;
//    int choice, value, pos;
//
//    do {
//        cout << "\n----- LINKED LIST MENU -----" << endl;
//        cout << "1. Insert at Specific Position" << endl;
//        cout << "2. Delete at Specific Position" << endl;
//        cout << "3. Search Element" << endl;
//        cout << "4. Count Total Nodes" << endl;
//        cout << "5. Display List" << endl;
//        cout << "6. Exit" << endl;
//
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            cout << "Enter value: ";
//            cin >> value;
//
//            cout << "Enter position: ";
//            cin >> pos;
//
//            list.insert(value, pos);
//            break;
//        case 2:
//            cout << "Enter position to delete: ";
//            cin >> pos;
//
//            list.deleteNode(pos);
//            break;
//        case 3:
//            cout << "Enter value to search: ";
//            cin >> value;
//
//            list.search(value);
//            break;
//        case 4:
//            list.countNodes();
//            break;
//        case 5:
//            list.display();
//            break;
//        case 6:
//            cout << "Program ended!" << endl;
//            break;
//        default:
//            cout << "Invalid choice!" << endl;
//        }
//    } while (choice != 6);
//
//    return 0;
//}
