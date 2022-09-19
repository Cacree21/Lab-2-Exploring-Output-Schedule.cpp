/*
Caleb Acree
C++ Fall 2022
Due: September 14, 2022
Lab 2 Exploring Output
This lab is designed to get you familiar output to the command prompt using C++
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const string M = "Monday";
    const string T = "Tuesday";
    const string W = "Wednesday";
    const string Th = "Thursday";
    const string F = "Friday";
    const string Trt = "8:00  - 9:00";
    const string Tr = "College Algebra & Trigonometry 109";
    const string Cst = "10:00 - 11:00";
    const string Cs = "C++ 111";
    const string Ht = "12:30 - 2:00";
    const string H = "HTML Basics 253";
    const string S = "      ";
    const string s = "  ";
    
    cout << M << S << Trt << s << "     " <<Tr << endl << M << S << Cst << s << "   " <<Cs << endl << M << S << Ht << s << "    " << H;
    cout << endl << endl << T << "     " << Trt << s << "     " <<Tr << endl << T << "     " << Cst << s << "   " <<Cs;
    cout << endl << endl << W << "   " << Trt << "       " << Tr << endl << W << "   " << Cst << "     " << Cs << endl << W << "   " << Ht << "      " << H;
    cout << endl << endl << Th << "    " << Trt << "       " << Tr << endl << Th << "    " << Cst << "     " << Cs;
    cout << endl << endl << F << S << Trt << "       " << Tr << endl << F << S << Cst << "     " << Cs;
    
    return 0;
}
