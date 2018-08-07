/*

https://www.youtube.com/watch?v=GUDLRan2DWM
Selection sort using two arrays

*/
#include <iostream>
using namespace std;

const int MAXVALUE = 2147483647; //maximum value int can store

static int minComparisonCounter = 0;
static int sortCounter = 0;

int getMinElementIndex(int A[], int n ){
	
	int min = 0;
		
	for(int i = 1; i <= n ; i++){
		if (A[i] < A[min] ){min = i;}
		minComparisonCounter++; // optional
		}
		
	return min; //index of the minimum element;
}


void selectionSort(int A[], int n){
	
	int B[n]; //secondary sorted array
	int min; // variable to store index of the minimum element
	
	for(int i = 0; i < n;i++) {
		
		//find min in A
		min = getMinElementIndex(A,n);	
		//set the min element at the ith position
		B[i] = A[min];
		//setting A[min] to a very large value
		A[min] = MAXVALUE;
		sortCounter++; //optional
	}	
		
		//printing the elements 
		//TODO : This should be done in main()
		
		for(int i = 0 ; i<n ; i++){
			
			cout << B[i] <<" " ;		}
		
		}




int main(){
	
	int A[10] = {5,6,1,4,3,2,7,8,5,0};
	selectionSort(A,10);
	cout<<endl;
	cout<<"minComparisonCounter - "<<minComparisonCounter<<endl;
	cout<<"sortCounter - "<< sortCounter<<endl;
	
	return 0;
}
