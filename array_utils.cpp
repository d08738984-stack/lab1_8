#include "array_utils.h"
#include <fstream>
#include <iostream>

using namespace std;

void getArray(string filename, int arr[], int& n)
{
    ifstream fin(filename);

    fin >> n;
    for (int i = 0; i < n; i++)
        fin >> arr[i];

    fin.close();
}

void saveArray(string filename, const int arr[], int n)
{
    ofstream fout(filename);

    fout << n << endl;
    for (int i = 0; i < n; i++)
        fout << arr[i] << " ";

    fout.close();
}

void printArray(const int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void removeLessThanThree(int arr[], int& n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
            if (arr[i] == arr[j])
                count++;

        if (count < 3)
        {
            for (int k = i; k < n - 1; k++)
                arr[k] = arr[k + 1];

            n--;
            i--;
        }
    }
}

void getCharArray(string filename, char arr[], int& n)
{
    ifstream fin(filename);

    fin >> n;
    for (int i = 0; i < n; i++)
        fin >> arr[i];

    fin.close();
}

void saveCharArray(string filename, const char arr[], int n)
{
    ofstream fout(filename);

    fout << n << endl;
    for (int i = 0; i < n; i++)
        fout << arr[i] << " ";

    fout.close();
}

void printCharArray(const char arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void doubleSelectionSortDesc(char arr[], int n)
{
    int left = 0, right = n - 1;

    while (left < right)
    {
        int maxIndex = left;
        int minIndex = left;

        for (int i = left; i <= right; i++)
        {
            if (arr[i] > arr[maxIndex])
                maxIndex = i;

            if (arr[i] < arr[minIndex])
                minIndex = i;
        }

        swap(arr[left], arr[maxIndex]);

        if (minIndex == left)
            minIndex = maxIndex;

        swap(arr[right], arr[minIndex]);

        left++;
        right--;
    }
}
