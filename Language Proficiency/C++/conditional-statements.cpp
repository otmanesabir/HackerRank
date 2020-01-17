#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> eng = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "Greater than 9"};
    if (n > 9){
        cout << eng[9] << endl;
    } else {
        cout << eng[n-1] << endl;
    }

    return 0;
}
