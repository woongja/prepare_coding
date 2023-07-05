#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

struct compare{
    bool operator()(int o1, int o2){
        int first_abs = abs(o1);
        int second_abs = abs(o2);
        if(first_abs == second_abs){
            return o1 > o2; //절댓값의 값이 같으면 음수 우선 정렬
        }
        else{
            return first_abs > second_abs; //절댓값을 기준으로 정렬
        }
    }
};

int main(){
    //우선순위 queue 선언 방식 : <자료형, 구현체, 비교 함수명>
    priority_queue<int, vector<int>, compare> ABS_queue;
    
    int N;
    cin >> N;
    
    for(int i=0; i< N; i++){
        int request;
        cin >> request;
        if(request ==0){
            if(ABS_queue.empty()) cout << "0" << endl; //queue가 비어있으면 0 출력
            else{
                //x가 0이면 우선순위로 정렬된 queue에 맨 위에값 출력 -> 절대값이 가장 작은 값
                cout << ABS_queue.top() << endl;
                //출력시킨후 queue에서 지워주기
                ABS_queue.pop();
            }
        }
        else{
            ABS_queue.push(request); //x가 0이 아니면 queue에 push하기
        }
        
    }
}
