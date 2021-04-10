#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {

	char str[20] = "Rizky Khapidsyah";

	if (strstr(str, "Rizky")) {
		printf("\n String contains Rizky");
	} else {
		printf("\n String doesn't contain Rizky");
	}
	
	_getch();
	return 0;
}