#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> cut;
    vector<int> s;
    for(int i=0;i<commands.size();i++){
        for(int j=0;j<3;j++){
            cut.push_back(commands[i][j]);
        }
        for (int k=cut[0]-1;k<cut[1];k++){
            s.push_back(array[k]);
        }
        sort(s.begin(),s.end());
        answer.push_back(s[cut[2]-1]);
        s.clear();
        cut.clear();
        
    }
    return answer;
}
