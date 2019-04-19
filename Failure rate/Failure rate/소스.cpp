#include <string>
#include <vector>
#include <iostream>
#include <utility>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
	vector<int> answer;
	vector<pair<int, double>> v;
	int clear[503] = { 0 };
	double temp[503] = { 0 };
	int size = stages.size();
	int cur;
	for (int i = 0; i<size; i++) {
		cur = stages[i];
		for (int i = 1; i <= cur; i++) {
			clear[i]++;
			temp[i]++;
			if (i == cur)
				clear[i]--;
		}
	}
	for (int i = 1; i <= N; i++) {
		if (!temp[i]) {
		}
		else {
			temp[i] = temp[i] / clear[i];
		}
	}
	answer.push_back(502);
	temp[502] = -1;
	for (int i = 1; i <= N; i++) {
		size = answer.size();
		for (int j = 0; j<size; j++) {
			if (temp[i] > temp[answer[j]]) {
				answer.insert(answer.begin() + j, i);
				break;
			}
		}
	}
	answer.pop_back();
	return answer;
}