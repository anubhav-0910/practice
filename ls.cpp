#include<bits/stdc++.h>
using namespace std;

int linear_search(vector<int>v,int x){
	for(int i=0;i<5;i++){
		if(v[i]==x) return i;
	}
return -1;
}
	
	
	
int main(){
vector<int>v={1,4,7,2,8};
int x;
cin>>x;
return linear_search(v,x);
}
