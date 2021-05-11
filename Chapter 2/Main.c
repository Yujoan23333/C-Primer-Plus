#include "Head.h"

//C语言的基本模块是什么
void P103_Question_1(void)
{
    // 答：
    // C语言的基本模块是函数
}

//什么是语法错误，写出例子
void P103_Question_2(void)
{
    // 答：
    // int A+2=5
}

//什么是语义错误，写出例子
void P103_Question_3(void)
{
    // 答：
    // 类似循环次数忘了加一
}

//Indiana Sloth编写了下列程序，请评定
int P103_Question_4(void)
{
    /*
    int s;
    s = 56;
    print(There are s weeks in a year);
    return 0;
    */
    //* 答：改为:
    int s = 56;
    printf("There are s weeks in a year");
    return 0;
}

//假设下面四个列子都是完整程序的一部分，请写出输出结果
void P103_Question_5(void)
{
    //a:
    printf("Baa Baa Black Sleep.");
    printf("Have you any wool?\n");
    //*答：输出“Baa Baa Black Sleep.Have you any wool?”

    //b:
    printf("Begone!\nO creature of lard!\n");
    //*答：输出“Begone!
    //*        O creature of lard!”

    //c:
    printf("What?\nNo/n fish?\n");
    //*答：输出“What
    //*        No/n fish?”

    //d:
    int num;
    num = 2;
    printf("%d+%d=%d", num, num, num + num);
    //*答：输出“2+2=4”
}

//在Main、int、function、char、=中，哪些是C语言的关键字
void P104_Question_6(void)
{
    //* 答：char、int
}

//如何以下面的格式输出变量words和lines的值（这里，3020和350代表两个变量的值）
//There were 3020 words and 350 lines
void P104_Question_7(void)
{
    //* 答：printf("There were %d words and %d lines",words,lines);
}

//执行每行后，程序状态
void P104_Question_8(void)
{
    int a, b;
    a = 5; //a=5
    b = 2; //b=2
    b = a; //b=5
    a = b; //a=5
    printf("%d %d\n", b, a);
}

//执行每行后，程序状态
void P105_Question_9(void)
{
    int x, y;
    x = 10;    //x=10;
    y = 5;     //y=5;
    y = x + y; //y=15;
    x = x * y; //x=150;
    printf("%d  %d\n", x, y);
}

//编写程序，调用一次printf函数，把姓名打印在第一行，再调用一次printf函数，把你的姓名分别打印在两行
//再调用两次printf函数，把你的姓名打印在一行
void P106_Question_1(void)
{
    printf("Yu Hang Jian\n");
    printf("Yu\nHang Jian\n");
    printf("Yu");
    printf(" Hang Jian");
}

//编写程序，打印姓名地址
void P106_Question_2(void)
{
    printf("My name is Yu HangJian, My Address is Center of Rich\n");
}

//编写程序，把年龄转换成天数，并显示这两个值，不考虑闰年
void P106_Question_3(void)
{
    int i_day;
    int i_age;
    printf("Enter your age，please\n");
    scanf("%d", &i_age);
    i_day = i_age * 365;
    pritnf("The day about your age is %d\n", i_day);
}

//编写程序生成以下输出
//For he's a jolly good fellow!
//For he's a jolly good fellow!
//For he's a jolly good fellow!
//Which nobody can deny!
void P106_Question_4(void)
{
    /*
    void jolly(void)
    {
        printf("For he's a jolly good fellow!");
    }
    void deny(void)
    {
        printf("Which nobody can deny!");
    }
    jolly();
    jolly();
    jolly();
    deny();
    */
}

//编写程序生成以下输出
//Brazil, Russia, India, China
//India, China
//Brazil Russia
void P107_Question_5(void)
{
    /*
    void br()
    {
        printf("Brazil, Russia\n");
    }
    void ic()
    {
        printf("India, China\n");
    }
    br();
    ic();
    ic();
    br();
    */
}

//编写一个程序，创建一个整型变量toes，并将toes设置为10，程序中还要计算toes的两倍和toes的平方
//该程序应打印3个值，并分别描述以区分
void P107_Question_6(void)
{
    int i_toes = 10;
    int i_Double_toes;
    int i_sqrt_toes;
    i_Double_toes = i_toes * 2;
    i_sqrt_toes = i_toes * i_toes;
    printf("The Double toes is %d\nThe toes is %d\nThe sqrt toes is %d", i_Double_toes, i_toes, i_sqrt_toes);
}

//编写一个程序，生成以下输出
//Smile!Smile!Smile!
//Smile!Smile!
//Smile!
void P107_Question_7(void)
{
    /*
    void Function(void)
    {
        printf("Smile!");
    }
    Function();
    Function();
    Function();
    pritnf("/n");
    Function();
    Function();  
    pritnf("/n");
    Function(); 
    */
}

//编写程序，调用one_three函数。该函数在一行打印单词"one"，再调用"two"，然后在另一行打印"three"
//two()函数在一行显示单词"two"，main()函数在调用one_three()函数前要打印短语"starting now"
//并在调用完毕后显示短语"done!"
void P108_Question_8(void)
{
    /*
        void one_three()
        {
            printf("one\n");
        }
        void two()
        {
            printf("two");
        }
        printf("starting now:\n");
        one_three();
        two();
        printf("three\n");
        printf("done!\n");
    */
}

int main(void)
{
    P106_Question_1();
    getchar();
    return 0;
}