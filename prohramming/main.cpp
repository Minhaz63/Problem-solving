#include <iostream>

using namespace std;

int main()
{
    int i, j, row, col, n;



    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of col: ";
    cin >> col;
    int **arr = new int *[row];
    int arr2[row];

    for (i = 0; i < row; i++)
    {
        arr[i] = new int [col];
    }
    cout << endl << "Input: " << endl;
    for (i = 0; i < row ; i++)
    {
        cout << "Enter the size of the row" << "  " << i<<": ";
        cin >> n;
        arr2[i]=n;
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl << "Output: " << endl;
    for (i = 0; i < row ; i++)
    {
        for (j = 0; j < arr2[i]; j++)
        {
            cout << arr[i][j] << " ";

        }
        cout << endl;
    }
    return 0;
}
