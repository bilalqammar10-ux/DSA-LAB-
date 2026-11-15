//
//#include <iostream>
//using namespace std;
//
//struct Node {
//    int data;
//    Node* next;
//};
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
//void deleteBeginning(Node*& head) {
//    if (head == NULL) {
//        cout << "List is empty!" << endl;
//    }
//    else {
//        Node* temp = head;
//        head = head->next;
//        delete temp;
//    }
//}
//
//void deleteEnd(Node*& head) {
//    if (head == NULL) {
//        cout << "List is empty!" << endl;
//    }
//    else if (head->next == NULL) {
//        delete head;
//        head = NULL;
//    }
//    else {
//        Node* temp = head;
//
//        while (temp->next->next != NULL) {
//            temp = temp->next;
//        }
//
//        delete temp->next;
//        temp->next = NULL;
//    }
//}
//
//void deletePosition(Node*& head, int pos) {
//    if (head == NULL || pos < 1) {
//        cout << "Invalid position!" << endl;
//        return;
//    }
//
//    if (pos == 1) {
//        deleteBeginning(head);
//        return;
//    }
//
//    Node* temp = head;
//
//    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
//        temp = temp->next;
//    }
//
//    if (temp == NULL || temp->next == NULL) {
//        cout << "Position not found!" << endl;
//        return;
//    }
//
//    Node* del = temp->next;
//    temp->next = del->next;
//    delete del;
//}
//
//void search(Node* head, int value) {
//    int pos = 1;
//
//    while (head != NULL) {
//        if (head->data == value) {
//            cout << "Found at position " << pos << endl;
//            return;
//        }
//
//        head = head->next;
//        pos++;
//    }
//
//    cout << "Value not found!" << endl;
//}
//
//void update(Node* head, int pos, int value) {
//    for (int i = 1; head != NULL; i++) {
//        if (i == pos) {
//            head->data = value;
//            cout << "Value updated!" << endl;
//            return;
//        }
//
//        head = head->next;
//    }
//
//    cout << "Position not found!" << endl;
//}
//
//void display(Node* head) {
//    while (head != NULL) {
//        cout << head->data << " ";
//        head = head->next;
//    }
//    cout << endl;
//}
//
//int main() {
//    Node* head = NULL;
//    int choice, value, pos;
//
//    do {
//        cout << "\n1. Insert End";
//        cout << "\n2. Delete Beginning";
//        cout << "\n3. Delete End";
//        cout << "\n4. Delete Position";
//        cout << "\n5. Search";
//        cout << "\n6. Update";
//        cout << "\n7. Display";
//        cout << "\n8. Exit";
//        cout << "\nEnter choice: ";
//        cin >> choice;
//
//        if (choice == 1) {
//            cout << "Enter value: ";
//            cin >> value;
//            insertEnd(head, value);
//        }
//        else if (choice == 2) {
//            deleteBeginning(head);
//        }
//        else if (choice == 3) {
//            deleteEnd(head);
//        }
//        else if (choice == 4) {
//            cout << "Enter position: ";
//            cin >> pos;
//            deletePosition(head, pos);
//        }
//        else if (choice == 5) {
//            cout << "Enter value: ";
//            cin >> value;
//            search(head, value);
//        }
//        else if (choice == 6) {
//            cout << "Enter position: ";
//            cin >> pos;
//            cout << "Enter new value: ";
//            cin >> value;
//            update(head, pos, value);
//        }
//        else if (choice == 7) {
//            display(head);
//        }
//
//    } while (choice != 8);
//
//    return 0;
//}
