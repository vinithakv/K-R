/* Count tabs, blanks and newlines */

#include<stdio.h>

int main() {
    double num_tabs, num_blanks, num_newlines;
    char c;

    num_tabs = num_blanks = num_newlines = 0;

    while((c = getchar())!= EOF){
        if(c == '\t')
            ++num_tabs;
        else if(c == ' ')
            ++num_blanks;
        else if(c == '\n')
            ++num_newlines;
    }
    printf("Number of tabs = %.0f\n"
            "Number of blanks = %.0f\n"
            "Number of new lines = %.0f\n",
            num_tabs, num_blanks, num_newlines);

    return 0;
    
}
