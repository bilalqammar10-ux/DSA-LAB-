#include <iostream>
#include <string>
using namespace std;

template <typename T, int N>
int linearSearch(T(&A)[N], T Value)
{
    for (int i = 0; i < N; i++)
    {
        if (A[i] == Value)
        {
            return i;
        }
    }

    return -1;
}

template <typename T>
void printSearchResult(int index, T Value)
{
    if (index != -1)
    {
        cout << "Value " << Value << " found at index " << index << endl;
    }
    else
    {
        cout << "Value " << Value << " not found" << endl;
    }
}

int main()
{
    int intArray[5] = { 64, 25, 12, 22, 11 };
    int intKey = 12;

    int intIndex = linearSearch(intArray, intKey);
    printSearchResult(intIndex, intKey);

    float floatArray[4] = { 3.14, 2.71, 1.62, 0.57 };
    float floatKey = 1.62;

    int floatIndex = linearSearch(floatArray, floatKey);
    printSearchResult(floatIndex, floatKey);

    string stringArray[4] = { "apple", "orange", "banana", "grape" };
    string stringKey = "banana";

    int stringIndex = linearSearch(stringArray, stringKey);
    printSearchResult(stringIndex, stringKey);

    return 0;
}