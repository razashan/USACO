#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int l, int r, int x){
	if(r>=l){
		int mid = l + (r-l)/2;
		if (arr[mid]==x){
			return mid;
		}
		if (arr[mid]>x){
			return binarysearch(arr,l,mid-1,x);
		}
		return binarysearch(arr,mid+1,r,x);
	}
	return -1;
}
int main(void){
	int arr[] = {2,4,5,7,11,35,67};
	int x = 11;
	int n = sizeof(arr)/sizeof(arr[0]);
	int result = binarysearch(arr,0,n-1,x);
	if(result == -1){
		cout<<"Elemenet is not present";
	}
	cout<<"Element is present at this index"<<result;
	return 0;
}
