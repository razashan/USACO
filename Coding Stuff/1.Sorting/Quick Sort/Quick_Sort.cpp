#include<iostream>
#include<cstdlib>
using namespace std;

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int a[], int l,int h){
	int pivot, index, i;
	index = l;
	pivot = h;
	for(i = l; i<h; i++){
		if(a[i]<a[pivot]){
			swap(&a[i],&a[index]);
			index++;
		}
	}
	swap(&a[pivot],&a[index]);
	return index;
}
int Randompivotpartition(int a[],int l, int h){
	int pvt, n,temp;
	n = rand();
	pvt = l + n%(h-l+1);
	swap(&a[h],&a[pvt]);
	return partition(a,l,h);
}
int quicksort(int a[],int l,int h){
	int pindex;
	if(l<h){
		pindex = Randompivotpartition(a,l,h);
		quicksort(a,l,pindex-1);
		quicksort(a,pindex+1,h);
	}
	return 0;
}
int main(){
	int n,i;
	cout<<" Enter the data element to sort";
	cin>>n;
	int arr[n];
	for(i =0; i<n ; i++){
		cout<<"Enter the number";
		cin>>arr[i];
	}
	quicksort(arr,0,n-1);
	cout<<"\n Sorted Data ";
	for(i = 0; i<n; i++){
		cout<<"-> "<<arr[i];
	}
	return 0;
}
