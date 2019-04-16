#include <string>
#include <vector>
#include<iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
	vector<int> answer;
	int max = 0;
	int n1[5] = { 1, 2, 3, 4, 5 };
	int n2[8] = { 2, 1, 2, 3, 2, 4, 2, 5 };
	int n3[10] = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
	int arr[4] = { 0 };
	int size = answers.size();
	for (int i = 0; i<size; i++) {
		if (answers[i] == n1[i % 5])
			arr[1]++;
		if (answers[i] == n2[i % 8])
			arr[2]++;
		if (answers[i] == n3[i % 10])
			arr[3]++;
	}
	for (int i = 1; i<4; i++) {
		if (max<arr[i])
			max = arr[i];
	}
	for (int i = 1; i<4; i++) {
		if (max == arr[i])
			answer.push_back(i);
	}

	return answer;
}