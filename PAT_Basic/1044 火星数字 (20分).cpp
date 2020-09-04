#include<bits/stdc++.h>
using namespace std;
string s;
string eToMLow[13] ={"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string eToMHigh[13] = {"##","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
int len = 0;

void func1(int t){
	if(t/13) cout<<eToMHigh[t/13];
	if((t/13)&&(t%13)) cout<<" ";
	if(t%13||t==0) cout<<eToMLow[t%13];
}
void func2(){
	int t1 = 0, t2 = 0;
	string s1 = s.substr(0,3),s2;
	if(len > 4) s2 =s.substr(4,3);
	for(int j = 1; j < 13; j++){
		if(s1 == eToMLow[j]||s2 == eToMLow[j]) t2 = j;
		if(s1 == eToMHigh[j]) t1 = j;
	}
	cout<<t1*13 +t2;
}
int main(){
	int n;
	cin>>n;
	getchar();
	for(int i = 0; i < n ;i ++){
		getline(cin,s);
		len = s.length();
		if(s[0]>='0'&&s[0]<='9'){
			func1(stoi(s));
		}else{
			func2();
		}
		cout<<endl;
	}
	return 0;
}
