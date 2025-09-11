#include <bits/stdc++.h>
using namespace std;
// 1. Extracting the number
int input1(int n)
{
    while (n > 0)
    {
        double lastdigit = n % 10;
        cout << lastdigit;
        n = n / 10;
    }
    return n;
}

// 2. Count the digits
// Method 1
int input2(int n)
{
    int count = 0;
    while (n > 0)
    {
        double lastdigit = n % 10;
        n = n / 10;
        count++;
    }
    cout << count;
    return count;
}
// Method 2                     Runs faster
int input3(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    cout << count;
    return count;
}
// Method 3                     Runs slower
int input4(int n)
{
    int count = (int)(log10(n) + 1);
    cout << count;
    return count;
}
// 3. Reversing the number
int input5(int n)
{
    int revNum = 0;
    while (n > 0)
    {
        double lastdigit = n % 10;
        n = n / 10;
        revNum = (revNum * 10) + lastdigit;
    }
    cout << revNum;
    return n;
}

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    // input1(n);
    // input2(n);
    // input3(n);
    // input4(n);
    input5(n);
    return 0;
}