//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int A ,B,C;
    cin>> A>>B>>C;
    int maximum= max(A,max(B,C));
    int Minimum = min(A,min(B,C));
    cout<<Minimum<<" "<<maximum<<endl;
    return 0;
}