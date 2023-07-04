#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int card_game(queue<int> card);


int main(){
    int N;
    cin >> N;
    queue<int> card;
    int result=0;
    
    for(int i=1; i<=N; i++){
        card.push(i);
    }
    result = card_game(card);
    
    cout << result;
}

int card_game(queue<int> card){
    
    card.pop();
    card.push(card.front());
    card.pop();
    
    return card.size() == 1 ? card.front() : card_game(card);
}
