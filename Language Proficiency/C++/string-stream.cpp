#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> ans;
    int val;
    char c;
    while (1){
        ss >> val;
        ans.push_back(val);
        if (ss.eof()){
            break;
        } else {
            ss >> c;
        }
    }
    return ans;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    return 0;
}

