#include<iostream>
using namespace std;

int linear_search(int arr[],int x){
	for(int i=0;i<5;i++){
		if(arr[i]==x) return i;
	}
return -1;
}
	
	
	
int main(){
int arr[5]={1,4,7,2,8};
return linear_search(arr,8);
}
