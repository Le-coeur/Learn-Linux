#include"3-1.h"
int main(){
    FILE *fp;
    int fd;
    fd=open("./1.txt", O_RDWR);
    fp=fdopen(fd, "w+");
    fprintf(fp, "test data%s\n", "hello word");
    fclose(fp);

    return 0;
}
