#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    int count =1;
    int start_point = 1;
    int end_point = 1;
    int sum = 1;
    
    while(end_point != N){
        if(sum ==N){
            count++;
            end_point++;
            sum += end_point;
        }
        else if(sum > N){
            sum -= start_point;
            start_point++;
        }
        else{
            end_point++;
            sum+= end_point;
        }
    }
    cout << count << endl;
}
