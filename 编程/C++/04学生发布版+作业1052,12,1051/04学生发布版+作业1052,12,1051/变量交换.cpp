#include<iostream> //ʹ����������������� 
using namespace std; //ʹ�ñ�׼�����ֿռ� 
int main() {
	int a,b,x;  //����������a��b��x 
	cin>>a>>b;	//�������a��b 
	cout<<a<<" "<<b<<endl;  //�������a b 
	x=a; //��a�����ֵ���ŵ�x���� 
	a=b; //������b�����ֵ���ŵ�a����ȥ 
	b=x; //��x�����ֵ���Ѿ�������a�����ֵ�ˣ� �ָ�ֵ��b 
	cout<<a<<" "<<b<<endl; //�������a b 
	return 0;//���������� 
}


