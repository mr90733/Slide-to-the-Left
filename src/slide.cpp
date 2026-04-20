#include "Slide.hpp"

#include <iostream>

void arrayShiftLeft(int arr[], int size, int shifts)

{
    if (size <= 1) return;

    shifts = shifts % size;

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

//Shift right
void arrayShiftRight(int arr[], int size, int shifts)

{
    if (size <= 1) return;

    shifts = shifts % size;

    for (int s = 0; s < shifts; ++s)

    {
        int last = arr[size - 1];

        for (int i = size - 1; i > 0; --i)

        {
            arr[i] = arr[i - 1];
        }

        arr[0] = last;
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

//vector

void vectorShift(vector<int>& vec, int shifts)
{
    size_t size = vec.size();

    if (size <= 1) return;

    shifts = shifts % static_cast<int>(size);

    for (int s = 0; s < shifts; s++)
    {
        int first = vec[0];

        for (size_t i = 0; i < size - 1; i++)
        {
            vec[i] = vec[i + 1];
        }

        vec[size - 1] = first;
    }
}