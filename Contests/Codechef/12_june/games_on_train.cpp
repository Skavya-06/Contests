#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int h[n];
        for(int i=0;i<n;i++){
            cin>>h[i];
        }
        sort(h,h+n);
        int new_height=h[n-1]+1;

        int k=new_height-h[0];
        cout<<k<<endl;
        t--;
    }
}


// क्या ख़याल है आपका
