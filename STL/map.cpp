#include <bits/stdc++.h>
using namespace std;
void mymap()
{
    map<int, int> mpp;            // 1 Key 1 value
    map<int, pair<int, int>> Mpp; // 1 Key 2 Values
    map<pair<int, int>, int> MPP; // 2 Keys 1 Value

    // Declaring elements in map
    mpp[1] = 2;         // Method 1
    mpp.emplace(3, 1);  // Method 2
    mpp.insert({2, 4}); // Method 3

    for (auto it : mpp)
    {
        cout << it.first << " -> " << it.second << "\n";
    }
    cout << endl;

    Mpp[1] = {20, 30};
    Mpp[2] = {30, 20};
    Mpp[3] = {10, 40};

    for (auto it : Mpp)
    {
        cout << it.first << " -> " << it.second.first << " " << it.second.second << endl;
    }
    cout << endl;

    MPP[{2, 3}] = 10;
    MPP[{3, 5}] = 30;
    MPP[{2, 4}] = 20;

    for (auto it : MPP)
    {
        cout << it.first.first << " " << it.first.second << " -> " << it.second << endl;
    }
    cout << endl;

    // auto it = mpp.find(1);
    // cout << *(it);
}
int main()
{
    mymap();
    return 0;
}