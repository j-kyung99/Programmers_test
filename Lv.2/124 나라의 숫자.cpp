#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    while(n>0){
      if((n-1)%3 == 1){
        answer = '2' + answer;
      }
      else if((n-1)%3 == 2){
        answer = '4' + answer;
      }
      else {
        answer = '1' + answer;
      }
        n = (n-1)/3;
    }
    return answer;
}
