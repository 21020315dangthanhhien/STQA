#include <bits/stdc++.h>
using namespace std;
int main(){
	int X;
	cout<<"Nhập kì hạn: "<<endl;
	cin>>X;
	if(X<1){
		cout<<"Không hợp lệ!";
	}else if(1<=X&&X<6){
		cout<<"Lãi suất của bạn là:4%/năm.";
	}else if(6<=X&&X<12){
		cout<<"Lãi suất của bạn là:5%/năm.";
	}else{
		cout<<"Lãi suất của bạn là:6%/năm.";
	}
	
}