#include "slide.hpp"


void arrayShift(int arr[], int size, int shifts)

{
    if (size <= 1) return;

    for (int s = 0; s < shifts; ++s)

        {

        int first = arr[0];

        for (int i = 0; i < size - 1; ++i)

            {

            arr[i] = arr[i + 1];
        }

        arr[size - 1] = first;
    }
}

void printArray(int arr[], int size)

{
    cout << "[";

    for (int i = 0; i < size; ++i)

        {
        cout << arr[i];

        if (i < size - 1) cout << ", ";
    }

    cout << "]" << endl;
}