#include <iostream>
#include <vector>
using namespace std;

int solution(int n, vector<int> stations, int w)
{
	int answer = 0;
	int cur = 1;
	int wifi = w * 2 + 1;
	int size = stations.size();
	for (int i = 0; i<size; i++) {
		if (cur < (stations[i] - w)) {
			answer += (((stations[i] - w) - cur) / wifi);
			if ((((stations[i] - w) - cur) % wifi))
				answer++;
		}
		cur = stations[i] + w + 1;
	}
	if (cur <= n) {
		answer += ((n - cur + 1) / wifi);
		if ((n - cur + 1) % wifi)
			answer++;
	}
	return answer;
}