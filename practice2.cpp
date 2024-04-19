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

#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

int sum(vector <int> arr){
    int sums = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sums = sums + arr[i];
    }
    return sums;
}
int main() {
    string days[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    vector <string> province_list;
    vector<vector <int> >province_temperature;
    vector <float> average;
    for (int i = 0; i < 4; i++)
    {
        string province;
        cout<<"Enter a name of a province: ";
        cin>>province;
        province_list.push_back(province);
        vector <int> province_temp;
        for(auto j:days){
            int temp;
            cout<<"Enter a temperature of "<<j<<": ";
            cin>>temp;  
            province_temp.push_back(temp);
        }
        province_temperature.push_back(province_temp);
        float add,length;
        add = sum(province_temp);
        length = province_temp.size();
        float avg = (add / length);
        double avg_rounded= round(avg);
        average.push_back(avg_rounded);
    }

    for (int i = 0; i < province_list.size(); i++)
    {
        cout<<endl;
        cout<<province_list[i]<<endl;
        cout<<"Temperature of a week"<<endl;
        for(auto temp : province_temperature[i]){
            cout<<temp<<" ";
        }
        cout<<endl;
        cout<<"The average temp of " <<province_list[i]<< " in a week is: "<< average[i]<<endl;
    }
    return 0;
}   














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