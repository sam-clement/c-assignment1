//*
//* Question 1
//*
//* Name: EFFIONG SAMUEL CLEMENT
//* DEPARTMENT:COMPUTER SCIENCE 
//* MATRIC NO: PDS/2013/0045
//* 
//*The program that input two integers
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int x;
    
    cout << "enter integer :\n";
    cin >> x;

if (x % 2 == 0)
cout << "the integer is even.\n";
if(x % 2 == 1)
cout << "the integer is odd.\n";

return 0;
}
