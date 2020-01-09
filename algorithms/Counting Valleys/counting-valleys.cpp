#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int lvl = 0;
    int down = 0;
    int up = 0;
    int j = 0;
    // DDUUDDUDUUUD
    while (j < n){
        if (s[j] == 'U'){
            lvl++;
            up++;
        }
        else if (s[j] == 'D'){
            lvl--;
            down++;
        }
        int i = j;
        while (lvl != 0){
            i++;
            if (s[i] == 'U'){
                lvl++;
            }
            else if (s[i] == 'D'){
                lvl--;
            }
        }
        j = i + 1;
    }
    return down;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}