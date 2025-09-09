#include <bits/stdc++.h>
using namespace std;
void mylist()
{
    list<int> ls;
    ls.emplace_back(4);
    ls.emplace_front(5);

    // For-each loop
    for (auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;
}
int main()
{
    mylist();
    return 0;
}