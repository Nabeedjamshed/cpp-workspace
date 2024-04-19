// LAB 01
// #include <iostream>
// using namespace std;

// int startl1() {
//     cout<<"\nName: Nabeed Ali (SE-23054)\n" <<endl;
//     cout<<"Start of Lab 01\n"<<endl;
//     return 0;
// }

// int L1Q1() {
//     int length, width;
//     cout << "Enter the length of a rectangle: ";
//     cin >> length;
//     cout << "Enter the width of a rectangle: ";
//     cin >> width;
//     int rectangle = length * width;
//     cout << "The area of a rectangle is: " << rectangle << endl;
//     return 0;
// }
// int main()
// {
//     startl1();
//     L1Q1();
//     return 0;
// }

// LAB 01
// #include <iostream>
// using namespace std;

// int startL1() {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 01\n" << endl;
//     return 0;
// }

// int L1Q2() {
//     int number;
//     cout << "Enter the number: ";
//     cin >> number;
//     if (number % 2 == 0)
//     {
//         cout << number << " is even";
//     }
//     else
//     {
//         cout << number << " is odd";
//     }
//     return 0;
// }

// int main()
// {
//     startL1();
//     L1Q2();
//     return 0;
// }

// LAB 01
// #include <iostream>
// using namespace std;

// int startL1() {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 01\n" << endl;
//     return 0;
// }

// int L1Q4() {
//     int number1, number2, number3;
//     cout << "Enter number 1: ";
//     cin >> number1;
//     cout << "Enter number 2: ";
//     cin >> number2;
//     cout << "Enter number 3: ";
//     cin >> number3;
//     if (number1 > number2 && number1 > number3)
//     {
//         cout << "Maximum number: " << number1;
//     }
//     else if (number2 > number1 && number2 > number3)
//     {
//         cout << "Maximum number: " << number2;
//     }
//     else
//     {
//         cout << "Maximum number: " << number3;
//     }
//     return 0;
// }
// int main()
// {
//     startL1();
//     L1Q4();
//     return 0;
// }

// LAB 01
// #include <iostream>
// using namespace std;

// int startL1() {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 01\n" << endl;
//     return 0;
// }

// int fabonacci(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     else if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return fabonacci(n - 1) + fabonacci(n - 2);
//     }
// }
// int main()
// {
//     startL1();
//     int num;
//     cout << "Enter the number: ";
//     cin >> num;
//     cout << "Fabonacci Series: ";
//     for (int i = 0; i <= num; i++)
//     {
//         cout << fabonacci(i) << " ";
//     }
//     return 0;
// }

// LAB 01
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int startL1() {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 01\n" << endl;
//     return 0;
// }

// int L1Q5() {
//     string str;
//     cout << "Enter a string: ";
//     cin >> str;
//     reverse(str.begin(), str.end());
//     cout << "Reversed string: " << str;
//     return 0;
// }
// int main()
// {
//     startL1();
//     L1Q5();
//     return 0;
// }

// LAB 01
#include <iostream>
#include <cmath>
using namespace std;

int startL1() {
    cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
    cout << "Lab 01\n" << endl;
    return 0;
}

int L1Q6() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    bool flag = 0;
    if (number == 0 || number == 1)
    {
        cout << number << " is not prime.";
    }
    else
    {
        for (int i = 2; i <= sqrt(number); i++)
        {
            if (number % i == 0)
            {
                cout << number << " is not prime.";
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << number << " is prime.";
        }
    }
    return 0;
}
int main()
{
    startL1();
    L1Q6();
    return 0;
}

// LAB 01
// #include <iostream>
// using namespace std;

// int startL1() {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 01\n" << endl;
//     return 0;
// }
// int factorial(int n)
// {
//     if (n == 0 or n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * factorial(n - 1);
//     }
// }

// int main()
// {
//     startL1();
//     int num;
//     cout << "Enter the number: ";
//     cin >> num;
//     cout << "Factorial of " << num << ": " << factorial(num) << endl;
//     return 0;
// }

// LAB 01
// #include <iostream>
// using namespace std;

// int startL1() {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 01\n" << endl;
//     return 0;
// }

// int L1Q8() {
//     int principal_amount, rate_of_interest, time_period, simple_interest;
//     cout << "Enter the value of principle amount: ";
//     cin >> principal_amount;
//     cout << "Enter the value of rate of interest: ";
//     cin >> rate_of_interest;
//     cout << "Enter the value of time period: ";
//     cin >> time_period;
//     simple_interest = (principal_amount * rate_of_interest * time_period) / 100;
//     cout << "Simple interest: " << simple_interest;
//     return 0;
// }
// int main()
// {
//     startL1();
//     L1Q8();
//     return 0;
// }

// LAB 01
// #include <iostream>
// using namespace std;

// int startL1() {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 01\n" << endl;
//     return 0;
// }

// int L1Q9() {
//     int year;
//     cout << "Enter the year: ";
//     cin >> year;
//     if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//     {
//         cout << year << " is a leap year";
//     }
//     else
//     {
//         cout << year << " is not a leap year";
//     }

//     return 0;
// }
// int main()
// {
//     startL1();
//     L1Q9();
// }

// LAB 01
// #include <iostream>
// using namespace std;

// int startL1() {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 01\n" << endl;
//     return 0;
// }

// int L1Q11() {
//     int n1, n2;
//     cout << "Enter the first number: ";
//     cin >> n1;
//     cout << "Enter the second number: ";
//     cin >> n2;
//     cout << "Sum is: " << n1 + n2 << endl;
//     cout << "Average is: " << (n1 + n2) / 2 << endl;
//     return 0;
// }
// int main()
// {
//     startL1();
//     L1Q11();
//     return 0;
// }

// LAB 01
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int startL1() {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 01\n" << endl;
//     return 0;
// }

// int L1Q14() {
//     float ftemp, ctemp;
//     cout << "Enter the Fahrenheit temperature: ";
//     cin >> ftemp;
//     ctemp = ((ftemp - 32) * (5.0 / 9.0));
//     cout << "Celsius Temperature: " << fixed << setprecision(1) << ctemp;
//     return 0;
// }
// int main()
// {
//     startL1();
//     L1Q14();
//     return 0;
// }

// LAB 01
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int startL1() {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 01\n" << endl;
//     return 0;
// }
// int reversestr(int num)
// {
//     string s = to_string(num);
//     reverse(s.begin(), s.end());
//     int num1 = stoi(s);
//     return num1;
// }
// int main()
// {
//     startL1();
//     int number;
//     cout << "Enter a 2 digit integer value: ";
//     cin >> number;
//     int number1 = reversestr(number);
//     cout << "Reverse of this value is: " << number1;
//     return 0;
// }

// LAB 01
// #include <iostream>
// using namespace std;

// int startL1() {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 01\n" << endl;
//     return 0;
// }

// int L1Q12() {
//     int second;
//     cout << "Enter the time in seconds: ";
//     cin >> second;
//     int hour, minutes, remaindersec, remaindermin, remainingseconds;
//     hour = second / 3600;
//     remaindersec = second % 3600;
//     minutes = remaindersec / 60;
//     remaindermin = remaindersec % 60;
//     cout << "Hours in time is: " << hour << endl;
//     cout << "Minutes in time: " << minutes << endl;
//     cout << "Minutes in time: " << remaindermin << endl;
//     return 0;
// }
// int main()
// {
//     startL1();
//     L1Q12();
//     return 0;
// }

// LAB 01
// #include <iostream>
// using namespace std;

// int startL1() {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 01\n" << endl;
//     return 0;
// }

// int L1Q13() {
//     int amount;
//     cout << "Enter amount in rupees: ";
//     cin >> amount;

//     cout << "1000's in the given amount is: " << amount / 1000 << endl;
//     amount = amount % 1000;
//     cout << "500's in the given amount is: " << amount / 500 << endl;
//     amount = amount % 500;
//     cout << "100's in the given amount is: " << amount / 100 << endl;
//     amount = amount % 100;
//     cout << "50's in the given amount is: " << amount / 50 << endl;
//     amount = amount % 50;
//     cout << "10's in the given amount is: " << amount / 10 << endl;
//     amount = amount % 10;
//     cout << "5's in the given amount is: " << amount / 5 << endl;
//     amount = amount % 5;
//     cout << "2's in the given amount is: " << amount / 2 << endl;
//     amount = amount % 2;
//     cout << "1's in the given amount is: " << amount / 1 << endl;
//     amount = amount % 1;
//     return 0;
// }
// int main()
// {
//     startL1();
//     L1Q13();
//     return 0;
// }

// LAB 01
// #include <iostream>
// #include <cmath>
// using namespace std;

// int startL1() {
//     cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
//     cout << "Lab 01\n" << endl;
//     return 0;
// }
// int count_digits(int n)
// {
//     int digit = 0;
//     while (n != 0)
//     {
//         n = n / 10;
//         digit++;
//     }
//     return digit;
// }

// void is_armstrong(int n)
// {
//     int total_digits = count_digits(n);
//     int sum = 1;
//     int temp = n;
//     while (temp != 0)
//     {
//         int digit = temp % 10;
//         sum += pow(digit, total_digits);
//         temp = temp / 10;
//     }
//     if (n == sum)
//     {
//         cout << n << " is an Armstrong number." << endl;
//     }
//     else
//     {
//         cout << n << " is not an Armstrong number." << endl;
//     }
// }

// int main()
// {
//     startL1();
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//     is_armstrong(number);
//     return 0;
// }
