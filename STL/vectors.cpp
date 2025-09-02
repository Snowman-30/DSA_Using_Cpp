#include <bits/stdc++.h>
using namespace std;
void vectors()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);

    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.emplace_back(1, 2);

    vector<int> v1(5, 100); // 5 Instances of 100 will be stored.
    vector<int> v2(5);      // 5 Instances of 0 or garbage value will be stored.
    vector<int> v3(2, 200);

    vector<int> vec1(5, 20); // 5 Instances of 20
    vector<int> vec2(vec1);  // Copy of vec1 with same instances.

    // cout << v[1] << " " << v[0] << endl;
    // cout << vec2[0] << " " << v1[1] << " " << vec2[2] << " " << vec2[3] << " " << vec2[4];

    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " " << endl;
    it += 2;
    cout << *(it) << " " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << *(it) << " ";
        it++;
    }
    cout << endl;

    vector<int>::iterator End = v.end();
    End--;
    cout << *(End) << " " << endl;
    cout << v1.back() << " " << endl;

    // Aam Zindgi
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // Mentos Zindgi
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // Melody Zindgi
    // For-each loop
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    // Deletion of Vectores
    v.erase(v.begin() + 1, v.begin() + 3);
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    // Insertion
    v3.insert(v3.begin(), 300);
    for (auto it : v3)
    {
        cout << it << " ";
    }
    cout << endl;

    // Complete Insertion
    vector<int> copy(2, 50);
    v3.insert(v3.begin(), copy.begin(), copy.end());
    for (auto it : v3)
    {
        cout << it << " ";
    }
    cout << endl;

    cout << v.size();       // Shows the size of the vector
    v.pop_back();           // Pops the last element of the vector
    cout << endl;
    cout << v.size();

    v1.swap(v3);            // Swaps one vector with another
    for (auto it : v1)
    {
        cout << it << " ";
    }
    cout << endl;
    v.clear();              // Clears out the entire vector
    v.emplace_back(2);
    cout << v.empty();      // Checks whether the vector is empty or not via True(1) & False(0).
}

int main()
{
    vectors();
    return 0;
}