
#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string name;
    string priority;
    Node* next;
};
class ReservationQueue
{
private:
    Node* head;

public:
    ReservationQueue()
    {
        head = NULL;
    }
    void addStudent(string name, string priority)
    {
        Node* newNode = new Node;
        newNode->name = name;
        newNode->priority = priority;
        newNode->next = NULL;

        if (head == NULL ||
            (priority == "Research" && head->priority != "Research"))
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            Node* temp = head;

            while (temp->next != NULL &&
                (priority != "Research" ||
                    temp->next->priority == "Research"))
            {
                temp = temp->next;
            }

            newNode->next = temp->next;
            temp->next = newNode;
        }

        cout << name << " added successfully.\n";
    }
    void removeStudent(string name)
    {
        if (head == NULL)
        {
            cout << "Reservation list is empty.\n";
            return;
        }

        Node* temp = head;
        Node* previous = NULL;

        while (temp != NULL && temp->name != name)
        {
            previous = temp;
            temp = temp->next;
        }

        if (temp == NULL)
        {
            cout << "Student not found.\n";
            return;
        }

        if (previous == NULL)
            head = head->next;
        else
            previous->next = temp->next;

        delete temp;

        cout << name << " reservation cancelled.\n";
    }
    void updatePriority(string name, string newPriority)
    {
        Node* temp = head;

        while (temp != NULL && temp->name != name)
        {
            temp = temp->next;
        }

        if (temp == NULL)
        {
            cout << "Student not found.\n";
            return;
        }

        removeStudent(name);
        addStudent(name, newPriority);

        cout << "Priority updated successfully.\n";
    }
    void display()
    {
        Node* temp = head;

        if (head == NULL)
        {
            cout << "Reservation list is empty.\n";
            return;
        }

        cout << "\nReservation List:\n";

        while (temp != NULL)
        {
            cout << temp->name
                << " (" << temp->priority << ") -> ";

            temp = temp->next;
        }

        cout << "NULL\n";
    }
    int countStudents()
    {
        int count = 0;
        Node* temp = head;

        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }

        return count;
    }
    void bookReturned()
    {
        if (head == NULL)
        {
            cout << "No student is waiting for this book.\n";
            return;
        }

        Node* temp = head;

        cout << "\nBook issued to: " << temp->name << endl;

        head = head->next;
        delete temp;
    }
    ~ReservationQueue()
    {
        while (head != NULL)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};
int main()
{
    ReservationQueue book1;
    ReservationQueue book2;

    cout << "===== BOOK 1: Data Structures =====\n";

    book1.addStudent("Ali", "Casual");
    book1.addStudent("Ahmed", "Assignment");
    book1.addStudent("Sara", "Research");

    book1.display();

    book1.removeStudent("Ali");
    book1.display();

    book1.updatePriority("Ahmed", "Research");
    book1.display();

    cout << "Total students: "
        << book1.countStudents() << endl;

    book1.bookReturned();
    book1.display();

    cout << "\n===== BOOK 2: Database Systems =====\n";

    book2.addStudent("Bilal", "Casual");
    book2.addStudent("Hina", "Research");
    book2.addStudent("Usman", "Assignment");

    book2.display();

    book2.updatePriority("Bilal", "Assignment");
    book2.display();

    cout << "Total students: "
        << book2.countStudents() << endl;
    
    book2.bookReturned();
    book2.display();

    return 0;
}
