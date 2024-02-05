//Problem Statment : Reverse a array
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int array[]={23,5,67,22,46,75};
	int size=sizeof(array)/sizeof(array[0]);
	int newarr[size];
	
	cout<<"old array :";
	for(int i=0;i<size;i++){
		cout<<array[i]<<" ";
	}
	
	for (int i = 0; i < size; i++) {
        newarr[i] = array[size - 1 - i];
    }
	cout<<endl<<"New array :";
	for(int i=0;i<size;i++){
		cout<<newarr[i]<<" ";
	}
}
