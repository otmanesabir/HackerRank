#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

string OddEven(int a){
    if (a % 2 == 0){
        return "even";
    } else {
        return "odd";
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    vector<string> eng = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for (int i = a; i <= b; i++){
        if (i > 9){
            cout << OddEven(i) << endl;
        } else {
            cout << eng[i-1] << endl;
        }
    }
    return 0;
}

