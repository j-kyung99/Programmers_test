#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<int> v;
    v.push_back(1); // 1월1일 31
    v.push_back(32); // 2월1일 29
    v.push_back(61); // 3월1일 31
    v.push_back(92); // 4월1일 30
    v.push_back(122); // 5월1일 31
    v.push_back(153); // 6월1일 30
    v.push_back(183); // 7월1일 31
    v.push_back(214); // 8월1일 31
    v.push_back(245); // 9월1일 30
    v.push_back(275); // 10월1일 31
    v.push_back(306); // 11월1일 30
    v.push_back(336); // 12월1일 31
    int day = 0;
    day = v[a-1] + b-1;
    cout << day;
    if(day%7 == 1) answer = "FRI";
    else if(day%7 == 2) answer = "SAT";
    else if(day%7 == 3) answer = "SUN";
    else if(day%7 == 4) answer = "MON";
    else if(day%7 == 5) answer = "TUE";
    else if(day%7 == 6) answer = "WED";
    else answer = "THU";
    return answer;
}
