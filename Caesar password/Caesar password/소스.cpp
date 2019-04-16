#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
	string answer = "";
	int size = s.length();
	int temp;
	for (int i = 0; i<size; i++) {
		if (s[i] == ' ') {

		}
		else if ((s[i] >= 'A') && (s[i] <= 'Z')) {
			s[i] += n;
			if (s[i]>'Z')
				s[i] -= 26;
		}
		else {
			s[i] -= 26;
			s[i] += n;
			if (s[i]<'a')
				s[i] += 26;
		}
	}
	answer = s;
	return answer;
}