class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		if (n % 2 == 1)
			return false;
		stack<char> st;
		for (int i = 0; i < A.size(); i++) {
			if (A[i] == '(') {
				st.push(A[i]);
			}
			else if (A[i] = ')' && !st.empty()) {
				st.pop();
			}
			else {
				return false;
			}
		}
		if (st.empty())
			return true;
		return false;
	}
};


#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int b = 1;
	int num = 0;
	int N;
	cin >> N;
	while (num < N) {
		num = a + b;
		a = b;
		b = num;
	}
	if (num == N)
		cout << 0 << endl;
	else {
		cout << min(num - N, N - a) << endl;
	}
	return 0;
}

7月7日:


#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
bool sort(vector<string> v) {
	vector<string> tmp(v);
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); ++i) {
		if (tmp[i] != v[i])
			return false;
	}
	return true;
}

bool daxiao(vector<string> v) {
	int sz = v.size() - 1;
	int i = 1;
	while (sz--) {
		if (v[i].size() > v[i - 1].size()) {
			i++;
		}
		else {
			return false;
		}
	}
	return true;
}

int main() {
	vector<string> v;
	int num;
	cin >> num;
	v.resize(num);
	for (int i = 0; i < num; i++) {
		cin >> v[i];
	}
	if (v.size() < 2)
		cout << "both" << endl;
	else if (sort(v) && daxiao(v))
		cout << "both" << endl;
	else if (sort(v))
		cout << "lexicographically" << endl;
	else if (daxiao(v))
		cout << "lengths" << endl;
	else
		cout << "none" << endl;
	return 0;
}



#include <iostream>
using namespace std;
int main() {
	int A, B;
	cin >> A >> B;
	int a = A, b = B;
	//相减法求最大公约数
	while (A != B) {
		if (A > B) {
			A = A - B;
		}
		else
			B = B - A;
	}
	//辗转相除法求最大公约数
	/*int C = A%B;
	while(C!=0){
		A = B;
		B = C;
		C = A%B;
	}*/

	//输出最小公倍数
	cout << a * b / B << endl;
	return 0;
}
