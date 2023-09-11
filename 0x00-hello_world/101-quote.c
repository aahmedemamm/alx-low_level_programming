#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
har *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = strlen(message);

if (write(2, message, len) != len) {
perror("write");
exit(1);
}

return 1;
}

