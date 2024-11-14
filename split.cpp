#include<iostream>
using namespace std;
int main(){
	int num,dg1,dg2 ,dg3,dg4;
	int digit;
    cout<<"Enter four digit num"<<endl;
    cin>>num;
    dg1=num/1000;
    dg2=num/100%10;
    dg3=num/10%10;
    dg4= num%10;
     
	
	while(num!=0){
		digit= num%10;
		num= num/10;
		
	}
	cout<<"Enter first digit num="<<dg1<<endl;
     cout<<"Enter second digit num="<<dg2<<endl;
     cout<<"Enter third digit num="<<dg3<<endl;
     cout<<"Enter fourth digit num="<<dg4<<endl;
	
	
}
