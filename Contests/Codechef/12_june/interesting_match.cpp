#include <iostream>
using namespace std;

int main() {
	int x,y;
	cin>>x>>y;
	int ans=abs(x-y);
	if(ans<=2){
	    cout<<"Interesting";
	}
	else{
	    cout<<"Boring";
	}

}