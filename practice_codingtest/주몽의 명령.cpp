#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<int> A(N,0);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    
    int count =0;
    int j = N-1;
    for(int i=0; i<j; i++){
        
        if(A[i] + A[j] < M){
            continue;
        }
        else if(A[i] + A[j] > M){
            j--;
        }
        else{
            count++;
            i++;
            j--;
        }
    }
    cout << count << endl;
}
