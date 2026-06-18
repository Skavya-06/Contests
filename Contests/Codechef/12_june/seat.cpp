#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    int sum=0;
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	        sum = sum + arr[j];
	    }
	    int count =0;
	    int m = n*(n-1)/2;
	    for(int a=0;a<n-1;a++){
	        for(int b=a+1;b<n;b++){
	            if((sum/2 + ((arr[a]+arr[b])/2))>k ){
	                count++;
	            }
	            
	        }
	    }
	    cout<<count<<endl;
	}
}