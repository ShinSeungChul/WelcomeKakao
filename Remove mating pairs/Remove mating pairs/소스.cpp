#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
	int answer = 0;
	stack<char> stack;
	int size = s.size();
	for (int i = 0; i<size; i++) {
		if (stack.empty()) {
			stack.push(s[i]);
		}
		else {
			if (stack.top() == s[i]) {
				stack.pop();
			}
			else {
				stack.push(s[i]);
			}
		}
	}
	if (stack.empty()) {
		answer = 1;
	}
	else {
		answer = 0;
	}
	return answer;
}