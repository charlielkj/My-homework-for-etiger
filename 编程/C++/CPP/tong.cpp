#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<iomanip>
using namespace std;
int main(){
    int cnt=0; 
	for(int i=0;i<1000000;i++){
	//srand((unsigned)time(NULL));
    i = rand()%400;
	if(i>362 && i<372){
		int j=1;
		double temperature = (double)i / 10;
		cout<<"DAY"<<" "<<j<<":";
		cout<<fixed<<setprecision(1)<<temperature<<" "<<endl;
		cnt++; 
		j++;
		}
	if(cnt>=10)
		break; 
	}
	
	
	/*for(int i=0;i<=9;i++){//forѭ��,������i��0������9,��ѭ��i+1��
		cin>>s[i];
	}
	for(int i=9;i>=0;i--){//forѭ��,������i��9�Լ���0,��ѭ��i+1��
		cout<<s[i]<<endl;
	}*/
	return 0;
} 
//forѭ��,������o,��ѭ��b+1��





	
