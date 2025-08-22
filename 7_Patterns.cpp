#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // Stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }

        // Space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // Stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }

        // Space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern11(int n)
{
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern12(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // Numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // Spaces
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        // Number
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
void pattern13(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
}
void pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Character
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch << " ";
            if (j <= breakpoint)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }

        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = ('A' + n - 1) - i; ch <= 'A' + n - 1; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern19(int n)
{
    int space = 0;
    for (int i = 0; i < n; i++)
    {
        // Stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "*" << " ";
        }
        // Spaces
        for (int j = 0; j < space; j++)
        {
            cout << "  ";
        }

        // Stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "*" << " ";
        }
        space += 2;
        cout << endl;
    }

    space = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        // Stars
        for (int j = 0; j < i; j++)
        {
            cout << "*" << " ";
        }
        // Spaces
        for (int j = 0; j < space; j++)
        {
            cout << "  ";
        }

        // Stars
        for (int j = 0; j < i; j++)
        {
            cout << "*" << " ";
        }
        space -= 2;
        cout << endl;
    }
}
void pattern20(int n)
{
    int space = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }
        // Stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }

        // Spaces
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        // Stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
        {
            space -= 2;
        }
        else
        {
            space += 2;
        }
    }
}
void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t; // Test case -> For how many times code will run.
    for (int i = 0; i < t; i++)
    {
        int b;
        cin >> b;
        // pattern1(b);
        // pattern2(b);
        // pattern3(b);
        // pattern5(b);
        // pattern6(b);
        // pattern7(b);
        // pattern8(b);
        // pattern9(b);
        // pattern10(b);
        // pattern11(b);
        // pattern12(b);
        // pattern13(b);
        // pattern14(b);
        // pattern15(b);
        // pattern16(b);
        // pattern17(b);
        // pattern18(b);
        // pattern19(b);
        // pattern20(b);
        pattern21(b);
    }

    return 0;
}