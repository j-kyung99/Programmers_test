#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> a(n, 1);
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    for(int i=0;i<lost.size();i++){
        int num = lost[i]-1;
        a[num] = 0;
    }
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    for(int i=0;i<reserve.size();i++){
        int num = reserve[i]-1;
        if(a[num] == 0) a[num] = 1;
        else a[num] = 2;
    }
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i-1] == 0 && a[i] == 2){
            a[i-1] = 1;
            a[i] = 1;
        }
        else if(a[i-1] == 2 && a[i] == 0){
            a[i-1] = 1;
            a[i] = 1;
        }
    }
    for(int i=0;i<n;i++){
        cout << a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i] >= 1) answer++;
    }
    return answer;
}
