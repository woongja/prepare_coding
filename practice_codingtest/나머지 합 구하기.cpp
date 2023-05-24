#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<long> S(N,0);
    vector<long> C(M,0);
    long answer =0;
    cin >> S[0];
    
    for(int i=1; i<N; i++){
        int temp = 0;
        cin >> temp;
        S[i] = S[i-1] + temp;
    }// 들어온 배열의 합배열 생성
    for(int i=0; i<N; i++){
        int remainder = S[i] % M;
        
        if(remainder ==0){
            answer++;
        }
        C[remainder]++;
    }// 합배열의 나머지가 0일 때 정답을 1씩 올리고, C배열에는 나머지가 같은 인덱스의 개수를 세준다.
    for(int i=0; i<M; i++){
        if(C[i]>1){
            answer = answer + (C[i]*(C[i]-1) /2);
        }
    } // 나머지가 같은 인덱스중 2개를 뽑는 경우의 수 구하기.
    cout << answer<< endl;
}
