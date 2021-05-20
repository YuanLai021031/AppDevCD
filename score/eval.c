#include "score.h"

// score 0-100 is evaluated to a mark 0-5,
// <30  0
// <45  1
// <60  2
// <75  3
// <90  4
// >=90 5
void evaluation(int s[], int m[]) {
	int i;
	for (i = 0; i < MAX && s[i] != -1; i++) {
		if (s[i] < 30) m[i] = 0;
		else if (s[i] < 45)m[i] = 1;
		else if (s[i] < 60)m[i] = 2;
		else if (s[i] < 75)m[i] = 3;
		else if (s[i] < 90)m[i] = 4;
		else m[i] = 5;
	}
	printf("%d scores are evaluated\n", i);
	m[i] = -1;  // adding sentinel to mark array
}