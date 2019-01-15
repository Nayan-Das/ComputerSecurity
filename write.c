#include <unistd.h>
#include <fcntl.h> 
int main(void)
{
    int filedesc = open("testfile.txt", O_WRONLY | O_APPEND);
    write(filedesc, "Hello Nayan\n", 12);
    write(1, "Hello Nayan\n", 12); 
    return 0;
}
