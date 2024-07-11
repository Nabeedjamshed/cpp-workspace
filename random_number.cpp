#include <cstdlib>
#include <random>
#include <ctime>
#include <iostream>
using namespace std;

int main() {

    srand(time(0));
    for (int i = 0; i < 6; i++) {
        cout << (rand() % 6) + 1 << endl;
    }
    // cout << num << endl;
    return 0;
}