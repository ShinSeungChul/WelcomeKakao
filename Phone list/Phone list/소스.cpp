#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool solution(vector<string> phone_book) {
	bool answer = true;
	sort(phone_book.begin(), phone_book.end());
	vector<string>::iterator iter;
	int size = phone_book.size();
	for (int i = 0; i<size - 1; i++) {
		if (phone_book[i + 1].find(phone_book[i]) != -1) {
			answer = false;
			break;
		}
	}
	return answer;
}