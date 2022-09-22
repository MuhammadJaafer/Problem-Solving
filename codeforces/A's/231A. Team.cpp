#include <iostream>
using namespace std;
int main()
{
	int n,sum=0,subsum=0;
	cin >> n;
	while (n--) {
		for (int i = 0; i < 3; i++) {
			int num;
			cin >> num;
			subsum += num;
		}
		if (subsum >= 2) {
			sum++;
			subsum = 0;
		}
		else subsum = 0;
	}
	cout << sum;
	return 0;
}