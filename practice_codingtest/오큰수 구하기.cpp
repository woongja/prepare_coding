#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> A(N,0);
    vector<int> result(N,0);
    
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    
    stack<int> aStack;
    aStack.push(0); // 스택에 0 push
    
    for(int i=1; i<N;i++){
        //스택이 비지 않았고, a[0] < a[1] , a[1] < a[2] ...
        while(!aStack.empty() && A[aStack.top()]<A[i]){
            //result 배열에 스택 top 값인 0 위치에 배열 a의 값을 넣어준다.
            result[aStack.top()] = A[i];
            aStack.pop();
        }

        aStack.push(i); // 1을 넣어서 그 다음
    }
    //맨 마지막 값은 값을 비교할 수 없기 때문에 -1을 출력해야한다.
    //또 값이 들어있으면 a[0] < a[1]일 때의 조건을 수행 하지 못한 것이기 때문에 -1을 출력해야한다.
    //한개가 아니라 여러 인덱스의 값이 존재할 수 있기 때문에 if가 아닌 while로 해주어야한다.
    while(!aStack.empty()){
        result[aStack.top()] = -1;
        aStack.pop();
    }
    
    for(int i=0; i<N; i++){
        cout << result[i] << endl;
    }
}
