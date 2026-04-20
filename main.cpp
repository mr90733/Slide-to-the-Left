#include "src/slide.hpp"

#include <iostream>

int main()

{
    int arr1[] = {1, 2, 3, 4, 5};

    arrayShiftLeft(arr1, 5, 1); printArray(arr1, 5);

    arrayShiftLeft(arr1, 5, 1); printArray(arr1, 5);

    arrayShiftLeft(arr1, 5, 1); printArray(arr1, 5);

    int arr2[] = {1, 2, 3, 4, 5};

    arrayShiftLeft(arr2, 5, 3); printArray(arr2, 5);

    arrayShiftLeft(arr2, 5, 3); printArray(arr2, 5);

    arrayShiftLeft(arr2, 5, 3); printArray(arr2, 5);

    int arr3[] = {1, 2, 3};

    arrayShiftLeft(arr3, 3, 3); printArray(arr3, 3);

    arrayShiftLeft(arr3, 3, 4); printArray(arr3, 3);

    //Shift Right
    int arr4[] = {1, 2, 3, 4, 5};
    arrayShiftRight(arr4, 5, 1); printArray(arr4, 5);

    //vector
    vector<int> vec = {1, 2, 3, 4, 5};

    vectorShift(vec, 2);

    cout << "[";

    for (int i = 0; i < vec.size(); i++)

    {
        cout << vec[i];

        if (i < vec.size() - 1) cout << ", ";
    }

    cout << "]" << endl;

    return 0;
}