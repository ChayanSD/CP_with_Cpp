#include<iostream>
using namespace std;

int binarySearch(int arr[],int n , int target){
    int start =0;
    int end = n;
    while(start <=end){
        int mid = (start + end)/2;

        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end = mid -1;
        }
        else {
            start = mid +1;
        }
    }
    return -1;
}




int main()
{
	 #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
   #endif
        int n ; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        int target;
        cin>>target;

        cout<<binarySearch(arr , target ,n);

	return 0;
 
}
