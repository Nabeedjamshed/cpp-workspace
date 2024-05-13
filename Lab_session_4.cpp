// #include <iostream>
// using namespace std;

// int startl4()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Start of Lab 04\n" << endl;
//     return 0;
// }
// void swaap(int *p1, int *p2)
// {
//     int temp = *p1;
//     *p1 = *p2;
//     *p2 = temp;
// }
// int main()
// {
//     startl4();
//     int a, b;
//     cout << "Enter number 1: ";
//     cin >> a;
//     cout << "Enter number 2: ";
//     cin >> b;
//     int *ptr1 = &a;
//     int *ptr2 = &b;
//     cout << "Number before swaping " << *ptr1 << " and " << *ptr2 << endl;
//     swaap(ptr1, ptr2);
//     cout << "Number after swaping " << *ptr1 << " and " << *ptr2 << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int startL4()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 04\n" << endl;
//     return 0;
// }
// void reverse(int arr[], int size)
// {
//     int *start = arr;
//     int *end = arr + size - 1;
//     while (start < end)
//     {
//         int temp = *start;
//         *start = *end;
//         *end = temp;
//         start++;
//         end--;
//     }
// }

// int main()
// {
//     startL4();
//     int size_a;
//     cout<<"Enter total numbers in array: ";
//     cin>>size_a;
//     int a[size_a];
//     for (int i = 0; i < size_a; i++)
//     {
//         cout << "Enter a number of an array: ";
//         cin >> a[i];
//     }
//     int size = int(sizeof(a) / sizeof(a[0]));
//     reverse(a, size);
//     cout << "Reverse array" << endl;
//     for (int i = 0; i < size; ++i)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int startL4()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 04\n" << endl;
//     return 0;
// }
// int* maximum(int a[], int size)
// {
//     int *max = &a[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (*max < a[i])
//         {
//             max = &a[i];
//         }
//     }
//     return max;
// }
// int main()
// {
//     startL4();
//     int a[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Enter a number of an array: ";
//         cin >> a[i];
//     }
//     int size = int(sizeof(a) / sizeof(a[0]));
//     int *b = maximum(a, size);
//     cout << "The maximum value of an array is: " << *b << endl;
//     cout << "The adress of maximum value of an array is: " << b;
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int startL4()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n"
//          << endl;
//     cout << "Lab 04\n"
//          << endl;
//     return 0;
// }
// bool isPalindrome(string *str)
// {
//     string str3 = *str;
//     reverse(str3.begin(), str3.end());
//     if (*str == str3)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// int main()
// {
//     startL4();
//     string s;
//     cout << "Enter a string: ";
//     cin >> s;
//     string *ptr = &s;
//     bool b = isPalindrome(ptr);
//     if (b == 1)
//     {
//         cout << "Your enter string is Palindrome.";
//     }
//     else
//     {
//         cout << "Your enter string is not Palindrome.";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void startL4()
// {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 04\n" << endl;
// }

// int removeDuplicate(int *ptr, int size)
// {
//     int newSize = size;
//     for (int i = 0; i < newSize; i++)
//     {
//         int element = *(ptr + i);
//         for (int j = i + 1; j < newSize; j++)
//         {
//             if (element == *(ptr + j))
//             {
//                 for (int k = j; k < newSize; k++)
//                 {
//                     *(ptr + k) = *(ptr + k + 1);
//                 }
//                 newSize--;
//                 j--;
//             }
//         }
//     }
//     return newSize;
// }

// int main()
// {
//     startL4();
//     int size;
//     cout << "Enter number of elements:";
//     cin >> size;
//     int element;
//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Enter element:";
//         cin >> element;
//         arr[i] = element;
//     }
//     int newSize = removeDuplicate(arr, size);
//     for (int i = 0; i < newSize; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
