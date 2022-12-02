#include<bits/stdc++.h>
using namespace std;

int main()
{
	 #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
   #endif

	pair<int,string> p;
   // p=make_pair(2,"chayan");
    p={2,"chayan"};
    cout<<p.first<<" "<<p.second<<endl;

int a[]={1,2,3};
int b[]={2,3,4};
pair<int,int> p_array[3];
p_array[0]={1,2};
p_array[1]={2,3};
p_array[2]={3,4};
swap(p_array[0],p_array[2]);
for(int i = 0;i<3;i++){
    cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
}

}
/*
if i need to take input from user
cin>>p.first>>p.second;
syntax:pair<dt1,dt2> pairvariable;

*/

 
