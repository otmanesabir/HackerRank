#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[2];
    cin >> str[0] >> str[1];
    cout << str[0].length() << " " <<str[1].length() << endl;
    cout << str[0] + str[1] << endl;
    swap(str[0][0], str[1][0]);
    cout << str[0] << " " << str[1] << endl;
    return 0;
}

