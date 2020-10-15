#include"3-1.h"

int main(){
    FILE *fp;
    fp = fopen("./1.txt", "w");
    printf("file fd = %d\n", fp->_fileno);
    fclose(fp);
    return 0;


}

