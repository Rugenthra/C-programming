#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
	int a=0;
	cout<<a<<" ";
	int b=1;
	if(n>=1) cout<<b<<" ";
	for(int i=2;i<=n;i++){
	    int current=a+b;
	    cout<<current<<" ";
	    a=b;
	    b=current;
	}

}
