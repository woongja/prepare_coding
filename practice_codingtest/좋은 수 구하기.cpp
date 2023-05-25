#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    vector<int>A(N,0);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    
    sort(A.begin(), A.end());
    
    int count = 0;
    
    for(int K=0; K<N; K++){
        int start_point = 0;
        int end_point = N-1;
        while(start_point < end_point){
            if(A[start_point] + A[end_point] == A[K]){
                if(start_point != K && end_point != K){
                    count++;
                    break;
                }
                else if(start_point == K){
                    start_point++;
                }
                else if(end_point == K){
                    end_point--;
                }
            }
            else if(A[start_point] + A[end_point] < A[K]){
                start_point++;
            }
            else{
                end_point--;
            }
        }
    }
    
    cout << count << endl;
    
}
