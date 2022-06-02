#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    sort(nums.begin(),nums.end());
    int answer = 0;
    int count = 1;
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i] < nums[i+1]) count++;
    }
    if(count > nums.size()/2) answer = nums.size()/2;
    else answer = count;
    return answer;
}
