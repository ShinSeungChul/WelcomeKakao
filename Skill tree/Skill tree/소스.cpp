#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
	int answer = 0;
	int size = skill_trees.size();
	int temp;
	int seq[26] = { 0 };
	int size1;
	bool can;
	size1 = skill.size();
	for (int i = 0; i<size1; i++) {
		seq[skill[i] - 'A'] = i + 1;
	}
	for (int i = 0; i<size; i++) {
		size1 = skill_trees[i].size();
		temp = 1;
		can = true;
		for (int j = 0; j<size1; j++) {
			if (seq[skill_trees[i][j] - 'A']) {
				if (temp != seq[skill_trees[i][j] - 'A']) {
					can = false;
					break;
				}
				temp++;
			}
		}
		if (!can)
			continue;
		answer++;
	}
	return answer;
}