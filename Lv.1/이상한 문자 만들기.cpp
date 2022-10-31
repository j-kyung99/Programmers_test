#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    answer = s;
    int temp = 0;
    for(int i=0;i<s.length();i++){
        if(answer[i] == ' ') {
            temp = 0;
            continue;
        }
        if(temp % 2 == 0){
            if(answer[i] >= 97) answer[i] = answer[i] - 32;            
        }
        else {
            if(answer[i] <= 90) answer[i] = answer[i] + 32;
        }
        temp++;
    }

    return answer;
}
