#include <iostream>
using namespace std;

int main() {
    int N, num; //N : 입력받는 수, num : 한자리씩 끊은 수
    int result=0;
    string input;

    cin >> N; 

    //N (1 ≤ N ≤ 100)
    if(N > 100 || N < 1) return -1;

    cin >> input;

    for(int i =0;i<N;i++){
        result += input.at(i) - '0';
    }

    cout << result << endl;
}