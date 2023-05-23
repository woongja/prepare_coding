#include <iostream>
#include <string>

using namespace std;

int main(){
    /* 숫자형 ( int , long , double , float ) */
    
    string sNum = "1234";
    int inum = stoi(sNum);
    long lnum = stoi(sNum);
    double dnum = stoi(sNum);
    float fnum = stoi(sNum);
    
    /* 숫자형 ( int , long , double , float ) */
    
    int inum2 = 1234;
    long lnum2 = 1234;
    double dnum2 = 1234.4;
    float fnum2 = 1234.45f;
    
    string intToString = to_string(inum2);
    string longToString = to_string(lnum2);
    string doubleToString = to_string(dnum2);
    string floatToString = to_string(fnum2);
}
