#include <iostream>
using namespace std;


int binarySearch(int list[],int target, int size){
	int min = 0;
	int max = size-1;
	int mid;
	
	
	while(max>=min){
		mid = (min+max)/2;
		
		if(list[mid]==target){
			return mid;
		}
		
		else if(list[mid]<target){
			min = mid+1;
		}
		else if(list[mid]>target){
			max = mid-1;
		}
		
	}
	return -1;
}

int main(){
	int list[] = {1,2,3,4,5};
	int size;
	size = sizeof(list) / sizeof(list[0]);
	int result = binarySearch(list, 4, size-1);
	(result==-1) ? cout<<"Element not present in the list"
				 : cout<<"Element present at index "<<result;
	return 0;
}


