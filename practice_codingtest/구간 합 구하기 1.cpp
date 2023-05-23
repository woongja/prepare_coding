#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int N=0,M=0;
    int S[10001] = {};
    cin >> N >> M;
    for(int i=1; i<=N; i++){
        int temp;
        cin >> temp;
        S[i] = S[i-1] + temp;
    }
    
    for(int i=0; i<M; i++){
        int start, end;
        cin >> start >> end;
        cout << S[end] - S[start-1] << endl;
    }
    
    
}
