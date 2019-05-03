#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B) {
	int answer = 0;
	int min;
	int temp = 0;
	int size = B.size();
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	for (int i = 0; i<size; i++) {
		if (B[i]>A[temp]) {
			answer++;
			temp++;
		}
	}
	return answer;
}