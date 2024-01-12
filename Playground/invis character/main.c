#include <unistd.h>

_Bool printable(char ch) {
    return ch == '\n' || (ch >= ' ' && ch <= '~');
}

int main() {
    char buf[2048];
    ssize_t n;
    while ((n = read(STDIN_FILENO, buf, sizeof buf)) > 0) {
        char *pos = buf, *end = buf + n;
        while (pos < end) {
            if (!printable(*pos)) {
                write(STDOUT_FILENO, buf, end - pos);
                return 1;
            }
            pos++;
        }
        write(STDOUT_FILENO, buf, n);
    }
    return 0;
}

// cat data.txt | ./app | invisc
//echo $?