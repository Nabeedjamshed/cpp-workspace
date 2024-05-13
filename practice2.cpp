// #include<iostream>
// using namespace std;

// int main() {
//     int table_no,table_limit;
//     cout<<"Enter a table number: ";
//     cin>>table_no;
//     cout<<"Enter a table limit: ";
//     cin>>table_limit;
//     for (int i = 1; i <= table_limit; i++)
//     {
//         cout<<table_no<<" x "<<i<<" = "<<table_no*i<<endl;
//     }

//     int i = 1;
//     while (i<=table_limit)
//     {
//         cout<<table_no<<" x "<<i<<" = "<<table_no*i<<endl;
//         i++;
//     }

//     int i = 1;
//     do
//     {
//        cout<<table_no<<" x "<<i<<" = "<<table_no*i<<endl;
//        i++;
//     } while (i<=table_limit);

//     return 0;
// }

// #include<iostream>
// using namespace std;
// // why do-while use
// int main() {
//     char a;
//     cout<<"Enter a character: ";
//     cin>>a;
//     if (int(a) >= 65 && int(a) <=90)
//     {
//         cout<<"Capital";
//     }
//     else if (int(a) >= 97 && int(a) <=122)
//     {
//         cout<<"Small";
//     }
//     else if (int(a) >= 48 && int(a) <=57)
//     {
//         cout<<"Number";
//     }
//     else{
//         cout<<"Special character";
//     }

//     // char cap='ABCDEFGHIJKLMNOPQRSTUVWXYZ';
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<vector<int>> l;
//     int rows, columns;
//     cout << "Enter a number of rows: ";
//     cin >> rows;
//     cout << "Enter a number of columns: ";
//     cin >> columns;
//     for (int i = 1; i <= rows; i++)
//     {
//         vector<int> k;
//         for (int j = 1; j <= columns; j++)
//         {
//             int n;
//             cout << "You are entering a data for " << i << " row and " << j << " columns:";
//             cin >> n;
//             k.push_back(n);
//         }
//         l.push_back(k);
//     }
//     for (auto j : l)
//     {
//         for (auto k : j)
//         {
//             cout << k << "\t";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int rows, columns;
//     cout << "Enter a number of rows: ";
//     cin >> rows;
//     cout << "Enter a number of columns: ";
//     cin >> columns;
//     int a[rows][columns];
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = 1; j <= columns; j++)
//         {
//             cout << "You are entering a data for " << i << " row and " << j << " columns:";
//             cin>>a[i][j];
//         }
//     }
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < columns; j++)
//         {
//             cout<<a[i][j]<<"\t";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<string>
// #include<cmath>
// using namespace std;

// int sum(vector <int> arr){
//     int sums = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         sums = sums + arr[i];
//     }
//     return sums;
// }
// int main() {
//     string days[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
//     vector <string> province_list;
//     vector<vector <int> >province_temperature;
//     vector <float> average;
//     for (int i = 0; i < 4; i++)
//     {
//         string province;
//         cout<<"Enter a name of a province: ";
//         cin>>province;
//         province_list.push_back(province);
//         vector <int> province_temp;
//         for(auto j:days){
//             int temp;
//             cout<<"Enter a temperature of "<<j<<": ";
//             cin>>temp;
//             province_temp.push_back(temp);
//         }
//         province_temperature.push_back(province_temp);
//         float add,length;
//         add = sum(province_temp);
//         length = province_temp.size();
//         float avg = (add / length);
//         double avg_rounded= round(avg);
//         average.push_back(avg_rounded);
//     }

//     for (int i = 0; i < province_list.size(); i++)
//     {
//         cout<<endl;
//         cout<<province_list[i]<<endl;
//         cout<<"Temperature of a week"<<endl;
//         for(auto temp : province_temperature[i]){
//             cout<<temp<<" ";
//         }
//         cout<<endl;
//         cout<<"The average temp of " <<province_list[i]<< " in a week is: "<< average[i]<<endl;
//     }
//     return 0;
// }

// days = ['Monday','Tuesday','Wednesday','Thursday','Friday','Saturday','Sunday']
// province_list = []
// province_temperature = []
// average = []
// for i in range(4):
//     province = input("Enter a name of a province: ")
//     province_list.append(province)
//     province_temp = []
//     for j in days:
//         temp = int(input(f"Enter a temperature of {j}: "))
//         province_temp.append(temp)
//         add = sum(province_temp)
//         length = len(province_temp)
//         avg = (add / length)
//         avg_rounded = round(avg,2)
//     province_temperature.append(province_temp)
//     average.append(avg_rounded)
// for i in range(len(province_list)):
//     print()
//     print(province_list[i])
//     print("Temperature of a week")
//     for temp in province_temperature[i]:
//         print(temp,end=" ")
//     print()
//     print(f"The average temp of {province_list[i]} in a week is: {average[i]}.")

// #include<iostream>
// #include<cstdlib>
// using namespace std;

// int main() {
//     string s;
//     cin>>s;
//     const char* c_str = s.c_str();
//     int num = atoi(c_str);
//     cout<<num<<endl;
//     return 0;
// }

// #include<iostream>
// #include<cstdlib>
// using namespace std;
// class Solution {
// public:
//     int myAtoi(string s) {
//         string s1 = s;
//         cin>>s1;
//         const char* c_str = s1.c_str();
//         int num = atoi(c_str);
//         return num;
//     }
// };

#include <iostream>
using namespace std;
void L2Q11_diamond(int size)
{
    const string red_font = "\033[31m";
    const string white_font = "\033[0m";
    int i, star_count;
    if (size % 2 != 0)
    {
        for (i = 1; i <= (size / 2) + 1; ++i)
        {
            for (int k = 1; k <= (size - (2 * i) + 1) / 2; ++k)
            {
                cout << ' ';
            }
            if (i == 1)
            {
                cout << red_font << '*';
            }
            else
            {
                for (int j = 1; j <= (2 * i) - 1; ++j)
                {
                    cout << white_font << '*';
                }
            }
            for (int k = 1; k <= (size - (2 * i) + 1) / 2; ++k)
            {
                cout << ' ';
            }
            cout << endl;
        }
        int star_count = size - 2;
        while (star_count >= 1)
        {
            for (int k = 1; k <= (size - star_count) / 2; ++k)
            {
                cout << ' ';
            }
            if (star_count == 1)
            {
                cout << red_font << '*';
            }
            else
            {
                for (int j = 1; j <= star_count; ++j)
                {
                    cout << white_font << '*';
                }
            }
            for (int k = 1; k <= (size - star_count) / 2; ++k)
            {
                cout << ' ';
            }
            cout << endl;
            star_count -= 2;
        }
    }
    else
    {
        for (i = 1; i <= size / 2; ++i)
        {
            for (int k = 1; k <= (size - (2 * i)) / 2; ++k)
            {
                cout << ' ';
            }
            if (i == 1)
            {
                cout << red_font << "";
            }
            else
            {
                for (int j = 1; j <= 2 * i; ++j)
                {
                    cout << white_font << '*';
                }
            }
            for (int k = 1; k <= (size - (2 * i)) / 2; ++k)
            {
                cout << ' ';
            }
            cout << endl;
        }
        star_count = size;
        while (star_count >= 1)
        {
            for (int k = 1; k <= (size - star_count) / 2; ++k)
            {
                cout << ' ';
            }
            if (star_count == 2)
            {
                cout << red_font << "";
            }
            else
            {
                for (int j = 1; j <= star_count; ++j)
                {
                    cout << white_font << '*';
                }
            }
            for (int k = 1; k <= (size - star_count) / 2; ++k)
            {
                cout << ' ';
            }
            cout << endl;
            star_count -= 2;
        }
    }
}
int main()
{
    L2Q11_diamond(9);
    return 0;
}

// #include<iostream>
// using namespace std;

// void rectangle(int l) {
// 	const string red_font = "\033[31m";
// 	const string white_font = "\033[0m";
// 	for (int i = 1; i <= l; ++i) {
// 		if (i == 1 || i == l) {
// 			for (int k = 1; k <= l; ++k)
// 				cout << white_font << '*';
// 			cout << endl;
// 			continue;
// 		}
// 		for (int j = 1; j <= l; ++j) {
// 			if (j == 1)
// 				cout << red_font << '*';
// 			else if (j == l)
// 				cout << white_font << '*';
// 			else
// 				cout << ' ';
// 		}
// 		cout << endl;
// 	}
// }
// int main() {
//     rectangle(5);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void door(int size) {
// 	const string red_font = "\033[31m";
// 	const string white_font = "\033[0m";
// 	for (int i = 1; i <= size / 2; ++i) {
// 		for (int j = 1; j <= i; ++j) {
// 			if (i == 1 && j == 1)
// 				cout << red_font << '*';
// 			else
// 				cout << white_font << '*';
// 		}
// 		for (int k = 1; k <= size - (2 * i); ++k)
// 			cout << ' ';
// 		for (int j = 1; j <= i; ++j)
// 			cout << white_font << '*';
// 		cout << endl;
// 	}
// 	for (int j = 1; j <= size; ++j)
// 		cout << white_font << '*';
// 	cout << endl;
// 	int star_count = (size - 1) / 2;
// 	while (star_count >= 1) {
// 		if (star_count == 1)
// 			cout << red_font << '*';
// 		else
// 			for (int j = 1; j <= star_count; ++j)
// 				cout << white_font << '*';
// 		for (int j = 1; j <= (size - (star_count*2)); ++j)
// 			cout << ' ';
// 		for (int j = 1; j <= star_count; ++j)
// 			cout << white_font << '*';
// 		cout << endl;
// 		star_count -= 1;
// 	}
// }
// int main() {
//     door(10);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void number_pattern(int size)
// {
//     for (int i = 1; i <= size; ++i)
//     {
//         for (int j = 1; j <= (size - i); ++j)
//         {
//             cout << ' ';
//         }
//         int j = i;
//         while (j >= 1)
//         {
//             cout << j;
//             j -= 1;
//         }
//         j = 2;
//         while (j <= i)
//         {
//             cout << j;
//             j += 1;
//         }
//         for (int j = 1; j <= size - i; ++j)
//         {
//             cout << ' ';
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     number_pattern(5);
//     return 0;
// }
// #include<iostream>
// using namespace std;

// void triangle(int size) {
// 	for (int i = 1; i <= size; ++i) {
// 		for (int j = 1; j <= i; ++j) {
// 			cout << '*';
// 		}
// 		cout << endl;
// 	}
// }
// int main() {
//     triangle(5);
//     return 0;
// }


// void L2Q11()
// {
// 	cout << setw(25) << "*** Patterns ***" << endl;
// 	cout << "Pattern 1:\n";
// 	L2Q11_diamond(9);
// 	cout << "\nPattern 2:\n";
// 	L2Q11_hollow_rectangle(5);
// 	cout << "\nPattern 3:\n";
// 	L2Q11_special_pattern(10);
// 	cout << "\nPattern 4:\n";
// 	L2Q11_number_pattern(5);
// 	cout << "\nPattern 5:\n";
// 	L2Q11_right_triangle(5);
// }