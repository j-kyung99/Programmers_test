#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int count = 0;
    int zero = 0;
    int good,bad;
    for(int i=0;i<6;i++){
        if(lottos[i] == 0) {
            zero++;
            continue;
        }
        for(int j=0;j<6;j++){
            if(lottos[i] == win_nums[j]) count++;
        }
    }
    switch(count){
        case 6: bad=1;
            break;
        case 5: bad=2;
            break;
        case 4: bad=3;
            break;
        case 3: bad=4;
            break;
        case 2: bad=5;
            break;
        default: bad=6;
            break;
    }
    good = bad-zero;
    if(good<1){
        good = 1;
    }
    vector<int> answer;
    answer.push_back(good);
    answer.push_back(bad);
    return answer;
}
