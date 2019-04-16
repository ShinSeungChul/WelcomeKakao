#include <vector>

using namespace std;

long long solution(int N) {
	long long answer = 0;
	int temp;
	bool arr[10000001] = { false };
	for (int i = 2; i <= 50000000; i++) {
		temp = i * 2;
		while (temp <= 10000000) {
			arr[temp] = true;
			temp += i;
		}
	}
	for (int i = 2; i <= N; i++) {
		if (!arr[i])
			answer += i;
	}
	return answer;
}