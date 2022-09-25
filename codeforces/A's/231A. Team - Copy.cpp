#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,x=0;
	string c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c;
		if(c[1]=='+')x++;
			else x--;
	}
	cout<<x;
	return 0;

}