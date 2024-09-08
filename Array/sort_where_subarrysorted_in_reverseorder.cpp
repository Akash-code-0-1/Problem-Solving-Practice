#include <bits/stdc++.h>
using namespace std;

void printSorted(int a[], int n)
{

    int front = -1;
    int back = -1;
    // finding starting point of reverse subarray
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            front = i - 1;
            break;
        }
    }

    // finding ending point of reverse subarray

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > a[i + 1])
        {
            back = i + 1;
            break;
        }
    }

    // if no reverse array present in array

    if (front == -1 and back == -1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        return;
    }

    while (front <= back)
    {
        swap(a[front], a[back]);
        front++;
        back--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

// time complexity is O(n)

int main()
{
    int a[] = {1, 7, 6, 5, 4, 3, 2, 8};
    int n = sizeof(a) / sizeof(a[0]);
    printSorted(a, n);
    return 0;
}