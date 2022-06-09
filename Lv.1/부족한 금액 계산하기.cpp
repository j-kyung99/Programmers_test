#include <iostream>

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long sum = money;
    for(long long i=1;i<=count;i++){
        sum = sum - (price * i);
    }
    if(sum < 0) answer = -sum;
    else answer = 0;
    return answer;
}
