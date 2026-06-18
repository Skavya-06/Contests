#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t!=0){
        int players,card;
        cin>>players>>card;
        int answer=0;
        vector <int> which_player(players,0);
        
        while(card>0){
            for(int i=0;i<players && card>0;i++){
                which_player[i]=which_player[i]+card;
                card--;
            }
            for (int i=players-1;i>=0 && card>0 ;i--){
                which_player[i]=which_player[i]+card;
                card--;
            }
            
        }    
        
        for(int i=0;i<players;i++){
            if(answer<which_player[i]){
                answer=which_player[i];
            }
        }
        cout<<answer<<endl;
        t--;
            
    }
}
    



