#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	deque<int>q;
	bool check = false;
	while (n--) {
		string s; int a;
		cin >> s;
		if (s == "toFront") {
			if (!check) {
				scanf("%d", &a);
				q.push_front(a);
			}
			else {
				scanf("%d", &a);
				q.push_back(a);
			}
		}
		else if (s == "push_back") {
			if (!check) {
				scanf("%d", &a);
				q.push_back(a);
			}
			else {
				scanf("%d", &a);
				q.push_front(a);
			}
		}
		else if (s == "front") {
			if (!check) {
				if (!q.empty()) {
					printf("%d\n", q.front());
					q.pop_front();
				}
				else {
					printf("No job for Ada?\n");
				}
			}
			else {
				if (!q.empty()) {
					printf("%d\n", q.back());
					q.pop_back();
				}
				else {
					printf("No job for Ada?\n");
				}
			}
		}
		else if (s == "back") {
			if (!check) {
				if (!q.empty()) {
					printf("%d\n", q.back());
					q.pop_back();
				}
				else {
					printf("No job for Ada?\n");
				}
			}
			else {
				if (!q.empty()) {
					printf("%d\n", q.front());
					q.pop_front();
				}
				else {
					printf("No job for Ada?\n");
				}
			}
		}
		else {
			check = !check;
		}
	}

}

