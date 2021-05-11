#include "Head.h"

//写出执行完下列各行后quack的值是多少
void P392_Question_1(void)
{
    int quack = 2;
    quack += 5;
    quack *= 10;
    quack -= 6;
    quack /= 8;
    quack %= 3;
    //quack = 2 7 70 63 7 1
}

//假设value 是int类型，下面循环的输出是什么
void P392_Question_2(void)
{
    double value;
    for (value = 36; value > 0; value /= 2)
        printf("%3d", value);
    //若value是double类型，会出现什么问题
    //答：输出为 36 18 9 4 2 1 , double 不能除以2 否则无限循环
}

//用代码表示以下测试条件
void P392_Question_3(void)
{
    /*
    a:大于5  >5
    b:scanf()读取一个名为double类型的值且失败   while(scanf()==1)
    c:X的值等于 X==
*/
}

//用代码表示以下测试条件
void P392_Question_4(void)
{
    /*
    a:scanf()成功读取一个整数   while(scanf()==1)
    b:X不等于   X!=
    c:X大于或等于20   X>=20 
*/
}

//修改错误
void P393_Question_5(void)
{
    /*
    int i,j,list(10);
    for(i=1,i<=10,i++)
    {
        list[i]=2*i+3;
        for(j=1,j>=i,j++)
        printf("%d",list[j]);
        printf("\n");
    }
*/

    int i, j, list[10];
    for (i = 1; i <= 10; i++)
    {
        list[i] = 2 * i + 3;
        for (j = 1; j >= i; j++)
            printf("%d", list[j]);
        printf("\n");
    }
}

//编写程序打印下列图案，使用嵌套循环
/*
$$$$$$$$
$$$$$$$$
$$$$$$$$
$$$$$$$$
*/
void P393_Question_6(void)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("$");
        }
        printf("\n");
    }
}

//指出下列程序的输出
void P394_Question_7(void)
{
    /*
    int i =0;
    while(++i<4)
    printf("Hi! ");
    do 
    printf("Bye! ");
    while(i++ <8);
*/
    //  输出为: Hi Hi Hi Bye Bye Bye Bye

    /*
    int i;
    char ch;
    for (i =0 ,ch='A'; i<4;i++,ch+=2*i)
    printf("%c",ch);
*/
    //  输出为: A C G M
}

//假设用户输入的是 GO west，young man!' 下面各程序的输出是什么（在ASCII码中，！紧跟在空格字符后面）
void P394_Question_8(void)
{
    /*
    char ch ;
    scanf("%c", &ch);
    while (ch != 'g')
    {
        printf("%c",ch);
        scanf("%c",&ch);
    }
*/
    //  输出为：Go west, youn

    /*
    char ch;
    scanf("%c",&ch);
    while(ch!='g')
    {
        printf("%c",++ch);
        scanf("%c",&ch);
    }
*/
    //  输出为：Hp!xftu!zpvo

    /*
    char ch;
    do {
    scanf("%c",&ch);
    printf("%c",ch);
    }while(ch != 'g');
*/
    //  输出为: Go West young

    /*
    char ch;
    scanf("%c",&ch);
    for(ch='$';ch!='g';scanf("%c",&ch))
    printf("%c",ch);
*/
    //  输出为：$o west youn
}

//下列程序打印什么内容
void P397_Question_9(void)
{
    int n, m;
    n = 30;
    while (++n <= 33)
        printf("%d|", n);
    n = 30;
    do
        printf("%d|", n);
    while (++n <= 33);
    printf("\n***\n");
    for (n = 1; n * n < 200; n += 4)
        printf("%d\n", n);
    printf("\n***\n");
    for (n = 2, m = 6; n < m; n *= 2, m += 2)
        printf("%d %d\n", n, m);
    printf("\n***\n");
    for (n = 5; n > 0; n--)
    {
        for (m = 0; m <= n; m++)
            printf("=");
        printf("\n");
    }
    //  该程序输出:31| 32| 33| 30| 31| 32| 33|
    //            ***
    //            1
    //            5
    //            9
    //            13
    //
    //            ***
    //            2 6 4 8 8 10
    //
    //            ***
    //            ======
    //            =====
    //            ====
    //            ===
    //            ==
}

//考虑下面的声明
void P399_Question_10(void)
{
    double mint[10];
    /*
    数组名是什么: 数组名为mint
    该数组多少个元素: 11个元素
    每个元素存储什么类型的值: double
    下面哪一个scanf()用法正确: 
    i.scanf("%lf",mint[2]);
    ii.scnaf("%lf",&mint[2]);
    iii.scnaf("%lf",&mint);
    答: ii正确
*/
}

//Noah先生喜欢以2计数，所以编写程序创建一个储存2、4、6、8的数组，是否正确
void P399_Question_11(void)
{
#define SIZE 8
    int by_twos[SIZE];
    int index;
    for (index = 1; index <= SIZE; index++)
        by_twos[index] = 2 * index;
    for (index = 1; index <= SIZE; index++)
        printf("%d ", by_twos[index]); //加上偏移量
    printf("\n");
}

//假设编写返回long型值的函数，函数定义应包含什么
long P400_Question_12(void)
{
    long a = 5;
    return a;
}

//定义函数，接受int类型，返回long型参数的平方值
long P400_Question_13(int value)
{
    long a = 0;
    int temp = value * value;
    a = temp;
    return a;
}

//写出下列程序输出内容
void P400_Question_14(void)
{
    int k;
    for (k = 1, printf("%d: Hi!\n", k); printf("k = %d\n", k), k * k < 26; k += 2, printf("Now k is %d\n", k))
        printf("k is %d in the loop\n", k);

    /* 输出: 
   1: Hi! 
   k = 1 
   k is 1 int the loop 
   Now k is 3 
   k = 3
   k is 3 int the loop 
   Now k is 5
   k = 5 
   k is 5 int the loop 
   Now k is 7
   k = 7
*/
}

//编写程序，包含26个元素的数组，并在其中存储26个小写字母，然后打印数组所有内容
void P402_Question_1(void)
{
    char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 26; i++)
    {
        printf("%c ", alpha[i]);
    }
}

//使用嵌套循环，按下面的格式打印字符
/*
    $
    $$
    $$$
    $$$$
    $$$$$
*/
void P402_Question_2(void)
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("$");
        }
        printf("\n");
    }
}

//使用嵌套循环，打印下列内容
/*
    F
    FE
    FED
    FEDC
    FEDCB
    FEDCBA
*/
void P402_Question_3(void)
{
    char ch[] = "FEDCBA";
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 0; j < i; j++)
            printf("%c ", ch[j]);
        printf("\n");
    }
}

//使用嵌套循环，打印下列内容
/*
    A
    BC
    DEF
    GHIJ
    KLMNO
    PQRSTU
*/
void P403_Question_4(void)
{
    char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int k = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%c ", ch[k]);
            k = k + 1;
        }
        printf("\n");
    }
}

//编写程序，提示用户输入大写字母，使用嵌套循环打印下列内容
/*
    A
    ABA
    ABCBA
    ABCDCBA
    ABCDEDCBA
*/
void P403_Question_5(void)
{
    char ch[] = "ABCDE";
    printf("Enter the Big alpha\n");
    int k = 0;
    char c;
    scanf("%c", &c);
    if (c > 'A' && c < 'Z')
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                printf("%c", ch[j]);
            }
            for (int k = i; k > 0; k--)
            {
                printf("%c", ch[k - 1]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Enter mistake\n");
        return;
    }
}

//编写程序，打印表格，每一行打印一个整数，该数的平方，该数的立方，要求用户输入表格上下限，用for循环
void P404_Question_6(void)
{
    printf("Enter the Head and bottom Maxmize\n");
    int Max_top, Max_bottom;
    scanf("%d %d", &Max_bottom, &Max_top);
    for (int i = Max_bottom; i <= Max_top; i++)
    {
        printf("%d %d %d\n", i, i * i, i * i * i);
    }
}

//编写程序，将单词读入一个字符数组中，然后倒序打印单词
void P404_Question_7(void)
{
    printf("Enter the words，the maxmize is 10\n");
    char ch[20];
    scanf("%s", ch);
    int i = strlen(ch);
    for (int k = i - 1; k >= 0; k--)
    {
        printf("%c ", ch[k]);
    }
}

//编写程序，输入浮点数，并打印两数之差除以两数乘积的结果。在用户输入非数字之前，程序应循环处理用户输入的每对值
void P404_Question_8(void)
{
    printf("Enter the float\n");
    float a, b;
    float c;
    while (scanf("%f %f", &a, &b))
    {
        c = (a - b) / a * b;
        printf("%f\n", c);
    }
}

//修改上一题，使用函数返回结果
float P404_Question_9(float a, float b)
{
    printf("Enter the float\n");
    float c;
    while (scanf("%f %f", &a, &b)) //移动至主函数里
    {
        c = (a - b) / a * b;
        printf("%f\n", c);
        return c;
    }
}

//编写程序，输入上限和下限整数，输出上限到下限范围内的所有整数平方和，并显示结果，然后继续提示输入，直到用户输入的上限小于下限
void P404_Question_10(void)
{
    printf("Enter lower and upper integer limits: ");
    int Max_top, Max_bottom;
    int i;
    int sum = 0;
    while (scanf("%d %d", &Max_bottom, &Max_top), Max_top > Max_bottom)
    {
        for (i = Max_bottom; i <= Max_top; i++)
        {
            sum = sum + i * i;
        }
        printf("\nThe sums of the squares from %d to %d is %d", Max_bottom * Max_bottom, Max_top * Max_top, sum);
        sum = 0;
        printf("\nEnter next set of limits: ");
    }
    printf("Done\n");
}

//编写程序，在数组中读入8个整数，然后倒序打印8个整数
void P404_Question_11(void)
{
    printf("Enter eight intergrated for array\n");
    int array[10];
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 7; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
}

//考虑下面两个无限序列，计算下面两个无限序列（100、1000、10000项后的和）是否发现都收敛于某值
/*
    1.0+1.0/2.0+1.0/3.0+1.0/4.0+……
    1.0-1.0/2.0+1.0/3.0+1.0/4.0+……
*/
void P405_Question_12(void)
{
    float sum = 1;
    int score = 0;
    float c = 0;
    printf("Enter the score\n");
    scanf("%d", &score);
    for (int i = 1; i <= score; i++)
    {
        sum = sum + (float)(1 / (1 + i));
    }
    printf("The sum is %.1f\n", sum);
    sum = 1;
    for (int i = 1; i <= score; i++)
    {
        c = pow(-1, i);
        sum = sum + c * (1 / (1 + i));
    }
    printf("The sum is %.1f", sum);
}

//编写程序，包含8个元素的int数组，分别把数组元素设置为2的前8次幂，使用for循环设置，do while显示
void P405_Question_13(void)
{
    int array[8];
    int i = 0;
    for (; i < 8; i++)
    {
        array[i] = pow(2, i + 1);
    }
    i = 0;
    do
    {
        printf("%d ", array[i]);
        i++;
    } while (i < 8);
}

//编写程序，创建两个包含8个元素的double类型数组，使用循环提示用户为第一个数组输入八个值，第二个数组元素的值设置为第一个数组对应元素的累计之和，使用循环显示两个数组内容
//第一个数组显示成一行、第二个数组显示在第一个数组的下一行，且每个元素与第一个数组对应
void P405_Qusetion_14(void)
{
    printf("Enter the data for array 1\n");
    int array_1[10], array_2[10];
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &array_1[i]);
    }
    int sum;
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        sum += array_1[i];
        array_2[i] = sum;
    }
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", array_1[i]);
    }
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", array_2[i]);
    }
}

//编写程序，读取一行输入，然后倒序打印，可以把输入储存在char类型的数组中，假设每行字符不超过255，
void P405_Question_15(void)
{
    char array[255];
    printf("Enter the sentence\n");
    scanf("%s", array);
    int i = strlen(array);
    for (int k = i; k > 0; k--)
    {
        printf("%c ", array[k - 1]);
    }
}

//Daphne以10%的利息投资100美元，Deirdre以5%的复合利息投资100美元，编写程序计算多少年Deirdre的投资额才会超过Daphne，并显示当时两人的投资额
void P405_Question_16(void)
{
#define danlixi 0.1
#define fuhelixi 0.05
    float invent_Daphne = 100;
    float inven_Deirdre = 100;
    float sum_Daphne = 100;
    float sum_Deirdre = 100;
    int i = 0;
    do
    {
        sum_Deirdre += sum_Deirdre * fuhelixi;
        sum_Daphne += invent_Daphne * danlixi;
        i++;
    } while (sum_Deirdre <= sum_Daphne);
    printf("The yers is %d, and the sum_Deirdre is %.1f,the sum_Daphone is %.1f\n", i, sum_Deirdre, sum_Daphne);
}

//Chuckie Lucky赢得了100万美元（税后）他把奖金存入年利率8%的账户，在每年最后一天，取出10万，编写程序，计算多少年，Chuckie会取完钱
void P406_Question_17(void)
{
#define lilv 0.08
    float Score = 100;
    int year = 0;
    while (Score > 0)
    {
        Score += Score * lilv;
        printf("The Socre + lilv is %.1f\n", Score);
        Score = Score - 10;
        year++;
    }
    printf("The time is %d", year);
}

//Robund博士加入一个社交圈，起初他有5个朋友，他注意到他的朋友数量以下面的方式增长。第N周少了n个朋友，剩下的朋友数量翻倍，计算显示每周的数量，直到150
void P406_Question_18(void)
{
    int friend = 5;
    int week = 1;
    while (friend < 150)
    {
        friend = (friend - week) * 2;
        printf("Now is %d week , Have %d friend\n", week, friend);
        week++;
    }
}

int main(void)
{
    P406_Question_18();
    getchar();
    getchar();
    return 0;
}
