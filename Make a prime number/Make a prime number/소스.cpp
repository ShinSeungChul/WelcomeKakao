#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
	int answer = 0;
	bool prime_num[3000] = { true, true };
	int size = nums.size();
	for (int i = 2; i<3000; i++) {
		if (!prime_num[i]) {
			for (int j = i * 2; j<3000; j += i) {
				prime_num[j] = true;
			}
		}
	}
	for (int i = 0; i<size - 2; i++) {
		for (int j = i + 1; j<size - 1; j++) {
			for (int k = j + 1; k<size; k++) {
				if (!prime_num[nums[i] + nums[j] + nums[k]])
					answer++;
			}
		}
	}
	return answer;
}