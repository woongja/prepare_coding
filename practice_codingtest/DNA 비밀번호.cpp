#include <iostream>
#include <string>
#include <vector>

using namespace std;

int checkArr[4];
int leastArr[4];
int factorial(int n);
int combination(int n,int m);

int main(){
    
    int S, P;
    cin >> S >> P;
    string A;
    cin >>A;
    int result =0;
    int num1=0;
    unsigned int num2=0;
    unsigned int num3=0;
    int num4=0;
    
    for(int i=0; i<4; i++){
        cin >> checkArr[i];
    }
    for(int i=0; i<A.length();i++){
        switch(A[i]){
            case 'A':
                leastArr[0]++;
                break;
            case 'C':
                leastArr[1]++;
                break;
            case 'G':
                leastArr[2]++;
                break;
            case 'T':
                leastArr[3]++;
                break;
        }
        
    } //A배열에 입력된 알파벳의 개수를 leastArr 배열에 넣어준다
    for(int i=0; i<4; i++){
        if(checkArr[i] > leastArr[i]){
            cout << result << endl;
            return 0;
        } // checkArr의 알파벳 개수가 A배열의 알파벳 개수보다 많으면 0을 출력한다.
        else{
            num1 += checkArr[i];
            leastArr[i] -= checkArr[i];
        } // 아니면 num1에 check의 알파벳 개수를 다 더해준다. 그 후 A배열의 알파벳 개수에 checkArr의 알파벳 개수를 빼준다.
    }
    num2 = factorial(num1); // check의 알파벳 개수의 펙토리얼을 구한다 펙토리얼을 구하는 이유는 알파벳을 나열시키고 줄세우는 방법의 수이다.
    
    for(int i=0; i<4; i++){
        num3 = num2 / factorial(checkArr[i]);
        num4 += leastArr[i];
    } // 알파벳이 같은것이 2개면 줄세우기 할때 똑같은 가짓수가 2개 생기기 때문에 check배열의 개수만큼 팩토리얼한 후 나눠준다. 그리고 num3에 A배열에 남아있는 알파벳의 개수를 다 더해준다.
    
    result = num3 * combination(num4,P-num1);
    //P-num1은 만들어야할 문자열의 개수에서 우리가 num1만큼은 줄세우기 했기 때문에 남아있는 자리수에 남아있는 애들로 줄세워야 한다. 만약 5명을 2자리에 앉히는 방법의 수는 5! / (5-3)!2! 를 해준다.
    
    for(int i=0; i<4; i++){
        if(P-num1 > 1){
            if(P-num1 > leastArr[i]) result = result / factorial(leastArr[i]);
            else result = result / factorial(P-num1);
        }
    }//나머지 애들도 줄세우는데 중복되는 애들이 생길 수 있기 때문에 남은 자리의 수가 A라는 애보다 수가 많으면 A!로 나누어 주고, 만약 같거나 적으면 자릿수만큼 ! 연산을 해준다.
    cout << result << endl;
    
    return 0;
}

int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n*factorial(n-1);
}

int combination(int n,int m)
{
    int result;
    return result = factorial(n) / (factorial(m)*factorial(n-m));
}
