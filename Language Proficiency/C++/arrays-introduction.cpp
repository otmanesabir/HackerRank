#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> h;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        h.push_back(a);
    }
    reverse(h.begin(), h.end());
    for (auto &it : h){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
