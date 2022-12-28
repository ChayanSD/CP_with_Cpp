#include<bits/stdc++.h>
using namespace std;

int main()
{
	 #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
   #endif
     int t,n;cin>>t;
   for(int j =1;j<=t;j++){
        cin>>n;
        cout<<"Case "<<j<<":";
        for(int i=1;i<=n;i++){
            if(n%i==0){
                cout<<" "<<i;
            }
        }
        cout<<endl;
     }
    return 0;
}
