#include<iostream>
using namespace std;
int f[1000];
int main(){
	int n=10;
//	cin>>n;
	for(int i=0;i<n;i++)//forѭ��,������i��0�Լӵ�n-1,��ѭ��n��
		cin>>f[i];
	int sm=f[0];
	for(int i=1;i<n;i++)//forѭ��,������i��1�Լӵ�n-1,��ѭ��n-1��
		if(f[i]<sm)
			sm=f[i];
	for(int i=0;i<n;i++)//forѭ��,������i��0�Լӵ�n-1,��ѭ��n��
		if(f[i]!=sm)
			cout<<f[i]<<" "; 
	return 0;
} 


