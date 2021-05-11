#include "Head.h"

//再次运行程序4.1，但输入姓名时，名和姓之间有一个空格，看看会发生什么情况
void P232_Question_1(void)
{
    float weight, volume;
    int size, letters;
    char name[40];
    printf("Hi!What's your first name?\n");
    scanf("%s", name);
    // fflush(stdin);
    printf("%s, What's your weight in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof(name);
    letters = strlen(name);
    volume = weight / 62.4;
    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it.\n", size);
    // 当使用空格隔开时，程序直接退出。原因是因为空格将被下一个输入读取，由于类型不匹配导致错误
}

//下列实例的打印结果
void P232_Question_2(void)
{
    printf("He sold the painting for $%2.2f\n", 2.345e2);

    printf("%c%c%c\n", 'H', 105, '\41');

#define Q "His Hamlet was funnt without being vulgar."
    printf("%s\n has %d chararcters.\n", Q, strlen(Q));

    printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);
}

//第二题第三个中输出包含双引号字符串Q（改为R），应该如何修改
void P232_Question_3(void)
{
#define R "\"His Hamlet was funnt without being vulgar\"."
    printf("%s\n has %d chararcters.\n", R, strlen(R));
}

//程序改错
void P232_Question_4(void)
{
    /*
        define B booboo
        define X 10 
        main(int)
        {
            int age;
            char name;
            printf("Please enter your first name.");
            scanf("%s", name);
            printf("All right, %c,what's your age\n", name);
            scanf("%f", age);
            xp = age + X;
            printf("That's a %s! You must be at least %d.\n",B,xp);
            return 0
        }
    */
#define B "booboo"
#define X 10
    int age;
    char name[40];
    printf("Please enter your first name.\n");
    scanf("%s", name);
    printf("All right, %s,what's your age\n", name);
    scanf("%d", age);
    int xp = age + X;
    printf("That's a %s! You must be at least %d.\n", B, xp);
}

//假设程序开头如下，请构造BOOK、cost和percent的printf（）语句，打印
//This copy of"War and Peace" sells for $12.99
//That is 80% of list
void P233_Question_5(void)
{
#define BOOK "War and Peace"
    float cost = 12.99;
    float percent = 80.0;
    printf("This copy of %s slls for %.2f\n", BOOK, cost);
    printf("THat is %.0f%% of list", percent);
}

//打印下列各项要用什么转换说明
void P233_Question_6(void)
{
    //一个字段宽度与位数相同的十进制整数            %d
    //一个形如8A、       字段宽度为4的十六进制整数  %x
    //一个形如232.346、  字段宽度为10的浮点数      %5.5f
    //一个形如2.33e+002、字段宽度为12的浮点数      %12e
    //一个字段宽度为30、  左对齐的字符串           %-30d
}

//打印下列各项要用什么转换说明
void P233_Question_7(void)
{
    //字段宽度为15的unsigned long类型的整数 %15lu
    //一个形如0x8A、     字段宽度为4的十六进制整数  %#4x
    //一个形如233E+02、  字段宽度为12、左对齐的浮点数      %-12.2f
    //一个形如+232.346、字段宽度为10的浮点数       %+10.3f
    //一个字段宽度为8的字符串的前8个字符           %8.8s
}

//打印下列各项要用什么转换说明
void P233_Question_8(void)
{
    //一个字段宽度为6、最少有4位数字的十进制整数 %6.4d
    //一个参数列表中给定字段宽度的八进制整数 %*o
    //一个字段宽度为2的字符 %2c
    //形如+3.13、字段宽度等于数字中字符数的浮点数 %+.2f
    //字段宽度为7、左对齐字符串中的前5个字符 %-7.5s
}

//分别读取下列输入行的scanf()语句，并声明语句中用到的变量和数组
void P233_Question_9(void)
{
    int a = 101;
    float b = 22.32;
    float c = 8.34E-09;
    char d[20] = "linguini";
    char e[20] = "catch22";
    char f[20] = "catch22";
    scanf("%d", &a);
    scanf("%f", &b);
    scanf("%e", &c);
    scanf("%s", d);
    scanf("%s", e);
    scanf("%d", f);
}

//什么是空白
void P234_Question_10(void)
{
    //\0 算空白
}

//改正错误
void P234_Question_11(void)
{
    //printf("The double type is %z bytes..\n",sizeof(double));
    printf("The double type is %zd bytes..\n", sizeof(double));
}

//假设要在程序中用圆括号代替花括号，以下方法是否可行
void P234_Question_12(void)
{
    /*
        #define ( {
        #define ) }
    */
    //试试就知道了，显然不行
}

//编写程序，提示用户输入名和姓，在以姓和名的方式打印
void P236_Question_1(void)
{
    typedef struct Human
    {
        char Xing[20];
        char Ming[20];
    } Human;
    Human Users;
    printf("Enter your Xing\n");
    scanf("%s", Users.Xing);
    printf("Enter your Ming\n");
    scanf("%s", Users.Ming);
    printf("%s,%s", Users.Ming, Users.Xing);
}

//编写程序，提示用户输入名和姓，在以姓和名的方式打印
void P236_Question_2(void)
{
    typedef struct Human
    {
        char Xing[20];
        char Ming[20];
    } Human;
    Human Users;
    printf("Enter your Xing\n");
    scanf("%s", Users.Ming);
    printf("Enter your Ming\n");
    scanf("%s", Users.Xing);
    printf("%+20s %s", Users.Ming, Users.Xing);
    printf("%-20s %s", Users.Ming, Users.Xing);
    printf("%3s %3s", Users.Ming, Users.Xing);
}

//读取浮点数，首先以小数点计数法打印，然后以指数计数法打印，用以下格式输出
// 输入21.3或2.1e+001;
// 输入+21.290货2.129E+001;
void P236_Question_3(void)
{
    float f_temp;
    printf("Enter the Number\n");
    scanf("%f", &f_temp);
    printf("%e\n", f_temp);
    printf("%f", f_temp);
}

//编写程序，提示输入身高和姓名，然后以下列格式显示信息
//Dabney, you are 6.208 feet tall
void P236_Question_4(void)
{
    float f_people_tall = 0;
    char name[20];
    printf("Eeter your tall\n");
    scanf("%f", &f_people_tall);
    printf("Eeter your name\n");
    scanf("%s", name);
    printf("%s, you are %f feet tall", name, f_people_tall);
}

//编写程序，提示用户输入以兆位每秒(MB/s)为单位的下载速度和以兆字节(MB)为单位的文件大小。程序中应计算文件的下载时间。
//注意这里1字节等于8位。使用float类型，并用/作为除号。该程序以下面的格式打印下载速度、文件大小、下载时间的值，显示小数点后两位
//At 18.12 megabits per second, a file of 2.20 megabytes downloads in 0.97 second.
void P236_Question_5(void)
{
    printf("Enter the Speed_Download and Size_file\n");
    float Speed_Download = 0;
    float Size_file = 0;
    scanf("%f%f", &Speed_Download, &Size_file);
    float Time_file = Size_file / Speed_Download;
    printf(" At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f second", Speed_Download, Size_file, Time_file);
}

//编写程序，提示输入名，然后提示输入姓，在一行打印，下一行分别打印名和姓的字母数，字母数与相应名和姓的结尾对其，再开头对齐一次
void P236_Question_6(void)
{
    char xing[20];
    char ming[20];
    printf("Enter your name with Xing and Ming\n");
    scanf("%s %s", xing, ming);
    int quantity_xing = strlen(xing);
    int quantity_ming = strlen(ming);
    int temp = quantity_xing;
    while (temp > 1)
    {
        printf(" ");
        temp--;
    }
    printf("%d", quantity_xing);
    printf(" ");
    temp = quantity_ming;
    while (temp > 1)
    {
        printf(" ");
        temp--;
    }
    printf("%d\n", quantity_ming);

    printf("%d", quantity_xing);
    temp = quantity_xing;
    while (temp >= 1)
    {
        printf(" ");
        temp--;
    }
    printf("%d", quantity_ming);
}

//编写程序，将double类型变量设置为1.0/3.0，一个float类型的变量为1.0/3.0，分别显示两次计算结果各三次
//一次显示小数点后6位，二次显示小数点后12位，三次显示小数点后16位，程序中要包含float.h头文件，并显示FLT_DIG和DBL_DIG的值\
//1.0/3.0的值和这些一致吗
void P236_Question_7(void)
{
    double d_temp = 1.0 / 3.0;
    float f_temp = 1.0 / 3.0;
    printf("%.6f  %.12f  %.16f\n", d_temp);
    printf("%.6f  %.12f  %.16f\n", f_temp);
    printf("%f\n", FLT_DIG);
    printf("%f", DBL_DIG);
}

//编写程序，提示用户输入旅行的里程和消耗的汽油，计算消耗每加仑汽油消耗的英里数，显示小数点后一位数字
//1加仑=3.785升，1英里=1.609千米，把单位是英里/加仑的值转为升/100公里，并显示小数点后一位数字
//使用#define符号或const创建变量来表示转换系数
void P236_Question_8(void)
{
    float qiyou, km;
    printf("Enter your km and qiyou\n");
    scanf("%f %f", km, qiyou);
    printf("%.1f", km / qiyou);
    const float xishu_sheng = 3.785;
    const float xishu_qianmi = 1.609;
    float sheng = qiyou * xishu_sheng;
    float qianmi = km * xishu_qianmi;
    printf("%.1f", sheng / (km * 100));
}

int main(void)
{
    getchar();
    getchar();
    return 0;
}