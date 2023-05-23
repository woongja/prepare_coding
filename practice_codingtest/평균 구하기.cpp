#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    int M[1000];
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> M[i];
    }
    int max=0;
    int sum = 0;
    for(int i=0; i<N; i++){
        if(M[i] > max){
            max = M[i];
        }
        sum = sum + M[i];
    }
    double result = sum * 100.0 / max / N;
    
    cout << result << endl;
}
