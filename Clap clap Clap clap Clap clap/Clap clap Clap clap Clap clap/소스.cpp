#include <string>
#include <vector>

using namespace std;

string solution(int n) {
	string answer = "";
	bool temp = false;
	for (int i = 0; i<n; i++) {
		if (temp) {
			answer += "��";
			temp = false;
		}
		else {
			answer += "��";
			temp = true;
		}
	}
	return answer;
}