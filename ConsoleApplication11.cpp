// дз чертоусова for17
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int a, n, sum = 0;
	
	cin >> n >> a;
	
	for (int i = 1; i <= n; i++) {
		sum += 1 + pow(a, i);
		
	}
	cout << sum << " ";




}

