#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> A;               // Vector<자료형> 변수 이름; 형태로 선언
    
    A.push_back(1);              // 마지막에 1 추가
    A.insert(A.begin(),7);       // 맨 앞에 7을 삽입
    A.insert(A.begin()+2,10);    // index 2 위치에 10 삽입
    
    A[4] = -5;                   // index 4의 값을 -5로 변경
    
    A.pop_back();                // 마지막 값 삭제
    A.erase(A.begin() + 3);      // index 3 위치에 해당하는 값 삭제
    A.clear();                   // 모든 값 삭제
    
    A.size();                    // 데이터의 개수
    A.front();                   // 처음 값
    A.back();                    // 마지막 값
    A[3];                        // index 3 위치에 해당하는 값
    A.at(5);                     // index 5 위치에 해당하는 값
    A.begin();                   // 첫 번째 데이터에 위치
    A.end();                     // 마지막 데이터 다음 위치
    
}
