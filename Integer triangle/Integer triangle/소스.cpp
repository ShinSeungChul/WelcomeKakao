#include <string>
#include <vector>
#include <iostream>

using namespace std;

int max(int a, int b) {
	return a>b ? a : b;
}

int solution(vector<vector<int>> triangle) {
	int answer = 0;
	int dp[2][501] = { 0 };
	int temp, temp1;
	int size = triangle.size();
	dp[0][0] = triangle[0][0];
	for (int i = 1; i<size; i++) {
		temp = i % 2;
		temp1 = (i + 1) % 2;
		dp[temp][0] = triangle[i][0] + dp[temp1][0];
		for (int j = 1; j<i; j++) {
			dp[temp][j] = max(dp[temp1][j], dp[temp1][j - 1]) + triangle[i][j];
		}
		dp[temp][i] = triangle[i][i] + dp[temp1][i - 1];
	}
	for (int i = 0; i<size; i++) {
		if (answer < dp[temp][i])
			answer = dp[temp][i];
	}
	return answer;
}