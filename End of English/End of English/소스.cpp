#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
	vector<int> answer;
	map<string, int> m;
	int size = words.size();
	int temp;
	m[words[0]] = 1;
	for (int i = 1; i<size; i++) {
		if (words[i][0] != words[i - 1][words[i - 1].size() - 1]) {
			answer.push_back((i%n) + 1);
			answer.push_back(i / n + 1);
			break;
		}
		temp = m.size();
		m[words[i]] = 1;
		if (temp == m.size()) {
			answer.push_back((i%n) + 1);
			answer.push_back(i / n + 1);
			break;
		}
	}
	if (answer.empty()) {
		answer.push_back(0);
		answer.push_back(0);
	}
	return answer;
}