#include"../ch.h"
int main(){
    char s[25];
    memset(s,0,sizeof(s));
    strcpy(s,"hello word");
    printf("%s\n", s);
    return 0;
}