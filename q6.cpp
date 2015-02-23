/*
 Program: Question 6 from quiz 1.
 Name : Anish Dhakal
 Roll: 0310
 Output: 2686712 (Random Garbage)
*/

#include<iostream>

using namespace std;

int main()
{
    int a; int* q;
    a = 4;
    q = &a;
    cout << *(q+1);
}
