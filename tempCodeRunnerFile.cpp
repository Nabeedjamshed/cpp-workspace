#include <iostream>
using namespace std;

int startL1() {
    cout << "\nName: Nabeed Ali (SE-23054)\n" << endl;
    cout << "Lab 01\n" << endl;
    return 0;
}

int L1Q8() {
    int principal_amount, rate_of_interest, time_period, simple_interest;
    cout << "Enter the value of principle amount: ";
    cin >> principal_amount;
    cout << "Enter the value of rate of interest: ";
    cin >> rate_of_interest;
    cout << "Enter the value of time period: ";
    cin >> time_period;
    simple_interest = (principal_amount * rate_of_interest * time_period) / 100;
    cout << "Simple interest: " << simple_interest;
    return 0;
}
int main()
{
    startL1();
    L1Q8();
    return 0;
}