#include <string>
#include <iostream>
using namespace std;

    int a, b = 0;

bool solution(string s)
{
    bool answer = true;

    for(int i=0;i<s.size();i++){
        cout << s[i];
        if(s[i] == 'p' || s[i] == 'P'){
            a++;
        }
        else if(s[i] == 'y' || s[i] == 'Y'){
            b++;
        }
    }
    cout << a << ' ' << b << ' ';
    if(a == b){
        answer = true;
    }
    else answer = false;
    return answer;
}
