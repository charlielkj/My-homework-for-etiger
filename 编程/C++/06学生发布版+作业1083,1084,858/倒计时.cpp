#include<iostream>
#include<ctime> 
using namespace std;
void SLEEP(int x){ //��ʱx���� 
	clock_t now=clock(); 
	while(clock()-now<x); 
} 
int main(){
	cout<<"��ʼ����ʱ"<<endl; 
	int i=10; 
	while(i){
		cout<<i<<endl;
		SLEEP(1000); //��ʱ1��
		i--;
	}
	cout<<"�������Ȥ��"<<endl;	
	return 0;
}



