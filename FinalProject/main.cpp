#include "appdev.h"

int main(void) {
	rock r;
	printf("Application Developers Rock!\n");
	printf("Enter rocker's name: ");
	scanf_s("%s", r.rname, (unsigned) _countof(r.rname));
	r.max = rand() % 50 + 51;
	r.min = rand() % 50 + 1;
	send_data(r);
	printf("Rockn'Roll\n");
	return 0;
}