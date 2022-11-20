#include<bits/stdc++.h>
using namespace std;

int linear_search(vector<int>v,int x){
	for(int i=0;i<v.size();i++){
		if(v[i]==x) return i;
	}
return -1;
}
	
	
	
int main(){
int n;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
v[i]=i+5;
}
int x;
cin>>x;
return linear_search(v,x);
}
