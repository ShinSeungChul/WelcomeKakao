#include <string>
#include <vector>

using namespace std;

long long solution(int N) {
	long long answer = 0;
	long long dp[81] = { 0, 1 };
	for (int i = 2; i<81; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	answer = dp[N] * 4 + dp[N - 1] * 2;
	return answer;
}