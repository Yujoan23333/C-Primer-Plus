#include "Head.h"

//指出下面各种数据使用的合适数据类型
void P168_Question_1(void)
{
/*
    a: East Simpleton的入口
       使用int型
    b: DVD影碟的价格
       使用float
    c: 本章出现次数最多的字母
       使用_bool
    d: 本章出现次数最多的字母次数
       使用long型                                
*/
}

//在什么状况下要用long型代替int型
void P168_Question_2(void)
{
    //答：当数据大小超过int型时，
}

//使用哪些可移植的数据类型可以获得32位有符号整数？选择的理由是什么
void P168_Question_3(void)
{
    //答: 跟实现有关
             
}

//!指出下列常量的类型与含义（如果有的话）
void P168_Question_4(void)
{
/*
    a: '\b'      
    b: 1066
    c: 99.44
    d: 0XAA
    e: 2.0e30
    答：
    a为char型退格符
    b为int型常量
    !c为double型常量 未指定类型同意为double型，与长度是否在float型内无关
    d为16进制整形
    e为double型科学计数 2.0*10^30
*/
}

//程序改错
void P168_Question_5(void)
{
    /*
    float g, h;
    float tax, rate;
    g = e21;
    tax = rate * g;
    */

//  答：g = 1.0e21; double tax = rate * g 
}

//!写出下列常量在声明中使用的数据类型和在printf中对应的转换说明
void P169_Question_6(void)
{
/*
    12          十进制int     %d
    0X3         十六进制int   %x
    'C'         字符          %c
    2.34E07     double       %lf
    '\040'      转义字符空格  %c   
    7.0         double       %lf
    6L          Long型       %ld  
    6.0f        float型      %f
    !0x5.b6p12   16进制double型   %a        
*/
}

//写出下列常量在声明中使用的数据类型和在printf中对应的转换说明
void P169_Question_7(void)
{
/*
    012       %o    
    2.9e05L   %Lf 
    's'       %c
    100000    int 
    '\n'      %c
    20.0f     %f
    0x44      %xd
    -40       %d        
*/
}

//补充代码
void P170_Question_8(void)
{
    int i_mate = 2;
    long shot = 53456;
    char grade = 'A';
    float log = 2.71828;

    printf("THe odds against the %d were %ld to 1.\n", i_mate, shot);
    printf("A score of %f is not an %c grade.\n", log, grade);
}

//假设ch是char类型的变量，分别使用转义序列、十进制值、八进制字符常量和十六进制字符常量把回车字符赋给ch（假设使用ASCII编码）
void P170_Question_9(void)
{
    char ch;
    ch = '\r';
    ch = 13;
    ch = 015;
    ch = 0xD;
}

//修正程序
void P170_Question_10(void)
{
    float cows;
    char legs;
    printf("How many cow legs did you count?\n");
    scanf("%c", legs);
    cows = legs / 4;
    printf("That implies there are %f cows.\n", cows);
}

//指出下列转义序列含义
void P171_Question_11(void)
{
/*
    \n  换行
    \\  注释
    \"  双引号
    \t  跳到下一制表符  
*/
}

//通过试验观察系统如何处理整数上溢
void P172_Question_1(void)
{
    int i_max = INT32_MAX;
    printf("The max value is %d\n", i_max);
    i_max++;
    printf("The max value is %d\n", i_max);
}

//编写程序，要求提示输入一个ASCII码值，然后打印输入的字符
void P172_Question_2(void)
{
    printf("Enter the value of ASCII\n");
    int c;
    scanf("%d", &c);
    printf("The char is %c", c);
}

//编写程序，发出警报，打印文本
void P172_Question_3(void)
{
    printf("\a\nStartled by the sudden sound, Sally shouted,\n\"By the Great Pumpkin, what was that!\"");
}

//编写程序，读出浮点数，打印为小数形式，再打印指数形式，再打印p计数法（十六进制计数法）
void P172_Question_4(void)
{
    float f_temp = 0;
    printf("Enter the float\n");
    scanf("%f", &f_temp);
    printf("fixed -point notation: %f\n",f_temp );
    printf("exponential  notation: %e\n",f_temp );
    printf("p            notation: %.2a",f_temp );
}

//一年大约3.156*10^7秒，编写程序，提示用户输入年龄，计算秒数
void P172_Question_5(void)
{
    double l_age = 0;
    printf("Enter your age\n");
    scanf("%lf", &l_age);
    l_age= l_age * 3.156e7;
    printf("The time is %f", l_age);
}

//水分子的质量约为3.0*10^-23克，一夸脱水大约950克，编写程序，用户输入水的夸脱数，并显示水分子数量
void P172_Question_6(void)
{
    double l_quantity_water = 3e-23;
    double l_quanlity_water = 0;
    double l_kuatuo = 0;
    printf("Enter your kuatuo\n");
    scanf("%lf", &l_kuatuo);
    l_quanlity_water= l_kuatuo * 950 / l_quantity_water;
    printf("The time is %f", l_quanlity_water);
}

//1英寸相当于2.54厘米，编写程序，提示用户输入身高，然后以厘米为单位显示身高
void P172_Question_7(void)
{
    int  i_high_m = 0;
    int i_high_cm = 0;
    printf("Enter your high\n");
    scanf("%d", &i_high_m);
    i_high_cm = i_high_m * 100;
    printf("The time is %d cm", i_high_cm);
}

//一品脱等于两杯，一杯等于八盎司，一盎司等于2汤勺，一汤勺等于3茶勺，编写程序，输入杯数，以不同单位显示等价容量，思考为何浮点比整数更合适
void P173_Question_8(void)
{
    float f_quantity_cup;
    float f_quantity_ansi;
    float f_quantity_tea;
    float f_quantity_chatea;
    float f_quantity_pintuo;

    printf("Enter your cup\n");
    scanf("%f", &f_quantity_cup);
    f_quantity_ansi = f_quantity_cup * 8;
    f_quantity_pintuo = f_quantity_cup * 0.5;
    f_quantity_tea = f_quantity_ansi * 2;
    f_quantity_chatea = f_quantity_tea * 3;

    printf("The cup is %.1f\n"
           "The ansi is %.1f\n"
           "The pintuo is %.1f\n"
           "The tea is %.1f\n"
           "The chatea is %.1f", f_quantity_cup,f_quantity_ansi,f_quantity_pintuo,f_quantity_tea,f_quantity_chatea);
}

int main(void)
{
    getchar();
    return 0;
}