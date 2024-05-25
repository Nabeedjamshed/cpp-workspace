#include <iostream>
using namespace std;

int startl5()
{
    cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
    cout << "Start of Lab 05\n" << endl;
    return 0;
}

int main()
{
    startl5();
    int rows, columns;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;
    int arr[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter the value of " << i + 1 << " row and " << j + 1 << " column ";
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << endl;
    cout << "Sum of all elements is: " << sum;

    return 0;
}

#include <iostream>
using namespace std;

int startL5()
{
    cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
    cout << "Lab 05\n" << endl;
    return 0;
}

int main()
{
    startL5();
    int rows, columns;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;
    int arr[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter the value of " << i + 1 << " row and " << j + 1 << " column ";
            cin >> arr[i][j];
        }
    }
    cout << endl;
    cout << "Original Matrix" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "After Transpose" << endl;
    for (int j = 0; j < columns; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int startL5()
{
    cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
    cout << "Lab 05\n" << endl;
    return 0;
}

int main()
{
    startL5();
    int rows1, columns1, rows2, columns2;
    cout << "Enter number of rows for 1st matrix: ";
    cin >> rows1;
    cout << "Enter number of columns for 1st matrix: ";
    cin >> columns1;
    int arr1[rows1][columns1];
    cout << "Enter number of rows for 2nd matrix: ";
    cin >> rows2;
    cout << "Enter number of columns for 2nd matrix: ";
    cin >> columns2;
    int arr2[rows2][columns2];

    if (rows1 != columns2)
    {
        cout << "Not possible bcz row1 and column2 is not equal";
    }
    else
    {
        cout << endl;
        cout << "Enter data for 1st matrix" << endl;
        cout << endl;
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns1; j++)
            {
                cout << "Enter the value of " << i + 1 << " row and " << j + 1 << " column ";
                cin >> arr1[i][j];
            }
        }
        cout << endl;
        cout << "Enter data for 2nd matrix" << endl;
        cout << endl;

        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns1; j++)
            {
                cout << "Enter the value of " << i + 1 << " row and " << j + 1 << " column ";
                cin >> arr2[i][j];
            }
        }
        int mult[rows1][columns2] = {};
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns2; j++)
            {
                for (int k = 0; k < columns1; k++)
                {
                    mult[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        cout << endl;
        cout << "Matrix 1" << endl;
        cout << endl;
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns1; j++)
            {
                cout << arr1[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        cout << "Matrix 2" << endl;
        cout << endl;
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < columns2; j++)
            {
                cout << arr2[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        cout << "Result of multiplication:" << endl;
        cout << endl;
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < columns2; j++)
            {
                cout << mult[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

#include <iostream>
using namespace std;

int startL5()
{
    cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
    cout << "Lab 05\n" << endl;
    return 0;
}

int main()
{
    startL5();
    int rows, columns;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;
    int arr[rows][columns];
    int arrt[rows][columns];
    if (rows != columns)
    {
        cout << "In symmetric matrix no. of rows is always equal to the no. of columns";
    }
    else
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                cout << "Enter the value of " << i + 1 << " row and " << j + 1 << " column ";
                cin >> arr[i][j];
            }
        }
        cout << endl;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                arrt[i][j] = arr[j][i];
            }
        }
        int count = 0;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if (arrt[i][j] == arr[i][j])
                {
                    count += 1;
                }
            }
        }
        if (count == (rows * columns))
        {
            cout << "Symmetric matric";
        }
        else
        {
            cout << "Non Symmetric matric";
        }
    }

    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int startL5()
{
    cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
    cout << "Lab 05\n" << endl;
    return 0;
}

int main()
{
    startL5();
    int rows, columns;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;
    int arr[rows][columns];
    int max_values[rows] = {};
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter the value of " << i + 1 << " row and " << j + 1 << " column ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        max_values[i] = *max_element(arr[i], arr[i] + columns);
    }
    cout << endl;
    cout << "Largest element in each row of a matrix: " << endl;
    for (int i = 0; i < rows; i++)
    {
        cout << max_values[i] << " ";
    }
    return 0;
}