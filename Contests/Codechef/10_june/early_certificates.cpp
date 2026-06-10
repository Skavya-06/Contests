// https://www.codechef.com/START242D/problems/EARLYWIN


#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int n,m;
	    cin>>n>>m;
	    string a,b;
	    cin>>a>>b;
	    int mini;
	    string answer="";
	    if(n<m){
	        mini=n;
	    }
	    else{
	        mini=m;
	    }
	    for (int i=0;i<mini;i++){
	        if(a[i]==b[i]){
	            answer=answer+a[i];
	        }
	        else{
	            break;
	        }
	    }
	    cout<<answer<<endl;
	    t--;
	}

}
