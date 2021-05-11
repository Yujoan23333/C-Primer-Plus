#include "Head.h"

//假设所有变量的类型都是int，下列各项变量的值是多少
void P303_Question_1(void)
{
    /*
    x = (2 + 3) * 6;         x = 30
    x = (12 +6) / 2 * 3;     x = 27
    y = x = (2 + 3)/4;       x = y = 20
    y = 3 + 2 * (x = 7/2);   x = 3, y = 9
    */
}

//假设所有变量类型都是int，下列各项变量值是多少
void P303_Question_2(void)
{
    /*
    x = (int)3.8 + 3.3;     x = 6
    x = (2 + 3) * 10.5;     x = 52 
    x = 3 / 5 * 22.0;       x = 0
    x = 22.0 * 3 / 5;       x = 13
    */
}

//对下列各表达式求值
void P303_Question_3(void)
{
    /*
    30.0 / 4.0 * 5.0;      37.5
    30.0 / (4.0 * 5.0);    1.5 
    30 / 4 * 5 ;           35 
    30 * 5 / 4;            37 
    30 / 4.0 * 5;          37 
    30 / 4 * 5.0;          35
    */
}

//程序改错
void P304_Question_4(void)
{
    /*
    int i = 1;
    float n;
    printf("Watch out! Here come a bunch of fractions!\n");
    while (i < 30)
    {
        n = 1 / i;
    }
    printf(" %f",n);
    printf("That's all, floks!\n");
    */
    // 循环将无限
}

//找不同
//Unfinish
void P304_Question_5(void)
{
}

//下列程序将打印出什么内容
void P305_Question_6(void)
{
#define FORMAT "%S! C is cool!\n"
    int num = 10;
    printf(FORMAT, FORMAT);
    printf("%d\n", ++num);
    printf("%d", num++);
    printf("%d", num--);
    printf("%d", num);
    // 11 11 12 11
}

//下列程序将打印出什么内容
void P306_Question_7(void)
{
    char c1, c2;
    int diff;
    float num;
    c1 = 'S';
    c2 = 'O';
    diff = c1 - c2;
    num = diff;
    printf("%c%c%c:%d %3.2f\n", c1, c2, c1, diff, num);
    // S O S : 4 4.00
}

//下列程序将打印出什么内容
void P307_Question_8(void)
{
#define TEN 10
    int n = 0;
    while (n++ < TEN)
        printf("%5d", n);
    printf("\n");
    // 1 2 3 4 5 6 7 8 9 10
}

//修改上一个程序，使之可以打印a~g
void P307_Question_9(void)
{
#define Ten 7
    int n = 0;
    char temp = 'a' - 1;
    while (n++ < Ten)
        printf("%c ", temp + n);
}

//下列程序打印什么
void P307_Question_10(void)
{
    /*    
    int x = 0;
    while (++x <3)
    print("%4d",x);
    // 1 2 
*/

    /*
    int x = 100 ;
    while (x++ <103)
    printf("%4d\n",x);
    printf("%4d\n",x);
    // 101 101 102 102 103 103
*/

    /*
    char ch = 's';
    while (ch < 'w')
    {
        printf("%c", ch);
        ch ++;
    }
    printf(%c\n",ch);
    // s t u v w 
*/
}

//下列程序打印什么
void P308_Question_11(void)
{
#define MESG "COMPUTER BYTES DOG"
    int n = 0;
    while (n < 5)
        printf("%s\n", MESG);
    n++;
    printf("That's all.\n");
    // COMPUTER BYTES DOG  无限循环
}

//分别编写一条语句，完成下列任务
void P309_Question_12(void)
{
    //使变量x的值增加10                x+=10
    //使变量x的值增加1                 x++
    //将a与b之和的两倍赋给c            c = 2(a+b)
    //将a与b的两倍之和赋给c            c = a+2b
}

//分别编写一条语句，完成下列任务
void P309_Question_13(void)
{
    //使变量x的值减少1                      x--
    //将n除以k的余数赋给m                   m=n%k
    //q除以b减去a，并将结果赋给p             p = q/b-a
    //a与b之和除以c与d的乘积，并将结果赋给x   x = (a+b)/cd
}

//编写程序，把分钟表示的时间转换为小时和分钟表示，用#define创建为60的符号常量，通过while循环让用户重复输入值
//直到用户输入小于或等于0的值才结束循环
void P310_Question_1(void)
{
#define jinzhi 60
    int fen = 0;
    int shi = 0;
    int temp_fen = 0;
    while (1)
    {
        printf("Enter the time\n");
        scanf("%d", &temp_fen);
        if (temp_fen > 0)
        {
            fen = temp_fen % jinzhi;
            shi = temp_fen / jinzhi;
            printf("The time is %d shi and %d fen\n", shi, fen);
        }
        else
        {
            break;
        }
    }
}

//编写程序，输入整数，打印从该数到比该数大10的所有整数。要求打印值之间用一个空格、制表符或换行符分开
void P310_Question_2(void)
{
    int Temp = 0;
    printf("Enter the Number\n");
    scanf("%d", &Temp);
    int i = -1;
    while (i++ < 10)
    {
        printf("%d ", Temp + i);
    }
}

//编写程序，输入天数，将其转换为周数和天数，以下列格式显示：18 days are 2 weeks，4 days
//通过while循环让用户重复输入天数，当用户输入非正值时，结束循环
void P310_Question_3(void)
{
#define day 7
    int zhou = 0;
    int tian = 0;
    int temp_tian = 0;
    while (1)
    {
        printf("Enter the time\n");
        scanf("%d", &temp_tian);
        if (temp_tian > 0)
        {
            tian = temp_tian % day;
            zhou = temp_tian / day;
            printf("%d days are %d weeks, %d days\n", temp_tian, zhou, tian);
        }
        else
        {
            break;
        }
    }
}

//编写程序，提示输入身高（单位：厘米），并分别以厘米和英寸为单位显示该值，允许有小数部分。程序应让用户重复输入身高，直到非正值
/*
Enter a height in centimeters: 182
182.0 cm = 5 feet , 11.7 inches
Enter a height in centimeter (<=0 to quit): 168.7
168.0 cm = 5 feet , 6.4 inches
Enter a height in centimeter (<=0 to quit): 0
bye
*/
void P310_Question_4(void)
{
#define jinzhi_cun 2.54
#define jinzhi_chi 12

    float yingcun = 0;
    int yingchi = 0;
    float temp_cm = 0;
    int flag = 0;
    while (1)
    {
        if (flag == 0)
            printf("Enter a height in centimeters: ");
        else
            printf("Enter a height in centimeters (<=0 to quit) : ");
        scanf("%f", &temp_cm);
        if (temp_cm > 0)
        {
            yingcun = temp_cm / jinzhi_cun;
            yingchi = yingcun / jinzhi_chi;
            yingcun = yingcun - yingchi * 12;
            printf("\n%.1f cm = %d feet, %.1f inches\n", temp_cm, yingchi, yingcun);
            flag = 1;
        }
        else
        {
            printf("bye\n");
            break;
        }
    }
}

//修改程序addemup.c（程序清单5.13），你可以认为其是计算20天里赚多少钱的程序，（第一天$1,第二天$2,……）
//修改程序，使其按用户输入的数进行计算（即用读入的一个变量来代替20）
//Unfinish
void P311_Question_5(void)
{
}

//修改上一个程序，使其计算整数的平方和（第一天$1,第二天$4,……）
//Unfinish
void P311_Question_6(void)
{
}

//编写程序，提示输入一个double类型的数，并打印该数的立方值，main函数要把用户输入的值传递给该函数
//为了模块化、本实例在内部取值
void P311_Question_7(void)
{
    double temp = 0;
    printf("Enter the temp Number\n");
    scanf("%lf", &temp);
    temp = temp * temp * temp;
    printf("The Value Is %f", temp);
}

//编写程序，显示求模运算的结果，把用户输入的第一个整数作为求模运算符的第二个运算对象，该数在运算过程中保持不变。
//用户后面输入的数是第1个运算对象。当用户输入非正值，程序结束
/*
This program computes moduli.
Enter an integer to serve as the second operand: 256
Now enter the first operand: 438
438 % 256 is 182
Enter next number for first operand (<= 0 to quit): 1234567
1234567 % 256 is 135
Enter next number for first operand (<= 0 to quit): 0
Done
*/
void P311_Question_8(void)
{
    int value_one = 0;
    int value_two = 0;
    int value = 0;
    int flag = 0;
    while (1)
    {
        if (flag == 0)
        {
            flag = 1;
            printf("This program computes moduli.\n");
            printf("Enter an integer to serve as the second operand: ");
            scanf("%d", &value_two);

            printf("Now enter the first operand: ");
            scanf("%d", &value_one);
        }
        else
        {
            printf("Enter next number for first operand (<= 0 to quit): ");
            scanf("%d", &value_one);
        }

        if (value_one > 0)
        {
            value = value_one % value_two;
            printf("%d %% %d is %d\n", value_one, value_two, value);
        }
        else
        {
            printf("Done\n");
            break;
        }
    }
}

//编写程序，要求输入华氏温度，程序读取double类型作为温度值，该函数计算摄氏温度和开氏温度，并以小数点后面两位数字的精度显示三种温度，
//要使用不同温标，下面是公式
//摄氏温度=5.0/9.0*(华氏温度-32.0)
//开氏温度=摄氏温度+273.16
//用const创建温度转换的变量，使用循环让用户重复输入，当用户输入q或其他非数字时，循环结束，
//scanf函数返回读取数据的数量，所以数字则返回1，读取q则不返回1
void P311_Question_9(void)
{
    double Huashi = 0;
    double Sheshi = 0;
    double Kaishi = 0;
    const double a = 5.0;
    const double b = 9.0;
    const double c = 32.0;
    const double d = 273.16;
    int temp = 0;
    while (1)
    {
        printf("Enter the tempreture of HuaShi\n");
        temp = scanf("%lf", &Huashi);
        if (temp == 1)
        {
            Sheshi = a / b * (Huashi - c);
            Kaishi = Sheshi + d;
            printf("The %.2f is %.2f and %.2f\n", Huashi, Sheshi, Kaishi);
        }
        else
        {
            break;
        }
    }
}

int main(void)
{
    P311_Question_9();
    getchar();
    getchar();
    return 0;
}