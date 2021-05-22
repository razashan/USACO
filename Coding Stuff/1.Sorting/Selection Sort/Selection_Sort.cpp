#include<iostream>
using namespace std;

void swap(int *xp,int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void selectionsort(int arr[], int n){
	int i,j, min_idx;
	for(i = 0; i<n-1;i++){
		min_idx = i;
		for(j = i+1; j<n;j++)
		if(arr[j]<arr[min_idx])
		min_idx = j;
		
		swap(&arr[min_idx],&arr[i]);
	}
}
void print(int arr[],int n){
	int i;
	for(i =0; i<n;i++){
		cout<<arr[i]<<" ";
		cout<<endl;
	}
}
int main(){
	int arr[] = {54,67,20,1209,21};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr,n);
	cout<<"Sorted Array :\n";
	print(arr,n);
	return 0;
}
