#include <bits/stdc++.h>
using namespace std;

// //  void and non Parametrised Function
// void printName()
// {
//     cout << "Hey DD" << endl;
// }

// //  Parametrised Function
// void printName(string n)
// {
//     cout << "Hey " << n << endl;
// }

//  return Function
// int sum(int a, int b)
// {
//     int c = a + b;
//     return c;
// }

// int maximum(int num1, int num2)
// {
//     if (num1 > num2)
//     {
//         return num1;
//     }
//     return num2;
// }

//  Pass by value
int add(int num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

string str(string name)
{
    cout << name << " (Copy)" << endl;
    name[0] = 'b';
    cout << name << " (Modified)" << endl;
}

//  Pass by reference
int change(string &naam)
{
    cout << naam << " (Copy)" << endl;
    naam[0] = 'B';
    cout << naam << " (Modified)" << endl;
}
int main()
{
    // string name = "Dhruv";
    // string name1;
    // getline(cin, name1);
    // printName();
    // printName(name);
    // printName(name1);

    // int num1, num2;
    // cin >> num1 >> num2;
    // int result = sum(num1, num2);
    // cout << result;

    // int a, b;
    // cin >> a >> b;
    // int maxx = maximum(a, b);
    // cout << maxx;

    int a = 10;
    add(a);
    cout << a << endl;

    string s = "Dhruv";
    str(s);
    cout << s << " (Original)" << endl;

    string dd = "dhruv";
    change(dd);
    cout << dd << " (Original)" << endl;
    return 0;
}