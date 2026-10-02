//#include <iostream>
//#include <string>
//using namespace std;
//
//template <class T, int N>
//int binarySearch(T arr[], T key)
//{
//    int low = 0;
//    int high = N - 1;
//
//    while (low <= high)
//    {
//        int mid = (low + high) / 2;
//
//        if (arr[mid] == key)
//        {
//            return mid;
//        }
//        else if (arr[mid] < key)
//        {
//            low = mid + 1;
//        }
//        else
//        {
//            high = mid - 1;
//        }
//    }
//
//    return -1;
//}
//template <class T>
//void printSearchResult(int index, T key)
//{
//    if (index == -1)
//        cout << key << " not found" << endl;
//    else
//        cout << key << " found at index " << index << endl;
//}
//
//int main()
//{
//    int intArray[5] = { 11, 12, 22, 25, 64 };
//    int intKey = 22;
//
//    int intIndex = binarySearch<int, 5>(intArray, intKey);
//    printSearchResult(intIndex, intKey);
//
//    float floatArray[4] = { 0.57, 1.62, 2.71, 3.14 };
//    float floatKey = 2.71;
//
//    int floatIndex = binarySearch<float, 4>(floatArray, floatKey);
//    printSearchResult(floatIndex, floatKey);
//
//    string stringArray[4] = { "apple", "banana", "grape", "orange" };
//    string stringKey = "grape";
//
//    int stringIndex = binarySearch<string, 4>(stringArray, stringKey);
//    printSearchResult(stringIndex, stringKey);
//
//    return 0;
//}
