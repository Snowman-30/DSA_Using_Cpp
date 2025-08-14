#include <bits/stdc++.h>
using namespace std;
int main()
{
    //  1D aray.
    /*
        int arr[5];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

        cout << "\n"
            << arr[2];
    */

    //  2D Array
    /*
        int arr[3][5];
        cin >> arr[1][3];
        cout << arr[2][3];
    */

    //  String
    string s = "Dhruv";
    int len = s.size();

    s[len - 1] = 'z';

    cout << s[0];
    return 0;
}
