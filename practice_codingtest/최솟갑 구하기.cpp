#include <iostream>
#include <deque>

using namespace std;

typedef pair<int,int> Node;

int main(){
    
    int N,L;
    cin >> N >> L;
    
    deque<Node> dq;
    
    for(int i = 0; i< N; i++){
        
        int num;
        cin >> num;
        
        while(dq.size() && dq.back().first > num){
            dq.pop_back();
        }//현재 수보다 큰 값이 들어오면 dq에서 제거한다.
        
        dq.push_back(Node(num,i));
        // dq 뒤에 num과 인덱스 번호를 같이 넣어준다.
        
        if(dq.front().second <= i-L){
            dq.pop_front();
        }// 인덱스의 번호가 i-L 보다 작으면 맨 앞의 데이터를 꺼내준다.
        
        cout << dq.front().first << ' ';
    }
    
}
