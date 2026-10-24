
#include <iostream>
using namespace std;

class myStack
{
private:
    char arr[100];
    int top;

public:
    myStack()
    {
        top = -1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == 99;
    }

    void push(char ch)
    {
        if (!isFull())
        {
            top++;
            arr[top] = ch;
        }
    }

    char pop()
    {
        if (isEmpty())
        {
            return '\0';
        }

        char ch = arr[top];
        top--;
        return ch;
    }
};

class TextEditor
{
private:
    char text[100];
    int length;
    myStack undoStack;
    myStack redoStack;

public:
    TextEditor()
    {
        length = 0;
        text[0] = '\0';
    }

    void typeCharacter(char ch)
    {
        if (length < 99 && !undoStack.isFull())
        {
            text[length] = ch;
            length++;
            text[length] = '\0';

            undoStack.push('T');
            redoStack = myStack();

            cout << "Character typed successfully!" << endl;
        }
        else
        {
            cout << "Text or history is full!" << endl;
        }
    }

    void deleteCharacter()
    {
        if (length > 0 && !undoStack.isFull())
        {
            char ch = text[length - 1];

            length--;
            text[length] = '\0';

            undoStack.push('D');
            redoStack = myStack();

            cout << "Character deleted: " << ch << endl;
        }
        else
        {
            cout << "Nothing to delete or history is full!" << endl;
        }
    }

    void undo()
    {
        if (undoStack.isEmpty())
        {
            cout << "Nothing to undo!" << endl;
            return;
        }

        char action = undoStack.pop();

        if (action == 'T')
        {
            redoStack.push('T');
            length--;
            text[length] = '\0';
        }
        else if (action == 'D')
        {
            cout << "Cannot restore deleted character "
                << "with this simple history." << endl;
            undoStack.push('D');
            return;
        }

        cout << "Undo performed!" << endl;
    }

    void redo()
    {
        if (redoStack.isEmpty())
        {
            cout << "Nothing to redo!" << endl;
            return;
        }

        char action = redoStack.pop();

        if (action == 'T')
        {
            cout << "Cannot redo character without "
                << "storing its value." << endl;
            redoStack.push('T');
            return;
        }

        cout << "Redo performed!" << endl;
    }

    void displayText()
    {
        cout << "Current Text: " << text << endl;
    }
};

int main()
{
    TextEditor editor;
    int choice;
    char ch;

    do
    {
        cout << "\n--- Basic Text Editor ---" << endl;
        cout << "1. Type a character" << endl;
        cout << "2. Delete a character" << endl;
        cout << "3. Undo" << endl;
        cout << "4. Redo" << endl;
        cout << "5. Display text" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter character: ";
            cin >> ch;
            editor.typeCharacter(ch);
            break;

        case 2:
            editor.deleteCharacter();
            break;

        case 3:
            editor.undo();
            break;

        case 4:
            editor.redo();
            break;

        case 5:
            editor.displayText();
            break;

        case 6:
            cout << "Program ended!" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 6);

    return 0;
}
