#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    stack<int> a;
    int answer = -1;
    a.push(s[0]);
    for(int i=1;i<s.size();i++){
        if(!a.empty() &&  a.top() == s[i]) {
            a.pop();
        }
        else a.push(s[i]);
    }
    if(a.empty()) answer = 1;
    else answer = 0;
    
    return answer;
}
