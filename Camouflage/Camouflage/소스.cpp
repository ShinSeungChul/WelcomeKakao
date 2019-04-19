#include <string>
#include <vector>
#include <utility>
#include <map>
#include <iostream>

using namespace std;

int solution(vector<vector<string>> clothes) {
	int answer = 1;
	int size = clothes.size();
	map<string, int>m;
	for (int i = 0; i<size; i++) {
		m[clothes[i][1]]++;
	}
	map<string, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++) {
		answer *= ((*iter).second + 1);
	}
	answer--;
	return answer;
}