/*
 Program: Question 4 from quiz 1.
 Name : Anish Dhakal
 Roll: 0310
 Output: 4 4
*/

#include<iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int* p;
    int* q;
    a = 3;
    p = &a;
    q = p;
    b = 4;
    *q = b;
    cout << *p <<" " << a;
}
