#include<iostream>
using namespace std;
int n,f[1009];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)//forѭ��,������i��1�Լӵ�n,��ѭ��n��
		cin>>f[i];
	int ans=f[1];
	for(int i=2;i<=n;i++)//forѭ��,������i��2�Լӵ�n,��ѭ��n-1��
		if(f[i]>ans)
			ans=f[i];
	//cout<<ans<<endl;
	int sf[1009];
	for(int j=2;j<n;j++){
		if(j!=i)
			sf[j]=f[i];
	}
	return 0;
}


