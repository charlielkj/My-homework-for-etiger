#include<iostream>
#define N 10009
using namespace std;
int n,x,d[N];
int main(){
	cin>>n;
	for(int i=0;i<n;i++)//forѭ��,������i��0�Լӵ�n-1,��ѭ��n��
	cin>>d[i];
	int cnt=0;
	for(int i=0;i<n;i++)//forѭ��,������i��0�Լӵ�n-1,��ѭ��n��
		if(x>d[i])
			cnt++;
	cout<<cnt<<endl;
	return 0;
} 


