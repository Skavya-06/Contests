#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int m,n;
	    cin>>m>>n;
	    int ans=0;
	    if(m>=n){
	        ans=m-n;
	    }
	    else{
	        ans=(n-m)%2;
	    }
	    cout<<ans<<endl;
	    t--;
	}

}
