//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

//using built in function

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    int max = *max_element(A,A+N);

    cout<<max<<endl;

    return 0;
}