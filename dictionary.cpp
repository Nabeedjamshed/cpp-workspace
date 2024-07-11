#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {


    map<string, int> mp;
    for (int i = 0; i < 3; i++ ) {
        string name;
        int age;
        cin >> name >> age;

        mp[name] = age;

    }

    for (auto it= mp.begin(); it != mp.end(); it++) {
        cout << it->first << "  " << it->second << endl;
    }
    return 0;
}