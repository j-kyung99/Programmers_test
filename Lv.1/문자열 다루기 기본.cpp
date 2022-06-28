#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(string s) {
    bool answer = true;
    int count = 0;
    if(s.size() == 4 || s.size() == 6){
        for(int i=0;i<s.size();i++){
            if(s[i]-'0' >= 0 && s[i]-'0' <= 9 ) count++;
        }
        cout << count;
        if(count == s.size()) answer = true;
        else answer = false;
    }
    else answer = false;
    return answer;
}
