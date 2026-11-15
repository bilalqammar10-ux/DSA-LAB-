//
//#include <iostream>
//using namespace std;
//
//struct Node {
//    int roll;
//    string name;
//    float marks;
//    Node* next;
//};
//
//void insertEnd(Node*& head, int roll, string name, float marks) {
//    Node* newNode = new Node;
//
//    newNode->roll = roll;
//    newNode->name = name;
//    newNode->marks = marks;
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
//void insertBeginning(Node*& head, int roll, string name, float marks) {
//    Node* newNode = new Node;
//
//    newNode->roll = roll;
//    newNode->name = name;
//    newNode->marks = marks;
//    newNode->next = head;
//
//    head = newNode;
//}
//
//void insertAfter(Node* head, int searchRoll, int roll,
//    string name, float marks) {
//
//    while (head != NULL && head->roll != searchRoll) {
//        head = head->next;
//    }
//
//    if (head == NULL) {
//        cout << "Roll number not found!" << endl;
//        return;
//    }
//
//    Node* newNode = new Node;
//    newNode->roll = roll;
//    newNode->name = name;
//    newNode->marks = marks;
//
//    newNode->next = head->next;
//    head->next = newNode;
//}
//
//void deleteStudent(Node*& head, int roll) {
//    if (head == NULL) {
//        cout << "List is empty!" << endl;
//        return;
//    }
//
//    if (head->roll == roll) {
//        Node* temp = head;
//        head = head->next;
//        delete temp;
//        return;
//    }
//
//    Node* temp = head;
//
//    while (temp->next != NULL && temp->next->roll != roll) {
//        temp = temp->next;
//    }
//
//    if (temp->next == NULL) {
//        cout << "Student not found!" << endl;
//        return;
//    }
//
//    Node* del = temp->next;
//    temp->next = del->next;
//    delete del;
//}
//
//void display(Node* head) {
//    cout << "\nRoll\tName\tMarks\n";
//
//    while (head != NULL) {
//        cout << head->roll << "\t"
//            << head->name << "\t"
//            << head->marks << endl;
//
//        head = head->next;
//    }
//}
//
//void searchStudent(Node* head, int roll) {
//    while (head != NULL) {
//        if (head->roll == roll) {
//            cout << "Roll: " << head->roll << endl;
//            cout << "Name: " << head->name << endl;
//            cout << "Marks: " << head->marks << endl;
//            return;
//        }
//
//        head = head->next;
//    }
//
//    cout << "Student not found!" << endl;
//}
//
//void updateStudent(Node* head, int roll) {
//    while (head != NULL) {
//        if (head->roll == roll) {
//            cout << "Enter new name: ";
//            cin >> head->name;
//
//            cout << "Enter new marks: ";
//            cin >> head->marks;
//
//            cout << "Record updated!" << endl;
//            return;
//        }
//
//        head = head->next;
//    }
//
//    cout << "Student not found!" << endl;
//}
//
//void statistics(Node* head) {
//    if (head == NULL) {
//        cout << "No student records!" << endl;
//        return;
//    }
//
//    float high = head->marks;
//    float low = head->marks;
//    float total = 0;
//    int count = 0;
//
//    while (head != NULL) {
//        if (head->marks > high)
//            high = head->marks;
//
//        if (head->marks < low)
//            low = head->marks;
//
//        total += head->marks;
//        count++;
//
//        head = head->next;
//    }
//
//    cout << "Highest Marks: " << high << endl;
//    cout << "Lowest Marks: " << low << endl;
//    cout << "Average Marks: " << total / count << endl;
//}
//
//int main() {
//    Node* head = NULL;
//    int choice, roll, searchRoll;
//    string name;
//    float marks;
//
//    do {
//        cout << "\n1. Insert Beginning";
//        cout << "\n2. Insert End";
//        cout << "\n3. Insert After Roll";
//        cout << "\n4. Delete Student";
//        cout << "\n5. Display";
//        cout << "\n6. Search";
//        cout << "\n7. Update";
//        cout << "\n8. Statistics";
//        cout << "\n9. Exit";
//        cout << "\nEnter choice: ";
//        cin >> choice;
//
//        if (choice >= 1 && choice <= 3) {
//            cout << "Enter Roll: ";
//            cin >> roll;
//
//            cout << "Enter Name: ";
//            cin >> name;
//
//            cout << "Enter Marks: ";
//            cin >> marks;
//
//            if (choice == 1)
//                insertBeginning(head, roll, name, marks);
//
//            else if (choice == 2)
//                insertEnd(head, roll, name, marks);
//
//            else {
//                cout << "Enter existing Roll: ";
//                cin >> searchRoll;
//                insertAfter(head, searchRoll, roll, name, marks);
//            }
//        }
//        else if (choice == 4) {
//            cout << "Enter Roll to delete: ";
//            cin >> roll;
//            deleteStudent(head, roll);
//        }
//        else if (choice == 5) {
//            display(head);
//        }
//        else if (choice == 6) {
//            cout << "Enter Roll to search: ";
//            cin >> roll;
//            searchStudent(head, roll);
//        }
//        else if (choice == 7) {
//            cout << "Enter Roll to update: ";
//            cin >> roll;
//            updateStudent(head, roll);
//        }
//        else if (choice == 8) {
//            statistics(head);
//        }
//
//    } while (choice != 9);
//
//    return 0;
//}
