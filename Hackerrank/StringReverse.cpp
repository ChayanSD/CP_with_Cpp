#include<bits/stdc++.h>
using namespace std;

int main()
{
	 #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
   #endif
        string s;
        cin >>s;
        string reverse;
        for(int i = s.size()-1;i>=0;--i){
            reverse.push_back(s[i]);
        }
        cout<<reverse;

	return 0;
 
}
