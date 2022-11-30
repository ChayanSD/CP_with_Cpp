#include<bits/stdc++.h>
using namespace std;
string reverseWord(string str);

int main()
{
	 #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
   #endif
        string s;
        cin>>s;
cout<<reverseWord(s);
	return 0;
 
}
string reverseWord(string str){
    string str_rev;
    for(int i = str.size()-1; i>=0;--i){
        str_rev.push_back(str[i]);
    }
    return str_rev;
}
