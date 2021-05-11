#include "Head.h"

//putchar(getchar())是否是有效表达式，它实现什么功能，getchar(putchar())是否有效
void P556_Question_1(void)
{
    //两者完全一样
    printf("Enter two words\n");
    char ch, gh;
    gh = putchar(getchar());
    ch = getchar();
    if (ch == '\n')
    {
        printf("asdas");
    }
}

//下面的语句分别完成什么任务
void P556_Question_2(void)
{
    /*
    a:  putchar('H');
    b:  putchar('\007');
    c:  putchar('\n');
    d:  putchar('\b');
*/

    //答：分别打印H 007的转义字符 回车 b的转义字符
}

//假设名为count的可执行程序，用于统计输入字符数，设计使用count程序统计essay文件中字符数的命令行
//并将结果保存在 essayct文件中
void P556_Question_3(void)
{
    //暂未学习文件指令
}

//下面哪一条有效
void P556_Question_4(void)
{
    //暂未学习文件指令
}

//EOF是什么
void P556_Question_5(void)
{
    //文件读到末尾返回的值，一般为-1
}

//对于给定的输出（ch是int类型，而且是缓冲输入），下面各程序段输出分别是
void P556_Question_6(void)
{
    /*
    a:  If you quit, i will. [enter]
    while((ch=getchar()!='i')
    putchar(ch);
    答：输出是 If you qui
*/

    /*
    b:  Harhar[enter]
    while((ch=getchar())!='\n')
    {
        putchar(ch++);
        putchar(++ch);
    }
    答：输出是 HJacrthjacrt
*/
}

//C如何处理不同计算机的不同文件和换行约定
void P556_Question_7(void)
{
    //答：映射为统一的流来处理
}

//在使用缓冲输入的系统中，把数值和字符混合会有什么潜在问题
void P556_Question_8(void)
{
    //答：getchar会跳过字符
}

//设计程序，统计读到文件结尾之前读取的字符数
void P558_Question_1(void)
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }
}

//表达不清
void P558_Quesiton_2(void)
{
}

//遇到EOF之前，报告输入中的大写和小写字母个数，假设大小写字母数值是连续的
void P558_Question_3(void)
{
    char ch;
    int alpha_da = 0;
    int alpha_xiao = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch > 'a' and ch < 'z')
        {
            alpha_xiao++;
        }
        else
        {
            alpha_da++;
        }
    }
    printf("The daxie is %d, xiaoxie is %d", alpha_da, alpha_xiao);
}

//遇到EOF之前，报告每个单词的字母数，不要把空白统计为单词的字母，实际上，标点符号也不要统计
void P558_Question_4(void)
{
    char ch;
    int quantity = 0;
    char gh;
    while ((ch = getchar()) != EOF)
    {
        if (ch > 'a' and ch < 'z' and ch > 'A' and ch < 'Z')
        {
            quantity++;
        }
        else
        {
            quantity = 0;
        }
        printf("The alpha is %d", quantity);
    }
}

//给定一个数，让用户猜，每次报告二分查找
void P558_Question_5(void)
{
    int puzzle = 0;
    int a = 50;
    int Max = 100;
    int Min = 0;
    int flag = 0;
    printf("Enter one Number\n");
    scanf("%d", &puzzle);
    while (a != puzzle)
    {
        printf("The number da or xiao?\n");
        printf("1 is xiao , 0 is da\n");
        scanf("%d", &flag);
        if (flag == 1)
        {
            Min = a;
            a = a + (Max - a) / 2;
        }
        else
        {
            Max = a;
            a = a - (a - Min) / 2;
        }
    }
}

//使该函数返回第一个非空白字符，并测试
void P558_Question_6(void)
{
    int ch;
    while ((ch = getchar()) == ' ')
    {
        continue;
    }
    printf("The alpha is %c", ch);
}

//修改第七章练习8，用字符代替数字标菜单选项，用q代替5作结束标记
void P559_Question_7(void)
{
#define time_jiaban 1.5
#define shuilv_qian300 0.15
#define shuilv_xu150 0.2
#define shuilv_yuxia 0.25

    float gongzi = 0;
    float shui = 0;
    int times = 0;
    char choice;
    float beilv = 0;
    printf("Enter your times weekly\n");
    scanf("%d", &times);
    if (times > 40)
    {
        times = times + (times - 40) * 1.5;
    }

    printf("Enter the number corresoponding to the desired pay rate or action\n");
    printf("(a)$8.75/h          (b)$9.33/h\n");
    printf("(c)$10.00/h         (d)$11.20/h\n");
    printf("(q)quit\n");
    choice = getchar();
    switch (choice)
    {
    case 'a':
        beilv = 8.75;
        break;
    case 'b':
        beilv = 9.33;
        break;
    case 'c':
        beilv = 10;
        break;
    case 'd':
        beilv = 11.2;
        break;
    case 'q':
        break;
    }
    gongzi = times * beilv;
    if (gongzi <= 300)
    {
        shui = gongzi * shuilv_qian300;
    }
    else if (gongzi > 300 && gongzi <= 40)
    {
        shui = 300 * shuilv_qian300 + (gongzi - 300) * shuilv_xu150;
    }
    else
    {
        shui = 300 * shuilv_qian300 + 150 * shuilv_xu150 + (gongzi - 450) * shuilv_yuxia;
    }
    printf("Your money is %.1f, Your shui is %.1f", gongzi, shui);
}

//编写程序，提供加减乘除的菜单，提示用户输入两个数字，然后执行用户选择的操作，程序使用float类型储存输入
//如果输入失败，允许再次输入，如果用户输入0作为第二个数字，应该提示重新输入
void P559_Quesiton_8(void)
{
    float a = 0;
    float b = 0;
    float c = 0;
    char chooce;
    do
    {
        chooce = getchar();
        printf("输入运算方式\n");
        printf("a:加法  b:减法\n");
        printf("c:乘法  d:除法\n");
        printf("q:退出\n");
    } while (chooce < 'a' and chooce > 'd');
    printf("输入运算数字\n");
    scanf("%f %f", &a, &b);
    switch (chooce)
    {
    case 'a':
        c = a + b;
        break;
    case 'b':
        c = a - b;
        break;
    case 'c':
        c = a * b;
        break;
    case 'd':
        if (b == 0)
        {
            do
            {
                printf("输入b的值\n");
                scanf("%f", &b);
            } while (b == 0);
        }
        c = a / b;
        break;
    case 'q':
        break;
    }
    printf("The value is %f", c);
}

int main(void)
{
    getchar();
    getchar();
    return 0;
}