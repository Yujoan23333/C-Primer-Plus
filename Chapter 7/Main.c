#include "Head.h"

//判断下列表达式是true还是false
void P487_Question_1(void)
{
    /*
    a:100>3 && 'a'>'c'  false
    b:100>3 || 'a'>'c'  true
    c:!(100>3)          false
*/
}

//根据下列条件，分别构造表达式
void P487_Question_2(void)
{
    /*
    a:umber等于或大于90，但小于100  umber>=90 and umber <100
    b:h不是字符q或k                 h!='q'||h!='k'
    c:umber在1~9之间(包括)，但不是5 umber>=1 and umber <=9 and umber != 5
    d:umber不在1~9之间             umber<1 and umber >9 
*/
}

//程序改错
void P487_Question_3(void)
{
    int weight, height;
    scanf("%d", weight, height);
    if (weight < 100 and height > 64)
        if (height >= 72)
            printf("You are very tall for your weight\n");
    if (height < 72 and height > 64)
        printf("You are tall for your weight\n");
    if (weight > 300 and !(weight <= 300) and height < 48)
        if (!(height >= 48))
            printf("You are quiet short for your weight\n");
        else
            printf("Your weight is ideal.\n");
}

//下列各个表达式的值是多少
void P488_Question_4(void)
{
    /*
    a:5>2 1
    b:3+4>2 and 3<2 0
    c:x>=y||y>x 1
    d:d=5+(6>2) 6
    e:'X'>'T'? 10:5 5
    f:x>y ? y>x:x>y 1
*/
}

//下面程序的输出是什么
void P488_Question_5(void)
{
    int num;
    for (num = 1; num <= 11; num++)
    {
        if (num % 3 == 0)
            putchar('$');
        else
            putchar('*');
        putchar('#');

        putchar('%');
    }
    putchar('\n');
    //  答：*#%*#%$#%*#%*#%$#%*#%*#%$#%*#%*#%
}

//下面的程序输出是什么
void P489_Question_6(void)
{
    int i = 0;
    while (i < 3)
    {
        switch (i++)
        {
        case 0:
            printf("fat");
            printf("%d", i);
        case 1:
            printf("hat");
        case 2:
            printf("cat");
        default:
            printf("Oh no");
        }
        putchar('\n');
    }
    //  答：fathatcatOhno
    //      hatcatOhno
    //      catOhno
}

//程序改错
void P490_Question_7(void)
{
    char ch;
    int lc = 0;
    int uc = 0;
    int oc = 0;
    while ((ch = getchar()) != '#')
    {
        if ('a' <= ch and ch >= 'z')
            lc++;
        else if (!(ch < 'A') or !(ch > 'Z'))
            uc++;
        oc++;
    }
    printf("%d lowercase,%d uppercase ,%d other", lc, uc, oc);
}

//下面的程序输出是什么
void P491_Question_8(void)
{
    int age = 20;
    while (age++ <= 65)
    {
        if ((age % 20) == 0)
            printf("You are %d.Here is a raise.\n", age);
        if (age == 65)
            printf("You are %d.Here is your gold watch.\n", age);
    }
    //答：You are 20.Here is a raise
    //   You are 40.Here is a raise
    //   You are 60.Here is a raise
    //   You are 65.Here is a gold watch
}

//给定输入“ q c h b ”，以下程序将打印什么
void P492_Question_9(void)
{
    char ch;
    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
            continue;
        printf("Step 1\n");
        if (ch == 'c')
            continue;
        else if (ch == 'b')
            break;
        else if (ch == 'h')
            goto laststep;
        printf("Step 2\n");
    laststep:
        printf("Step 3\n");
    }
    printf("Done\n");
    /*
  答：
        Step 1
        Step 2
        Step 3

        Step 1
        Step 1
        Step 3

        Step 1
        Done
*/
}

//重写上面程序，不能使用goto和continue
void P493_Question_10()
{
    char ch;
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '\n':
            break;
        case 'c':
            printf("Step 1\n");
            break;
        case 'q':
            printf("Step 1\n");
            printf("Step 2\n");
            printf("Step 3\n");
            break;
        case 'b':
            printf("Step 1\n");
            break;
        case 'h':
            printf("Step 1\n");
            printf("Step 3\n");
            break;
        }
    }
    printf("Done\n");
}

//编写程序，读到#字符停止，然后读取空格数，换行符和其他所有字符的数量
void P494_Question_1(void)
{
    char ch;
    int kongge = 0;
    int huanhang = 0;
    int qita = 0;
    while ((ch = getchar() != '#'))
    {
        switch (ch)
        {
        case ' ':
            kongge++;
            break;
        case '\n':
            huanhang++;
            break;
        default:
            qita++;
            break;
        }
    }
    printf("The kongge is %d, The huanhang is %d, The qita is %d\n", kongge, huanhang, qita);
}

//编写程序读取输入，直到#字符停止，程序打印每个输入的字符ASCII码（十进制），一行打印8个字符
void P494_Question_2(void)
{
    char ch;
    int i = 1;
    while ((ch = getchar()) != '#')
    {
        if (i == 8)
        {
            printf("\n");
        }
        printf("%d", ch);
        i++;
    }
}

//编写程序，读取整数直到用户输入0。输入结束后，程序应报告用户输入的偶数（不包括0）个数、这些偶数的平均值、输入的奇数个数及其奇数的平均值
void P494_Question_3(void)
{
    int ih = 0;
    int geshu_oushu = 0;
    int geshu_jishu = 0;
    int junzhi_oushu = 0;
    int junzhi_jishu = 0;
    while ((scanf("%d", &ih)) && ih != 0)
    {
        if (ih % 2)
        {
            geshu_jishu++, junzhi_jishu += ih;
        }
        else
        {
            geshu_oushu++, junzhi_oushu += ih;
        }
    }
    if (geshu_oushu == 0 || geshu_jishu == 0)
    {
        printf("不能0个输入\n");
        return;
    }
    junzhi_jishu = junzhi_jishu / geshu_jishu;
    junzhi_oushu = junzhi_oushu / geshu_oushu;
    printf("The oushu %d jun zhi %d\n", geshu_oushu, junzhi_oushu);
    printf("The jishu %d jun zhi %d\n", geshu_jishu, junzhi_jishu);
}

//使用if else语句编写输入，读到#停止，用感叹号替换句号，用两个感叹号替换原来的感叹号，最后报告多少次替换
void P494_Question_4(void)
{
    char ch;
    char sh[20];
    int tihuan = 0;
    int i = 0;
    if ((ch = getchar()) != '#')
    {
        if (ch == '!')
        {
            sh[i] = ch;
            sh[i + 1] = ch;
            i++;
            tihuan++;
        }
        else if (ch == '.')
        {
            ch = '!';
            sh[i] = ch;
            i++;
            tihuan++;
        }
    }
    else
    {
        printf("The tihuan is %d", tihuan);
    }
}

//使用switch重写上面的程序
void P494_Question_5(void)
{
    char ch;
    char sh[20];
    int tihuan = 0;
    int i = 0;
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '!':
            sh[i] = ch;
            sh[i + 1] = ch;
            i++;
            tihuan++;
            break;
        case '.':
            sh[i] = ch;
            i++;
            tihuan++;
            break;
        default:
            break;
        }
    }
    printf("The tihuan is %d", tihuan);
}

//编写程序，直到#停止，报告ei的次数
void P494_Question_6(void)
{
    char ch;
    int ei = 0;
    while ((ch = getchar()) != '#')
    {
        if (ch == 'e')
        {
            if ((ch = getchar()) == 'i')
            {
                ei++;
            }
        }
    }
    printf("The socre of ei is %d\n", ei);
}

//编写程序，提示用户输入一周工作的小时数，然后打印工资总额、税金，和净收入
/*
    基本工资=1000美元/小时
    加班（超过40小时）=1.5倍时间
    税率：前300美元为15%
    续150美元为20%
    余下的为25%
    用#define定义符号常量
*/
void P494_Question_7(void)
{
#define Jiben 1000
#define time_jiaban 1.5
#define shuilv_qian300 0.15
#define shuilv_xu150 0.2
#define shuilv_yuxia 0.25

    float gongzi = 0;
    float shui = 0;
    int times = 0;
    printf("Enter your times weekly\n");
    scanf("%d", &times);
    if (times > 40)
    {
        times = times + (times - 40) * 1.5;
    }
    gongzi = times * 1000;
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

//修改上一程序，提供可供选择的工资等级菜单
void P494_Question_8(void)
{
#define time_jiaban 1.5
#define shuilv_qian300 0.15
#define shuilv_xu150 0.2
#define shuilv_yuxia 0.25

    float gongzi = 0;
    float shui = 0;
    int times = 0;
    int choice = 0;
    float beilv = 0;
    printf("Enter your times weekly\n");
    scanf("%d", &times);
    if (times > 40)
    {
        times = times + (times - 40) * 1.5;
    }

    printf("Enter the number corresoponding to the desired pay rate or action\n");
    printf("(1)$8.75/h          (2)$9.33/h\n");
    printf("(3)$10.00/h         (4)$11.20/h\n");
    printf("(5)quit\n");
    scanf("%d", &choice);
    if (choice > 5)
    {
        while (choice > 5)
        {
            printf("输入错误\n");
            scanf("%d", &choice);
        }
    }
    switch (choice)
    {
    case 1:
        beilv = 8.75;
        break;
    case 2:
        beilv = 9.33;
        break;
    case 3:
        beilv = 10;
        break;
    case 4:
        beilv = 11.2;
        break;
    default:
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

//编写程序，只接受整数输入，然后显示所有小于或等于该数的素数
void P495_Question_9(void)
{
    int a = 0;
    if (scanf("%d", &a))
    {
        while (a > 0)
        {
            if (a % 2)
            {
                if (a % 5)
                {
                    if (a % 3)
                    {
                        printf("%d ", a);
                        a--;
                    }
                    else
                    {
                        a--;
                    }
                }
                else
                {
                    a--;
                }
            }
            else
            {
                a--;
            }
        }
    }
    else
        printf("输入整数\n");
}

//编写程序，让用户指定缴纳税金的种类和应纳税收入，然后计算税金，程序通过循环让用户多次输入
void P496_Question_10(void)
{
#define jiben 0.15
#define chaochu 0.28

    int i = 0;
    float gongzi = 0;
    float shui = 0;
    printf("输入类别\n");
    printf("(1)单身：17850美元按15%%，超出28%%\n");
    printf("(2)户主：23900美元按15%%，超出28%%\n");
    printf("(3)已婚，共有：29750美元按15%%，超出28%%\n");
    printf("(4)已婚，离异：14875美元按15%%，超出28%%\n");
    while (scanf("%d", &i))
    {
        printf("输入金额\n");
        scanf("%f", &gongzi);
        if (i == 1)
        {
            if (gongzi > 17850)
            {
                shui = 17850 * jiben + (gongzi - 17850) * chaochu;
            }
            else
            {
                shui = gongzi * jiben;
            }
            printf("The shui is %f", shui);
        }
        else if (i == 2)
        {
            if (gongzi > 23900)
            {
                shui = 23900 * jiben + (gongzi - 23900) * chaochu;
            }
            else
            {
                shui = gongzi * jiben;
            }
            printf("The shui is %f", shui);
        }
        else if (i == 3)
        {
            if (gongzi > 29750)
            {
                shui = 29750 * jiben + (gongzi - 29750) * chaochu;
            }
            else
            {
                shui = gongzi * jiben;
            }
            printf("The shui is %f", shui);
        }
        else if (i == 4)
        {
            if (gongzi > 14875)
            {
                shui = 14875 * jiben + (gongzi - 14875) * chaochu;
            }
            else
            {
                shui = gongzi * jiben;
            }
            printf("The shui is %f", shui);
        }
        else
        {
            printf("输入错误\n");
        }
    }
}

//……
void P496_Question_11(void)
{
#define yangqin 2.05
#define tiancai 1.15
#define huluobo 1.09
#define youhui 0.05

    int temp = 0;
    int zhongliang_yangqin = 0;
    int zhongliang_tiancai = 0;
    int zhongliang_huluobo = 0;
    int zhongliang_total = 0;

    float jiage_yangqin = 0;
    float jiage_tiancai = 0;
    float jiage_huluobo = 0;
    float jiage_total = 0;

    float zhekou = 0;
    float yunfei = 0;

    float total = 0;

    char ch;

    while ((ch = getchar()) != 'q')
    {
        switch (ch)
        {
        case 'a':
            printf("输入洋琴的重量\n");
            scanf("%d", &temp);
            zhongliang_yangqin += temp;
            break;
        case 'b':
            printf("输入甜菜的重量\n");
            scanf("%d", &temp);
            zhongliang_tiancai += temp;
            break;
        case 'c':
            printf("输入胡萝卜的重量\n");
            scanf("%d", &temp);
            zhongliang_huluobo += temp;
            break;
        default:
            break;
        }
    }

    zhongliang_total = zhongliang_huluobo + zhongliang_tiancai + zhongliang_yangqin;

    if (zhongliang_total <= 5)
    {
        yunfei = 6.5;
    }
    else if (zhongliang_total > 5 && zhongliang_total <= 20)
    {
        yunfei = 14 + 6.5;
    }
    else
    {
        yunfei = 14 + 6.5 + (zhongliang_total - 20) * 0.5;
    }

    printf("订购了扬琴%d 斤，价格%.1f 元\n", zhongliang_yangqin, jiage_yangqin);
    printf("订购了甜菜%d 斤，价格%.1f 元\n", zhongliang_tiancai, jiage_tiancai);
    printf("订购了胡萝卜%d 斤，价格%.1f 元\n", zhongliang_huluobo, jiage_huluobo);

    jiage_total = jiage_yangqin + jiage_tiancai + jiage_huluobo;
    if (jiage_total > 100)
    {
        zhekou = jiage_total * youhui;
    }
    printf("总价格%.1f 元，总优惠%.1f 元，总运费和包装费%.1f 元\n", jiage_total, zhekou, yunfei);
    total = jiage_total - zhekou + yunfei;
    printf("共计 %.1f 元", total);
}

int main(void)
{
    getchar();
    getchar();
    return 0;
}