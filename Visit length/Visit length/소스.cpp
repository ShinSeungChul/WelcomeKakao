#include <string>
#include <map>
using namespace std;

int solution(string dirs)
{
	int answer = 0;
	map<pair<double, double>, int> m;
	double cur_x = 0, cur_y = 0;
	int size = dirs.size();
	for (int i = 0; i<size; i++) {
		if (dirs[i] == 'U') {
			cur_y++;
			if (cur_y>5)
				cur_y--;
			else
				m[make_pair(cur_x, cur_y - 0.5)] = 1;
		}
		else if (dirs[i] == 'D') {
			cur_y--;
			if (cur_y<-5)
				cur_y++;
			else
				m[make_pair(cur_x, cur_y + 0.5)] = 1;
		}
		else if (dirs[i] == 'R') {
			cur_x++;
			if (cur_x>5)
				cur_x--;
			else
				m[make_pair(cur_x - 0.5, cur_y)] = 1;
		}
		else {
			cur_x--;
			if (cur_x<-5)
				cur_x++;
			m[make_pair(cur_x + 0.5, cur_y)] = 1;
		}
	}
	answer = m.size();
	return answer;
}