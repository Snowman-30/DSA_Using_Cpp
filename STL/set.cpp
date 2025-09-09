#include <bits/stdc++.h>
using namespace std;

void myset()
{
    set<int> st;
    st.emplace(1);
    st.emplace(2);
    st.emplace(2);
    st.emplace(3);
    st.emplace(4);
    auto it = st.find(3);
    st.count(2); // Counts the ocurances of the element
    st.erase(2); // Erases the element from the set.

    // For-each loop
    for (auto it : st)
    {
        cout << it << " ";
    }
    cout << endl;
}

void mset()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    // {1,1,1}

    int cnt = ms.count(1); // Gives the number of occurences of the element.

    ms.erase(ms.find(1), ms.end()); // Erases all occurences.
    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;
}
int main()
{
    myset();
    mset();
    return 0;
}