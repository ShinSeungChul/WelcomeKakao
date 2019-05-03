#include <iostream>
#include <vector>
using namespace std;

int max(int a, int b) {
	return a>b ? a : b;
}

int solution(vector<int> sticker)
{
	int answer = 0;
	int size = sticker.size();
	int dp[2][100001] = { 0 };
	dp[0][0] = dp[0][1] = dp[0][2] = sticker[0];
	dp[1][1] = sticker[1];
	dp[1][2] = max(sticker[1], sticker[2]);
	for (int i = 3; i<size; i++) {
		dp[0][i] = max(dp[0][i - 1], sticker[i - 1] + dp[0][i - 2]);
		dp[1][i] = max(dp[1][i - 1], sticker[i] + dp[1][i - 2]);
	}
	answer = max(dp[0][size - 1], dp[1][size - 1]);
	return answer;
}