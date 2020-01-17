#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++){
        int size;
        cin >> size;
        for (int j = 0; j < size; j++){
            int val;
            cin >> val;
            arr[i].push_back(val);
        }
    }
    for (int k = 0; k < q; k++){
        int i, j;
        cin >> i >> j;
        cout << arr[i][j] << endl;
    }
    return 0;
}

