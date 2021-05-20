#include "score.h"

// define the function input_scores

void input_scores(int s[]) {
	// get user's input using a sentinel-controlled loop
	int i, input=0;
	printf("Enter scores, -1 to end:\n");
	for (i = 0; i < MAX && input != -1; i++) {
		scanf("%d", &input);
		s[i] = input;
	}
	printf("%d scores are given\n", i-1);
}