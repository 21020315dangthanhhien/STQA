#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b, c;
	cout<<"Enter total score: "<<endl;	
	cin>>a;
	cout<<"Enter language knowledge score: "<<endl;
	cin>>b;
	cout<<"Enter reading comprehension score: "<<endl;
	cin>>c;
	if(a>=90){
		if(b<38||c<19){
		cout<<"Failed";
	} else {
	cout<<"Pass";
}
	}else {
		cout<<"Failed";
		} 	
}