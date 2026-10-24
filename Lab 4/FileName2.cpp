//
//#include <iostream>
//using namespace std;
//
//class AbstractStack
//{
//public:
//    virtual void push(int) = 0;
//    virtual void pop() = 0;
//    virtual int top() = 0;
//    virtual bool isEmpty() = 0;
//    virtual bool isFull() = 0;
//    virtual void display() = 0;
//    virtual int getMin() const = 0;
//};
//
//class myStack : public AbstractStack
//{
//private:
//    int arr[100];
//    int minArr[100];
//    int size, minSize;
//
//public:
//    myStack()
//    {
//        size = 0;
//        minSize = 0;
//    }
//
//    bool isEmpty()
//    {
//        return size == 0;
//    }
//
//    bool isFull()
//    {
//        return size == 100;
//    }
//
//    void push(int x)
//    {
//        if (isFull())
//        {
//            cout << "Stack is full!" << endl;
//            return;
//        }
//
//        arr[size] = x;
//        size++;
//
//        if (minSize == 0 || x <= minArr[minSize - 1])
//        {
//            minArr[minSize] = x;
//            minSize++;
//        }
//
//        cout << "Element pushed." << endl;
//    }
//
//    void pop()
//    {
//        if (isEmpty())
//        {
//            cout << "Stack is empty!" << endl;
//            return;
//        }
//
//        int x = arr[size - 1];
//        size--;
//
//        if (x == minArr[minSize - 1])
//            minSize--;
//
//        cout << "Removed element: " << x << endl;
//    }
//
//    int top()
//    {
//        if (isEmpty())
//            return -1;
//
//        return arr[size - 1];
//    }
//
//    int getMin() const
//    {
//        if (size == 0)
//            return -1;
//
//        return minArr[minSize - 1];
//    }
//
//    void display()
//    {
//        if (isEmpty())
//        {
//            cout << "Stack is empty!" << endl;
//            return;
//        }
//
//        cout << "Stack (top to bottom): ";
//
//        for (int i = size - 1; i >= 0; i--)
//            cout << arr[i] << " ";
//
//        cout << endl;
//    }
//};
//
//int main()
//{
//    myStack s;
//    int choice, x;
//
//    do
//    {
//        cout << "\n1. Push element";
//        cout << "\n2. Pop element";
//        cout << "\n3. Show top element";
//        cout << "\n4. Check empty";
//        cout << "\n5. Check full";
//        cout << "\n6. Display stack";
//        cout << "\n7. Show minimum element";
//        cout << "\n8. Exit";
//        cout << "\nEnter choice: ";
//        cin >> choice;
//
//        switch (choice)
//        {
//        case 1:
//            cout << "Enter value: ";
//            cin >> x;
//            s.push(x);
//            break;
//
//        case 2:
//            s.pop();
//            break;
//
//        case 3:
//            if (!s.isEmpty())
//                cout << "Top element: " << s.top() << endl;
//            else
//                cout << "Stack is empty!" << endl;
//            break;
//
//        case 4:
//            if (s.isEmpty())
//                cout << "Stack is empty." << endl;
//            else
//                cout << "Stack is not empty." << endl;
//            break;
//
//        case 5:
//            if (s.isFull())
//                cout << "Stack is full." << endl;
//            else
//                cout << "Stack is not full." << endl;
//            break;
//
//        case 6:
//            s.display();
//            break;
//
//        case 7:
//            if (!s.isEmpty())
//                cout << "Minimum element: " << s.getMin() << endl;
//            else
//                cout << "Stack is empty!" << endl;
//            break;
//
//        case 8:
//            cout << "Program ended." << endl;
//            break;
//
//        default:
//            cout << "Invalid choice!" << endl;
//        }
//
//    } while (choice != 8);
//
//    return 0;
//}
