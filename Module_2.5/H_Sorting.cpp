#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j > 0; j--)
        {
            swap(a[i],a[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
        cout<<" ";
    }
    return 0;
}