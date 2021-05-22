#include <iostream>
using namespace std;

int search(int arr[],int n, int x){
	int i;
	for(i=0; i<n; i++){
		if(arr[i]==x)
		return i;
	}
	return -1;
}
int main(void){
	int arr[] = {2,3,5,7,10,34};
	int x =34;
	int n = sizeof(arr)/sizeof(arr[0]);
	int result = search(arr,n,x);
	if(result ==-1){
		cout<<"Number not found";
	}
	cout<<"Number found at this position"<<result;
	return 0;
}
