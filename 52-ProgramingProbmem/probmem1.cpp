#include<bits/stdc++.h>
using namespace std;

int main()
{
	 #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
   #endif
  int t;
  cin>>t;
  while(t--){
    int n ; cin>>n;
    
    if((n&1)==1){
        cout<<"odd"<<endl;
    }
    else{
        cout<<"even"<<endl;
    }
  }
   return 0;
}
