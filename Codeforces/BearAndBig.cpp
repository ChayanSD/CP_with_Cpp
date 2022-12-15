#include<bits/stdc++.h>
using namespace std;

int main()
{
	 #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
   #endif
   
   int a , b , year=0;
   cin>>a>>b;

     while(1){
        year++;
       a= a*3;
       b=b*2;
       if(a>b){
        cout<<year;
        break;
       }  

     }

	return 0;
 
}