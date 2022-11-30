// https://www.hackerrank.com/challenges/c-tutorial-strings/problem
#include<bits/stdc++.h>
using namespace std;

int main()
{
	 #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
   #endif
  string a, b;
    cin >> a >> b;
    
    cout << a.size() << " " << b.size() << endl;
    
    cout << a + b << endl;
    
    swap( a[0], b[0] );
    cout << a << ' ' <<  b << endl;
    
return 0;
}
