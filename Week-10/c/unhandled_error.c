// Week 10 - Activity 2: Ignoring file errors (on purpose, for analysis) (C version).
// WARNING: this program is EXPECTED to crash (segmentation fault).
// The file is missing and there is NO NULL check, so fscanf uses a NULL pointer.
#include <stdio.h>

int main() {
    FILE *myFile = fopen("missing_file.txt", "r");   // returns NULL

    char data[100];
    printf("Attempting to read from missing file...\n");
    fflush(stdout);   // make sure the message appears before the crash

    fscanf(myFile, "%s", data);   // crash: myFile is NULL

    printf("Data read: %s\n", data);   // never reached
    fclose(myFile);

    return 0;
}
