/*
1. Algorithmic Thinking, Peak Finding - https://www.youtube.com/watch?v=HtSuA80QTyo&t=1190s

other resources - https://www.geeksforgeeks.org/find-a-peak-in-a-given-array/

*/


int findPeakLinearly(int *A, int size){
	
	for(int i = 0; i < size; i++) {
		
		if(A[i] >= A[i+1] && A[i] >=A[i-1])
		{
			return i;
		}
		
	}
	
	
}

#include <iostream>
using namespace std;

int main(){
	
	
	return 0;
}
