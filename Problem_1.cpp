#include <iostream>
using namespace std;
int main(){
//    int array[10];
//    int array_size=sizeof(array)/sizeof(array[0]);
//    for(int i=0;i<array_size;i++){
//    	cout<<"Enter "<<i+1<<" element of the array :";
//    	cin>>array[i];
//	}
//	cout<<array[0];
	int array[]={23,44,67,89,54,34,87,21,45,76,59,32};
	int array_size=sizeof(array)/sizeof(array[0]);
	for(int i=0;i<array_size;i++){
		for(int j=i;j<array_size;j++){
			if(array[i]>array[j]){
				int temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}	
	}
	
	cout<<"Minimum Number is :"<<array[0]<<endl;
	cout<<"Maximum Number is :"<<array[array_size-1];
	}
	
//	another approch
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int array[]={23,44,67,89,54,34,87,21,45,76,59,32};
//	int min,max;
//	int array_size=sizeof(array)/sizeof(array[0]);
//	sort(array,array+array_size);
//	cout<<"maximum Number is :"<<array[0]<<endl;
//	cout<<"Minimum Number is :"<<array[array_size-1];
//}
