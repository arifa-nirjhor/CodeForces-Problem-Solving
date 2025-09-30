//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M



#include <bits/stdc++.h>
using namespace std;

int main()
{
    char X;
    cin>>X;

    if(X>=(char)65 && X<=(char)90)
    {
        cout<<"ALPHA"<< endl<<"IS CAPITAL"<< endl;
    }
    else if(X>=(char)97 && X<=(char)122)
    {
         cout<<"ALPHA"<< endl<<"IS SMALL"<< endl;
    }
    else if(X>=(char)48 && X<=(char)57)
    {
         cout<<"IS DIGIT"<< endl;
    }
    return 0;
}