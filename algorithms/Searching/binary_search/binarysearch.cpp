#include <iostream>
using namespace std;
int binarySearch(int arr[],int l,int r ,int x){
	if(r >=l){
	int mid = l + (r-l)/2;
	if(arr[mid]== x){
		return mid;
	}else if(arr[mid]> x){
		return binarySearch(arr, l, mid-1, x);
	}else
	return binarySearch(arr, mid+1, r, x);
	}
	return -1;
}
int main() {
	int arr[]={1,2,3,4,5,6};
	int z=binarySearch(arr ,0,5,4);//sample input
	cout<<z;
	return 0;
}