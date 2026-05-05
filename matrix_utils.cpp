#include "matrix_utils.h"
#include <fstream>
#include <iostream>

using namespace std;

void getMatrix(string filename, int matrix[][MAX], int& m, int& n)
{
    ifstream fin(filename);

    fin >> m >> n;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            fin >> matrix[i][j];

    fin.close();
}

void printMatrix(int matrix[][MAX], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

void columnProducts(int matrix[][MAX], int m, int n)
{
    cout << "\nДобутки стовпців:\n";

    for (int j = 0; j < n; j++)
    {
        int product = 1;

        for (int i = 0; i < m; i++)
            product *= matrix[i][j];

        cout << product << " ";
    }
    cout << endl;
}

void appendResult(string filename, int matrix[][MAX], int m, int n)
{
    ofstream fout(filename, ios::app);

    fout << "\n\nДобутки стовпців:\n";

    for (int j = 0; j < n; j++)
    {
        int product = 1;

        for (int i = 0; i < m; i++)
            product *= matrix[i][j];

        fout << product << " ";
    }

    fout.close();
}
