#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) // mid islie lya hai bcz 2 temporary arrays bnani hai jo last mai merge hokr final result dengi tu is arrays ka size find krne kelie mid as a argument lya hai.
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    int a[n1];
    int b[n2];

    // Copy data to temporary arrays a[] and b[]
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    // Merge the temporary arrays back into arr[left..right]
    int i = 0, j = 0, k = 1; // Initialize indices for temporary arrays and merged array
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
        }
        else
        {
            arr[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of a[], if there are any
    while (i < n1)
    {
        arr[k] = a[i];
        i++;
        k++;
    }

    // Copy the remaining elements of b[], if there are any
    while (j < n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2; // Find the middle point

        // Sort first and second halves
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

int main()
{
    int arr[] = {3, 1, 6, 2, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    merge_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
