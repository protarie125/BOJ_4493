#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	while (0 < (t--)) {
		int n;
		cin >> n;

		auto p1 = int{ 0 };
		auto p2 = int{ 0 };
		while (0 < (n--)) {
			string a, b;
			cin >> a >> b;

			if ("R" == a) {
				if ("S" == b) {
					++p1;
				}
				else if ("P" == b) {
					++p2;
				}
			}
			else if ("S" == a) {
				if ("P" == b) {
					++p1;
				}
				else if ("R" == b) {
					++p2;
				}
			}
			else if ("P" == a) {
				if ("R" == b) {
					++p1;
				}
				else if ("S" == b) {
					++p2;
				}
			}
		}

		if (p2 < p1) {
			cout << "Player 1\n";
		}
		else if (p1 < p2) {
			cout << "Player 2\n";
		}
		else {
			cout << "TIE\n";
		}
	}

	return 0;
}