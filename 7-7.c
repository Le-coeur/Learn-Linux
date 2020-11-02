#include"ch.h"
static void set_env_string(void){
    char test_env[]="test_env=test";
    if(putenv(test_env!=0)){
        printf("failed!\n");
    }
    printf("1.the test_env = %s\n", getenv(test_env));
}
static void show_env_string(void){
    //char test_env[]="test_env=test";
    printf("2.the test_env = %s\n", getenv(test_env));//保证第二个不为NULL
}
int main(){
    set_env_string();
    show_env_string();
    return 0;
}