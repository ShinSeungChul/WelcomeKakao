#include <string>
#include <vector>
#include <iostream>

using namespace std;

#define MOD 1000000007

int solution(int m, int n, vector<vector<int>> puddles) {
	int answer = 0;
	int map[101][101] = { 0 };
	int dp[101][101] = { 0 };
	int size = puddles.size();
	dp[0][0] = 1;
	for (int i = 0; i<size; i++) {
		map[puddles[i][1] - 1][puddles[i][0] - 1] = 1;
	}
	for (int i = 1; i<n; i++) {
		if (!map[i][0])
			dp[i][0] = dp[i - 1][0];
	}
	for (int i = 1; i<m; i++) {
		if (!map[0][i])
			dp[0][i] = dp[0][i - 1];
	}
	for (int i = 1; i<n; i++) {
		for (int j = 1; j<m; j++) {
			if (!map[i][j]) {
				dp[i][j] = (dp[i - 1][j] % MOD + dp[i][j - 1] % MOD) % MOD;
			}
		}
	}
	answer = dp[n - 1][m - 1];
	return answer;
}