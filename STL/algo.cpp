#include <bits/stdc++.h>
using namespace std;
// sort according to the second element. If second element is same, sort according to the first.

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    // If they are same
    if (p1.first > p2.first)
        return true;
    return false;
}

void algo()
{
    pair<int, int> a[] = {{1, 2},
                          {2, 1},
                          {4, 1}};

    sort(a, a + 3, comp);
}

int main()
{
    vector<int> a = {1, 2, 5, 10, 9};
    algo();
    int num = 7;
    int cnt = __builtin_popcount(num);
    cout << cnt;

    cout << endl;

    long long Num = 12345678910;
    int Cnt = __builtin_popcountll(Num);
    cout << Cnt;
    cout << endl;

    string s = "123";
    sort(s.begin(), s.end()); // ensure lexicographic start
    do
    {
        cout << s << "\n";
    } while (next_permutation(s.begin(), s.end()));
    cout << endl;

    int maxi = *max_element(a.begin(), a.end());
    cout << maxi;

    cout << endl;
    
    int mini = *min_element(a.begin(), a.end());
    cout << mini;

    return 0;
}