#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(int arc, char *argp[])
{

int fd_in = open(argp[1], O_RDONLY);
if(fd_in == -1)
{
    perror("Could not open file\n");
    return -1;
}
char cur_sym;
int read_count;
read_count = read(fd_in, &cur_sym,1);
if(read_count == -1)
{
    perror("Error");
    return -1;
}

int written_count;
written_count=write(1,&cur_sym,1);
if(written_count==0)
{
    perror("write error");
    return -1;
}

close(fd_in);

}