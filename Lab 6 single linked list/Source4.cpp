
#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string name;
    Node* next;
};

class Hospital {
public:
    Node* head;

    Hospital() {
        head = NULL;
    }
    void addPatient(string n) {
        Node* newNode = new Node();

        newNode->name = n;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        }
        else {
            Node* temp = head;

            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = newNode;
        }
        cout << "Patient added!" << endl;
    }
    void removePatient(string n) {
        Node* temp = head;
        Node* prev = NULL;

        if (head == NULL) {
            cout << "Queue is empty!" << endl;
            return;
        }
        if (head->name == n) {
            head = head->next;
            delete temp;
            cout << "Patient removed!" << endl;
            return;
        }
        while (temp != NULL && temp->name != n) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL) {
            cout << "Patient not found!" << endl;
            return;
        }
        prev->next = temp->next;
        delete temp;

        cout << "Patient removed!" << endl;
    }
    void display() {
        Node* temp = head;

        if (head == NULL) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Patient List: ";

        while (temp != NULL) {
            cout << temp->name << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
    void countPatients() {
        Node* temp = head;
        int count = 0;

        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        cout << "Total Patients = " << count << endl;
    }
};

int main() {
    Hospital h;
    int choice;
    string name;

    while (true) {
        cout << "\n1. Add Patient";
        cout << "\n2. Remove Patient";
        cout << "\n3. Display Patients";
        cout << "\n4. Count Patients";
        cout << "\n5. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter patient name: ";
            cin >> name;
            h.addPatient(name);
        }
        else if (choice == 2) {
            cout << "Enter patient name: ";
            cin >> name;
            h.removePatient(name);
        }
        else if (choice == 3) {
            h.display();
        }
        else if (choice == 4) {
            h.countPatients();
        }
        else if (choice == 5) {
            cout << "Program Ended!";
            break;
        }
        else {
            cout << "Invalid Choice!";
        }
    }

    return 0;
}
