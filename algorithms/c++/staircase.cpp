#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int numtimes = 1;
    int numspc = n - 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if ( j < numspc) {
                cout << " ";
            } else {
                cout << "#";
            }
        }
        cout << endl;
        numtimes++;
        numspc--;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    staircase(n);
    return 0;
}
