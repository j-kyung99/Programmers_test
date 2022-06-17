#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int a = s.size()/2;
    cout << a;
    if(s.size()%2 == 1){
        answer = s[a];
    }
    else{
        answer.push_back(s[a-1]);
        answer.push_back(s[a]);
    }
    return answer;
}
