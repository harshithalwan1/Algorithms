/*

https://www.youtube.com/watch?v=GUDLRan2DWM
Slassic Selection sort 
TODO - add comments and documentation
*/
#include <iostream>
using namespace std;

const int MAXSIZE = 10;

selectionSort(int A[],int n){
	
	int iMin;
	int temp;
	
	for( int i = 0; i < n - 1; i++){
		
			iMin = i;
			
			for( int j = i+1; j < n ;j++){
				
				if(A[j] < A[iMin] ){
					iMin = j;
				}
				
			}
			
			temp = A[i];
			A[i] = A[iMin];
			A[iMin] = temp;
			
			
	}
	
	
}


int main(){
	
	int A[MAXSIZE] = {5,6,1,4,3,2,7,8,5,0};
	selectionSort(A,MAXSIZE);
	
	for(int i = 0; i<MAXSIZE;i++){
		cout<<A[i]<< " ";
	}
	
	
	
	return 0;
}


