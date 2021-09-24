#include <stdio.h>


void menu(){
    printf("************************************\n");
    printf("** 1. add  2. sub  3. mul  4. div***\n");
    printf("************************************\n");
}

int Add(int x, int y){
    return x + y;
}
int Sub(int x, int y){
    return x - y;
}
int Mul(int x, int y){
    return x * y;
}
int Div(int x, int y){
    return x / y;
}

int main()
{
    int input = 0;
    int x = 0;
    int y = 0;
    // pfarr是一个函数指针数组;
    int (*pfarr[])(int,int) = {0, Add, Sub, Mul, Div};

    do {
        menu();
        printf("please choice> \n");
        scanf("%d",&input);

        if (input >= 1 && input <=5){
            printf("please give two numbers: ");
            scanf("%d%d", &x, &y);
            int ret = pfarr[input](x, y);
            printf("%d\n", ret);
        }else if (input == 0){
            printf("exit\n");
        }else {
            printf("error\n");
        }
    } while(input);
    return 0;
}