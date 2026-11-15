
#include <iostream>
using namespace std;

struct Node {
    int x;
    int y;
    Node* next;
};

void grow(Node*& head, int x, int y) {
    Node* newNode = new Node;

    newNode->x = x;
    newNode->y = y;
    newNode->next = head;

    head = newNode;
}

bool collisionCheck(Node* head, int x, int y, bool food) {
    while (head != NULL) {

        if (head->x == x && head->y == y) {

            // Tail will be removed if food is not eaten.
            if (head->next == NULL && food == false) {
                return false;
            }

            return true;
        }

        head = head->next;
    }

    return false;
}

void move(Node*& head, int x, int y, bool food) {

    if (collisionCheck(head, x, y, food)) {
        cout << "Collision Detected!" << endl;
        return;
    }

    grow(head, x, y);

    if (food == false) {
        Node* temp = head;

        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    cout << "Snake moved!" << endl;
}

void printSnake(Node* head) {
    while (head != NULL) {
        cout << "(" << head->x << "," << head->y << ")";

        if (head->next != NULL)
            cout << " -> ";

        head = head->next;
    }

    cout << endl;
}

int main() {
    Node* head = NULL;

    grow(head, 2, 2);
    grow(head, 2, 3);
    grow(head, 2, 4);

    cout << "Initial Snake: ";
    printSnake(head);

    cout << "\nNormal Move:" << endl;
    move(head, 2, 5, false);
    printSnake(head);

    cout << "\nFood Eaten:" << endl;
    move(head, 2, 6, true);
    printSnake(head);

    cout << "\nNormal Move:" << endl;
    move(head, 3, 6, false);
    printSnake(head);

    cout << "\nSelf Collision:" << endl;
    move(head, 2, 6, false);
    printSnake(head);

    return 0;
}
