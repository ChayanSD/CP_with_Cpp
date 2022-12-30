#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
int n; cin>>n;
int mod = n%10;
int div = n/10000;
int sum = mod+div;
cout<<sum<<endl;
    }
    return 0;
}
