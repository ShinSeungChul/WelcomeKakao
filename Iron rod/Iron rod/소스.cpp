#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string arrangement) {
	int answer = 0;
	int temp = 1;
	int size = arrangement.size();
	for (int i = 1; i<size; i++) {
		if (arrangement[i] == '(') {
			temp++;
		}
		else if (arrangement[i] == ')') {
			temp--;
			if (arrangement[i - 1] == '(') {
				answer += temp;
			}
			else {
				answer++;
			}
		}
	}
	return answer;
}