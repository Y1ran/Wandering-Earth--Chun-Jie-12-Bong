    /******************************
    *    文件：twelve_Spring.c   *
    *    许可：CN-2082-2         *
    *    作者：W0ng Y1R2n        *
    *    部门：PE-362，UG        *
    *    原产地: TI-352132李一一 *
    *    春节十二响:Spring 12    *
    *******************************
/** #env "planet_engine" - target engine
                -- 苏拉威西3号转向发动机**/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//#include <self_check_striker.c>
//#include <engine_start.c>
#include <unistd.h>

#ifndef CURVE_NATURAL
#define CURVE_NATURAL
#endif // CURVE_NATURAL

/*
int engine_init() {
    set_engine_number_mask(ENGINE_ALL);
    set_funeral_level(FUNERAL_FULL);

    ready_state = self_check_striker(checked_array_iterator_time, number_engine, temperature);
                //撞针自检程序
    if ready_state == true
        return engine_start(main);
    //允许误差10秒以内
    else if unix_time() < make_unix_time(2082，1，28，23，59，60 - 10))
        return ERR_ENGIN_ENV;
    else
        return  engine_check_init();
                //在编译之后和实际运行之前
}
int main(){
    set_curve（CURVE_NATURAL）; //自然曲线耗费燃料最少
    for(explicit i: range(0，12，1)){
        engine_start();
        wait_engine（ENGINE_STATE_CHAGNE）;
        sleep(2000); //发动机休眠

        engin_stop();
        wait_engine（ENGINE_STATE_CHAGNE）;//发动机冷却
        sleep(4000);  //这个时长在模拟器里听起来更像心跳
    }
    return 0 ;
}
int  final(){
    engine_ensure_shutdown（）;

}
**/
/***---------demo模拟测试程序------------ ***/

int main()
{	register int c;
    register int k;
c = 12;
k = 1;
printf("春节十二响启动程序\n");

//sleep(3);

	int i;
    for(i=1;i<101;i++)
    {
              printf("[");
              printf("程序加载进度>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>[\b\b\b%d%%]\r",i);
              fflush(stdout);
              usleep(10000);
            //usleep(1000*1000);

        if(i % 10 == 0){
            sleep(1);

        }
    }
    printf("\n");
    printf("程序加载完毕，发动机正在启动...\n");

    sleep(1);
        printf("硬件系统自检完成...\n");
            sleep(1);
            printf("撞针系统自检完成...\n");
                sleep(1);
                    printf("发动机正在启动...\n");
    sleep(1);


while(k <= 10){

    printf("行星转向发动机正在启动中..............%d/100\r",k * 10 );
    k += 1;

    sleep(1);
}

while( c > 0)
{
    Sleep(5);
    system("color 46");

    Sleep(100);
    system("color 04");

        c=c-1;
        Sleep(10);
        system("cls");
}
system("color 04");
int a; a=12;

while(a>=1){

    printf("%*s%s%*s",52,"","Biu!!!\n",0,"");
    a -= 1;
    Sleep(100);
}
int j = 12;

printf("%*s%s%*s",51,"","\\ ^^ /\n");

while(j >= 1)
{
    printf("%*s%s%*s",51,"","| ^^ |\n");
    j -= 1;
    Sleep(100);
}

//行星发动机形状
    printf("%*s%s%*s",51,"","/----\\\n");
    printf("%*s%s%*s",49,""," / \\  / \\ \n");
    Sleep(100);
    printf("%*s%s%*s",48,"","| -------- | \n");
    Sleep(100);
    printf("%*s%s%*s",45,"","/| ------------- |\\ \n");
    Sleep(100);
    printf("%*s%s%*s",43,"","__________________\n");
    Sleep(100);
    Sleep(1000);
int d;
d=12;
while(d>0)
{
    system("color 46");
    Sleep(100);

    system("color 04");
    d = d - 1;
    Sleep(10);
    }
return 0;

    }
