#include "Head.h"

//实际参数和形式参数的区别是什么
void P636_Question_1(void)
{
    //答：实际参数是引用，形式参数是值拷贝
}

//写出下面的函数头
void P636_Question_2(void)
{
    /*
    a: about()接受一个int类型参数，打印若干（参数指定数目）个0
    答：void about(int n,int j)

    b: gear()接受两个int类型的参数，返回int类型的值
    答：int gear(int a,int b)

    c: guess()不接受参数，返回一个int类型的值
    答：int guess()

    d:  stuff_it()接受一个double类型的值和double类型变量的地址，把第一个值储存在指定位置
    答：stuff_it(double a, double *b)
*/
}

////写出下面的函数头
void P636_Question_3(void)
{
    /*
    a: n_to_char()接受一个int类型的参数，返回一个char类型的值
    答：char n_to_char(int a)

    b: digit接受一个double类型的参数和一个int类型的参数，返回一个int类型的值
    答：int digit(double a,int b)

    c: which()接受两个可储存double类型的地址，返回一个double类型的地址
    答：double *which(dobule *a, double* b)

    d: random不接受参数，返回int类型的值
    答：int random()
*/
}

//设计函数，返回两数之和
int P636_Question_4(int a, int b)
{
    int c = a + b;
    return c;
}

//把上一题改为返回两个double之和
double P636_Question_5(double a, double b)
{
    double c = a + b;
    return c;
}

//设计一个名为alter的函数，接受两个int类型的x，y，把他们的值分别修改为两者之和以及两者之差
void P636_Question_6(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *x + *y;
    *x = temp;
    *y = *x - *y;
}

//下面的函数定义是否正确
void P637_Question_7(void)
{
    /*
  void salami(num)  
  {
      int num ,count;
      for (count = 1 ; count <= num ; count ++)
      printf(" O salami mio!\n");
  }
  答：num未赋值，错误
*/
}

//编写一个函数，返回3个整数参数中的最大值
int P637_Question_8(int x, int y, int z)
{
    int q;
    q = x > y ? x : y;
    q = q > z ? q : z;
    return q;
}

//给定下面的输出
/*
    Please choose one of the following
    1) copy files   2) move files
    3) remove files 4) quit
    Enter the number of your device
*/
//编写函数，提示用户进行选择
//接受int类型的上限和下限，从用户输入超限，再次打印菜单提示用户输入，如果输入的整数在范围内，则返回给主调函数，否则返回4
//编写最小程序，不需要实现菜单功能，只需显示并获取有效响应
int P637_Question_9(int x, int y)
{
    printf("Please choose one of the following\n");
    printf("1) copy files           2) move files\n");
    printf("3) remove files         4) quit\n");
    int c;
    scanf("%d", &c);
    if (c > x && c < y)
    {
        return c;
    }
    else
    {
        return 4;
    }
}

//设计函数min(x,y)，返回两个double类型值的较小值
double P639_Question_1(double x, double y)
{
    double z = x > y ? y : x;
    return z;
}

//设计函数chline(ch,i,j),打印指定的字符j行i列
void P639_Question_2(char ch, int i, int j)
{
    for (int q = 0; q < j; q++)
    {
        for (int k = 0; k < i; k++)
        {
            printf("%c", ch);
        }
    }
}

//编写函数，接受3个参数，一个字符和两个整数，字符参数是待打印的字符，第一个整数指定一行中打印字符的次数，第二个整数指定打印指定字符的行数
void P639_Question_3(char ch, int score, int hang)
{
    for (int q = 0; q < hang; q++)
    {
        for (int k = 0; k < score; k++)
        {
            printf("%c", ch);
        }
    }
}

//两数的调和平均数这么算，先得到两数倒数，然后计算两倒数平均值，然后取计算结果的倒数，编写函数，接受两个double，返回调和平均数
double P639_Question_4(double a, double b)
{
    a = 1 / a;
    b = 1 / b;
    double c = (a + b) / 2;
    c = 1 / c;
    return c;
}

//编写并测试一个函数large_of()，该函数把两个double类型变量的值替换为较大的值，例如larger_of(x,y)会把x和y中较大的值赋给两个变量
void P639_Question_5(double *a, double *b)
{
    double c = *a > *b ? *a : *b;
    *a = *b = c;
}

//编写函数，以三个double变量地址作为参数，从小到大依次放入三个数
void P639_Question_6(double *a, double *b, double *c)
{
    double temp;
    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b < *c)
    {
        return;
    }
    if (*b > *c)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

//从标准输入中读取字符，直到文件结尾，报告每个字符是否是字母，如果是，还要报告在字母表的位置，以字符为参数，如果不是字符则范围-1
int P639_Question_7(char ch)
{
    char temp = 'a';
    int i = 0;
    if (ch > 'a' and ch < 'z' and ch > 'A' and ch < "Z")
    {
        while (temp != ch)
        {
            i++;
            temp++;
        }
        return i;
    }
    return EOF;
}

//改写第六章程序清单6.20，power()函数返回一个double类型数的正整数次幂，使其能计算负幂，另外0的任何次幂都为0，任何书的0次幂为1，0的0此幂为未定义，所以为1，使用循环
double P639_Question_8(double a, int b)
{
    if (b == 0)
    {
        if (a == 0)
        {
            printf("未定义\n");
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if (a == 0)
    {
        return 0;
    }
    else
    {
        if (b > 0)
        {
            for (int k = 0; k < b; k++)
            {
                a = a * a;
            }
            return a;
        }
        else if (b < 0)
        {
            for (int k = 0; b < k; b++)
            {
                a = a * a;
            }
            a = 1 / a;
            return a;
        }
    }
}

//使用递归程序改写上个练习
double P639_Question_9(double a, int b)
{
    if (b == 0)
    {
        if (a == 0)
        {
            printf("未定义\n");
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if (a == 0)
    {
        return 0;
    }
    else
    {
        if (b > 0)
        {
            a = a * a;
            P639_Question_9(a, b--);
        }
        return a;
        if (b < 0)
        {
            a = a * a;
            P639_Question_9(a, b++);
            a = 1 / a;
            return a;
        }
    }
}

//编写程序，to_base_n()函数接受两个2~10范围内的参数，然后以第二个参数为指定进制打印第1个参数的值
void P640_Question_10(int a, int b)
{
    if (a > 2 and a < 10)
    {
        printf("输入错误\n");
        return;
    }
    int j[10];
    for (int i = 0; i < b; i++)
    {
        j[i] = a % b;
        a /= 3;
    }
    for (int q = 9; q > 0; q--)
    {
        printf("%d", j[q]);
    }
}

//编写斐波那契，用循环代替递归
void P640_Question_11(void)
{
    int n = 100;
    double an= (1/sqrt(5)) * (pow((1+sqrt(5)/2),n) - pow((1-sqrt(5)/2),n));
}

int main(void)
{
    return 0;
}