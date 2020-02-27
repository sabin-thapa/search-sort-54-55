#include<iostream>
#include <cmath>
using namespace std;
int a[15];
void merge(int L[],int n1,int R[],int n2){
	int i=0,j=0,k=0;
	while(i<n1 && j<n2){
		if(L[i]<R[j]){
			a[k]=L[i];
			i++	;
		}
		else{
			a[k]=R[j];
			j++;
		}
		k++;
	}
	if(i<n1){
		while(i<n1){
			a[k]=L[i];
			i++;
			k++;
		}
	}
	if(j<n2){
		while(j<n2){
			a[k]=R[j];
			j++;
			k++;
		}
	}
	
}

void mergeSort(int arr[],int n){
	int mid=floor(n/2);
	int n1=mid;
	int n2=n-mid;
	int L[n1],R[n2];
	cout<<mid<<endl;
	if (n==1){
		return ;
	}
	else{
		
		for(int i=0;i<=mid;i++){
			L[i]=arr[i];
		}
		for(int i=mid+1;i<n;i++){
			int j=0;
			R[j]=arr[i];
			j+=1;
		}
	}
	mergeSort(L,mid);
	mergeSort(R,mid+1);
	
	//merge(L,n1,R,n2);
}


int main(){
	int arr[]={7,5,9,2,10};
	mergeSort(arr,5);
	cout<<"The sorted array is"<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<endl;
	}
}
