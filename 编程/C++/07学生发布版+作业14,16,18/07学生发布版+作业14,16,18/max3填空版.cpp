#include<iostream>
using namespace std;
int main(){
	int a,b,c;//����a,b,cΪ�����ͱ���
	cin>>a>>b>>c; //���������ͱ���a�������ͱ���b�������ͱ���c 
	if(a>=b&&a>=c)//��������ͱ���a���ڵ���b ,�Ҵ��ڵ���c 
		cout<<a;//���a 
	else if(b>=a&&b>=c)//��������ͱ���b���ڵ���a ,�Ҵ��ڵ���c 
		cout<<b;//���b
	else if(c>=a&&c>=b)//��������ͱ���c���ڵ���a ,�Ҵ��ڵ���b
		cout<<c;//���c 
	return 0;	
} 


