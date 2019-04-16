#include <string>
#include <vector>

using namespace std;

string solution(int n) {
	string answer = "";
	bool temp = false;
	for (int i = 0; i<n; i++) {
		if (temp) {
			answer += "¹Ú";
			temp = false;
		}
		else {
			answer += "¼ö";
			temp = true;
		}
	}
	return answer;
}