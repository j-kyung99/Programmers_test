#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    int a = n;
    while(a > 0){
        cout << a%3;
        v.push_back(a%3);
        a = a/3;
    }
    int size = v.size();
    int j = 1;
    for(int i=0;i<size;i++){
        answer += j*v.back();
        v.pop_back();
        j *= 3;
    }
    return answer;
}
