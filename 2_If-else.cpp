#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1. Write a program to check whether you are an Adult or not.
    /*
        int age;
        cin >> age;
        if (age >= 18)
        {
            cout << "You are an Adult";
        }
        else if (age < 10)
        {
            cout << "You are NOT an Adult";
        }
    */

    // 2. Write a Program for grading the marks.
    /*
        int marks;
        cin >> marks;
        if (marks < 25)
        {
            cout << "F";
        }
        else if (marks < 44)
        {
            cout << "E";
        }
        else if (marks < 49)
        {
            cout << "D";
        }
        else if (marks < 59)
        {
            cout << "C";
        }
        else if (marks < 79)
        {
            cout << "B";
        }
        else if (marks <= 100)
        {
            cout << "A";
        }
    */

    // 3. Nested if-else question.
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "Not eligible for the job.";
    }

    else if (age <= 57)
    {
        cout << "Eligible for the job";
        if (age >= 54)
        {
            cout << ", retirement soon.";
        }
    }
    else
    {
        cout << "Retirement time";
    }
    return 0;
}