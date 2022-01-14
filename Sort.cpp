#include <iostream>
#include <algorithm>
#include <time.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void selection_sort(int x[], int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(x[j]<x[i])
			swap(x[i],x[j]);
		}
	}
}

void bubble_sort(int x[], int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(x[j]>x[j+1])
			swap(x[j],x[j+1]);
		}
	}
}

void insertion_sort(int x[],int n){
	int i,j,key;
	for(i=1;i<n-1;i++){
		key=x[i];
		j=i-1;
		while(j>=0 && x[j] > key){
			x[j+1]=x[j];
			j = j-1;
		}
		x[j+1] = key;
	}
}

int main(int argc, char** argv) {
	int n=20;
	int num1[n];
	int num2[n];
	int num3[n];
	srand(time(0));
	/*<------------------------------------->*/
	for(int i=0; i<n; i++){
		num1[i]=rand() %100+1;
		cout << num1[i] << " ";
	}
	cout << "Array 1" << endl << endl;
	selection_sort(num1, n);
	for(int i=0; i<n; i++){
		cout << num1[i] << " ";
	}
	cout << "Seceltion Sort" << endl << endl;
	/*<------------------------------------->*/
	for(int i=0; i<n; i++){
		num2[i]=rand() %100+1;
		cout << num2[i] << " ";
	}
	cout << "Array 2" << endl << endl;
	bubble_sort(num2, n);
	for(int i=0; i<n; i++){
		cout << num2[i] << " ";
	}
	cout << "Buble Sort" << endl << endl;
	/*<------------------------------------->*/
	for(int i=0; i<n; i++){
		num3[i]=rand() %100+1;
		cout << num3[i] << " ";
	}
	cout << "Array 3" << endl << endl;
	insertion_sort(num3, n);
	for(int i=0; i<n; i++){
		cout << num3[i] << " ";
	}
	cout << "Insertion Sort" << endl << endl;
	/*<------------------------------------->*/
	return 0;
}
