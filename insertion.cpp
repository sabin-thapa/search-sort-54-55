#include <iostream>
using namespace std;

//Insertion sort
void insertionSort(int arr[]){
	int i=0;
		for(int j=1;j<5;j++){
		int key=arr[j];
		i=j-1;
		while(i>=0 && arr[i]>key){
			arr[i+1]=arr[i];
			i=i-1;
		}
		arr[i+1]=key;
	}
}
int main(){
	
	int arr[]={7,5,9,2,10};
	insertionSort(arr);
	for(int i=0;i<5;i++){
		cout<<arr[i]<<endl;
	}
	

}
