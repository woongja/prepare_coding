#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    
    int N;
    cin >> N;
    string str;
    cin >> str;
    int sum=0;
    
    for(int i=0; i<str.length(); i++){
        
        sum += str[i] - '0';  // str[i]를 정수로 계산해 sum에 누적하기
        
    }
    cout << sum << endl;
    
}
