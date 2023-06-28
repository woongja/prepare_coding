
#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    vector<int> idx(N,0);
    vector<char> answer;
    
    stack<int> aStack;
    
    for(int i=0; i<N; i++){
        cin >> idx[i];
    }
    
    int num=1;
    bool result = true;
    
    for(int i=0; i<idx.size(); i++){
        if(idx[i]>=num){
            while(idx[i]>=num){
                aStack.push(num++);
                answer.push_back('+');
            }
            aStack.pop();
            answer.push_back('-');
        }
        else{
            if(aStack.top() > idx[i]){
                cout<< "NO";
                result = false;
                break;
            }
            else{
                aStack.pop();
                answer.push_back('-');
            }
        }
    }
    if(result){
        for(int i=0; i<answer.size(); i++){
            cout << answer[i] << endl;
        }
    }
}
