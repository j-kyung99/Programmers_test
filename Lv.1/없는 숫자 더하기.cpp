#include <string>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> s;
    for(int i=0;i<moves.size();i++){
        int a = moves[i]-1;
        for(int j=0;j<board.size();j++){
            if(board[j][a] != 0){
                if(s.empty() == 0 && s.top() == board[j][a]){
                    s.pop();
                    answer += 2;
                }
                else{
                    s.push(board[j][a]);
                }
                board[j][a] = 0;
                break;
            }
        }
    }
    return answer;
}
