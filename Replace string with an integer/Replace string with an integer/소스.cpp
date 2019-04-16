#include <string>
#include <vector>

using namespace std;

int solution(string s) {
	int answer = 0;
	int size = s.size();
	int temp = 1;
	for (int i = size - 1; i >= 0; i--) {
		if (s[i] == '+') {

		}
		else if (s[i] == '-') {
			answer -= (answer * 2);
		}
		else {
			answer += (s[i] - '0')*temp;
			temp *= 10;
		}
	}
	return answer;
}