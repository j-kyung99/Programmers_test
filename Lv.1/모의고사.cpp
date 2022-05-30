#include <string>
#include <vector>

using namespace std;

    int one[5] = {1,2,3,4,5};
    int two[8] = {2,1,2,3,2,4,2,5};
    int three[10] = {3,3,1,1,2,2,4,4,5,5};

int max(int a, int b){
        return a < b ? b : a;
    }

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> count(3);
    int m = 0;


    for(int i=0;i<answers.size();i++){
        if(one[i%5] == answers[i]) count[0]++;
        if(two[i%8] == answers[i]) count[1]++;
        if(three[i%10] == answers[i]) count[2]++;
    }

    m = max(max(count[0],count[1]),count[2]);
    for(int i=0;i<3;i++){
        if(count[i] == m) answer.push_back(i+1);
    }
    return answer;
}
