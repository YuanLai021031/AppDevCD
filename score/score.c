#include "score.h"

// usually for a large project, the main() only outlines the
// general steps of this program

int main(void) {
	int scores[MAX], marks[MAX];   // local variables
	int statistics[6] = {0};    // initialize counters

	input_scores(scores);
	evaluation(scores, marks);
	classification(marks, statistics);
	output_results(marks, statistics);
}