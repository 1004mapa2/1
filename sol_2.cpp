#include <iostream>

using namespace std;
int A, B, T;
int sum = 0;
int main() {
	scanf("%d", &T);
	for (int i = 1; i <= T; i++) {
		scanf("%d %d", &A, &B);
		sum = A + B;
		printf("Case #%d: %d\n", i, sum);
	}
}