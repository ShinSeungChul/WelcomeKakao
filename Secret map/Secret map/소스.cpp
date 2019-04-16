#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<string> answer;
	string s = "";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((arr1[i] >> (n - 1 - j) & 1) || (arr2[i] >> (n - 1 - j) & 1)) {
				s += "#";
			}
			else {
				s += " ";
			}
		}
		answer.push_back(s);
		s = "";
	}
	return answer;
}