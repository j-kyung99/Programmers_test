#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int x = 2;
    while(1){
        if(n % x == 1){
            answer = x;
            break;
        }
        else{
            x++;
        }
    }
    return answer;
}
