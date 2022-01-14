#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int sequential_search(int A[],int k, int n){
	int c = 0;
	while((A[c]!=k)&&(c<n))
		c++;
	if(c<n){
		cout << "found!" << endl; 
		return c;
	}		
	else{
		cout << "not found!" << endl;
		return -1;
	}
}

int main(int argc, char** argv) {
	int n=20;
	int num[n];
	int k;
	srand(time(0));
	for(int i=0; i<n; i++){
		num[i]=rand() %100+1;
		cout << num[i] << " ";
	}
	cout << "Find number : ";
	cin >> k;
	cout << k << " is at position: " << sequential_search(num,k,n)+1 << endl;
	return 0;
}

