#include <vector>
#include <utility>
#include <iostream>

using namespace std;

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
	int number_of_area = 0;
	int max_size_of_one_area = 0;
	int size;
	int x, y;
	vector<pair<int, int> > v;
	vector<pair<int, int> > v1;
	int dx[4] = { -1, 1, 0, 0 };
	int dy[4] = { 0, 0, -1, 1 };
	bool visit[101][101] = { false };

	for (int i = 0; i<m; i++) {
		for (int j = 0; j<n; j++) {
			if (picture[i][j] == 0) {
				visit[i][j] = true;
			}
			else {
				v.push_back(make_pair(i, j));
			}
		}
	}
	while (!v.empty()) {
		x = v.front().first;
		y = v.front().second;
		if (!visit[x][y]) {
			size = 1;
			number_of_area++;
			visit[x][y] = true;
			v1.push_back(make_pair(x, y));
		}
		v.erase(v.begin());
		while (!v1.empty()) {
			x = v1.front().first;
			y = v1.front().second;
			v1.erase(v1.begin());
			for (int i = 0; i<4; i++) {
				if (((x + dx[i]) >= 0) && ((y + dy[i]) >= 0) && ((x + dx[i])<m) && ((y + dy[i])<n)) {
					if (picture[x + dx[i]][y + dy[i]] == picture[x][y]) {
						if (!visit[x + dx[i]][y + dy[i]]) {
							size++;
							v1.push_back(make_pair(x + dx[i], y + dy[i]));
							visit[x + dx[i]][y + dy[i]] = true;
						}
					}
				}
			}
		}
		if (max_size_of_one_area < size)
			max_size_of_one_area = size;
	}
	vector<int> answer(2);
	answer[0] = number_of_area;
	answer[1] = max_size_of_one_area;
	return answer;
}