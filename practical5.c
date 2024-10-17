#include <stdio.h>

int main(void) {
    int c, blanks, tabs, newlines;
    blanks = tabs = newlines = 0;

    printf("Enter text (end with *):\n");
    while ((c = getchar()) != '*') {
        if (c == ' ')
            blanks++;
        if (c == '\t')
            tabs++;
        if (c == '\n')
            newlines++;
    }

    printf("Blanks: %d\n", blanks);
    printf("Tabs: %d\n", tabs);
    printf("Newlines: %d\n", newlines);

    return 0;
}
