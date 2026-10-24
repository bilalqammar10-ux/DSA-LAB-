//
//#include <iostream>
//using namespace std;
//
//class myStack
//{
//private:
//    int cars[8];
//    int top;
//
//public:
//    myStack()
//    {
//        top = -1;
//    }
//
//    bool isEmpty()
//    {
//        return top == -1;
//    }
//
//    bool isFull()
//    {
//        return top == 7;
//    }
//
//    void push(int car)
//    {
//        if (isFull())
//        {
//            cout << "Parking is full!" << endl;
//        }
//        else
//        {
//            top++;
//            cars[top] = car;
//            cout << "Car parked successfully!" << endl;
//        }
//    }
//
//    int pop()
//    {
//        if (isEmpty())
//        {
//            return -1;
//        }
//
//        int car = cars[top];
//        top--;
//        return car;
//    }
//
//    int peek()
//    {
//        if (isEmpty())
//        {
//            return -1;
//        }
//
//        return cars[top];
//    }
//
//    int size()
//    {
//        return top + 1;
//    }
//
//    bool search(int car)
//    {
//        for (int i = 0; i <= top; i++)
//        {
//            if (cars[i] == car)
//            {
//                return true;
//            }
//        }
//
//        return false;
//    }
//
//    void display()
//    {
//        if (isEmpty())
//        {
//            cout << "Parking lot is empty!" << endl;
//            return;
//        }
//
//        cout << "Cars in parking (Top to Bottom):" << endl;
//
//        for (int i = top; i >= 0; i--)
//        {
//            cout << cars[i] << endl;
//        }
//    }
//};
//
//int main()
//{
//    myStack myCarStack;
//    myStack tempStack;
//
//    int choice, car, removedCar;
//
//    do
//    {
//        cout << "\n--- Parking Lot Management System ---" << endl;
//        cout << "1. Park a new car" << endl;
//        cout << "2. Remove a car" << endl;
//        cout << "3. View parked cars" << endl;
//        cout << "4. Total cars parked" << endl;
//        cout << "5. View top car" << endl;
//        cout << "6. Search for a car" << endl;
//        cout << "7. Exit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice)
//        {
//        case 1:
//            if (myCarStack.isFull())
//            {
//                cout << "Parking lot is full!" << endl;
//            }
//            else
//            {
//                cout << "Enter car number: ";
//                cin >> car;
//
//                if (myCarStack.search(car))
//                {
//                    cout << "This car is already parked!" << endl;
//                }
//                else
//                {
//                    myCarStack.push(car);
//                }
//            }
//            break;
//
//        case 2:
//            cout << "Enter car number to remove: ";
//            cin >> car;
//
//            if (!myCarStack.search(car))
//            {
//                cout << "Car not found!" << endl;
//            }
//            else
//            {
//                while (!myCarStack.isEmpty() &&
//                    myCarStack.peek() != car)
//                {
//                    tempStack.push(myCarStack.pop());
//                }
//
//                removedCar = myCarStack.pop();
//
//                cout << "Car " << removedCar
//                    << " removed successfully!" << endl;
//
//                while (!tempStack.isEmpty())
//                {
//                    myCarStack.push(tempStack.pop());
//                }
//            }
//            break;
//
//        case 3:
//            myCarStack.display();
//            break;
//
//        case 4:
//            cout << "Total cars parked: "
//                << myCarStack.size() << endl;
//            break;
//
//        case 5:
//            if (myCarStack.isEmpty())
//            {
//                cout << "Parking lot is empty!" << endl;
//            }
//            else
//            {
//                cout << "Top car: "
//                    << myCarStack.peek() << endl;
//            }
//            break;
//
//        case 6:
//            cout << "Enter car number to search: ";
//            cin >> car;
//
//            if (myCarStack.search(car))
//            {
//                cout << "Car is present in parking lot." << endl;
//            }
//            else
//            {
//                cout << "Car is not present." << endl;
//            }
//            break;
//
//        case 7:
//            cout << "Program ended." << endl;
//            break;
//
//        default:
//            cout << "Invalid choice!" << endl;
//        }
//
//    } while (choice != 7);
//
//    return 0;
//}
