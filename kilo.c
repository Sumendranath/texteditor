#include<unistd.h>
int main() {
    char c;
    /*After entering the string, add 'q' at the end of the line to quit */
    while (read(STDIN_FILENO, &c, 1) == 1 && c != 'q');
    return 0;
}
