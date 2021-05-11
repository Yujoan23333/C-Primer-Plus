#include "Head.h"

//在下面的字符串的声明中存在什么问题？
void P847_Question_1(void)
{
    char name[] = {'F', 'e', 's', 's'};
    //应为 char name[]="Fess"
    //编译器不知道结尾
}

//下面的程序打印什么
void P847_Question_2(void)
{
    char note[] = "See you at the sanck bar.";
    char *ptr;
    ptr = note;
    puts(ptr);
    puts(++ptr);
    note[7] = '\0';
    puts(note);
    puts(++ptr);
    //See you at the sanck bar.
    //ee you at the sanck bar.
    //See you
    //e you
}

//下面的程序打印什么
void P848_Question_3(void)
{
    char food[] = "Yummy";
    char *ptr;
    ptr = food + strlen(food);
    while (--ptr >= food)
        puts(ptr);
    //y
    //my
    //mmy
    //ummy
    //Yummy
}

//下面的程序打印什么
void P848_Question_4(void)
{
    char goldwyn[40] = "art of it all";
    char samuel[40] = "I read p";
    const char *quote = "the way through.";
    strcat(goldwyn, quote);
    strcat(samuel, goldwyn);
    puts(samuel);
    //I read p art of it all the way through.
}

//下面的程序打印什么
char *P849_Question_5(char *str)
{
    char *pc;
    pc = str;
    while (*pc)
        putchar(*pc++);
    do
    {
        putchar(*--pc);
    } while (pc - str);
    return (pc);

    /*
    x = P849_Question_5 ("Ho Ho Ho!");
    a: 将打印什么
    答: Ho Ho Ho!!OH oH oH 
    b: x是什么类型
    答: cahr *
    c: x的值是什么
    答: str的首地址
    d: 表达式*--pc 是什么意思，与--*pc有何不同
    答: 前者操作地址，后者操作数据
    e: 表达式*-pc 替换--*pc 会打印什么
    答: 各字符-1
    f: 两个while测试什么
    答: 是否到了末尾
    g: 如果函数参数为空会怎么样
    答: 异常
    h: 必须再主调函数中做什么，才能让其正常运行
    答: 参数不为空
*/
}

//假设声明: char sign ='$';
//sign占用多少字节内存，'$'占用多少，"$"占用多少
void P850_Quesiton_6(void)
{
    //答：1 1 2
}

//下面的程序打印什么
void P850_Question_7(void)
{
#define M1 "How are ya, sweetie? "
    char M2[40] = "Beat the clock.";
    char *M3 = "chat";
    char words[80];
    printf(M1);
    puts(M1);
    puts(M2);
    puts(M2 + 1);
    strcpy(words, M2);
    strcat(words, " Win a joy.");
    puts(words);
    words[4] = '\0';
    puts(words);
    while (*M3)
    {
        puts(M3++);
    }
    puts(--M3);
    puts(--M3);
    M3 = M1;
    puts(M3);
    //答：
    //How are ya, sweetie? How are ya, sweetie?
    //Beat the clock.
    //eat the clock.
    //Beat the clock. Win a joy.
    //Beat
    //chat
    //hat
    //at
    //t
    //t
    //at
    //How are ya, sweetie?
}

//下面的程序打印什么
void P852_Qusetion_8(void)
{
    char str1[] = "gawsie";
    char str2[] = "bletonism";
    char *ps;
    int i = 0;
    for (ps = str1; *ps != '\0'; ps++)
    {
        if (*ps == 'a' or *ps == 'e')
        {
            putchar(*ps);
        }
        else
        {
            (*ps)--;
        }
        putchar(*ps);
    }
    putchar('\n');
    while (str2[i] != '\0')
    {
        printf("%c", i % 3 ? str2[i] : '*');
        ++i;
    }
    //答：
    //faavrhee
    //*le*on*sm
}

//改写s_gets()函数，使用指针表示法代替数组表示法便可减少一个变量i
char *P853_Question_9(char *st, int n)
{
    char *ret_val;
    int i = 0;
    char *temp = st;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (*st != '\n' and *st != '\0')
            st++;
        if (*st == '\n')
            *st = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}

//strlen接受一个指向字符串的指针作为参数，并返回字符串长度
int P853_Qusetion_10(char *ptr)
{
    int i = 0;
    while (*ptr++ != '\0')
    {
        i++;
        //ptr++;
    }
    return i;
}

//改写s_gets()函数，用strchr()函数代替其中的while循环来查找换行符
char *s_gets(char *st, int n)
{
    char *ret_val;
    int i = 0;
    char *temp = st;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        temp = strchr(st, '\n');
        *temp = '\0';
        while (getchar() != '\n')
            continue;
    }
    return ret_val;
}

//设计函数，接受指向字符串的指针，返回指向该字符串第一个空格字符的指针，如果未找到空格，则返回空指针
char *P853_Question_12(char *ptr)
{
    char *str = strchr(ptr, 32);
    return str;
}

//重写程序，无论用户选择小写还是大写，该程序都能完美运行
void P853_Question_13(void)
{
#define ANSWER "Grant"
#define SIZE 40
    char try[SIZE];
    puts("Who is buried in Grant's tomb?");
    char *ptr = s_gets(try, SIZE);
    while (*ptr++ != '\0')
        toupper(*ptr);
    while (strcmp(try, ANSWER) != 0)
    {
        puts("No, taht's wrong, Try again.");
        s_gets(try, SIZE);
    }
    puts("That's right!");
}

//编写函数，从输入中获取n个字符（包括空白，指标，换行符）把结果储存在一个数组里，它的地址被传递作为一个参数
char *P854_Question_1(int n)
{
    int i = 0;
    char str[n + 1];
    fgets(str, n, stdin);
    fputs(str, stdout);
}

//修改P854_Question_14，在n个字符后停止，或第一个空白、制表符或换行符时停止，不能只使用scanf
void P854_Question_2(void)
{
#define maxmize 50
    int i = 0;
    char ch[maxmize];
    do
    {
        ch[i] = getchar();
        if (ch[i] == ' ' and ch[i] == '\n' and ch[i] == '\t')
            break;
        else
            i++;
    } while (i < maxmize - 1);
    puts(ch);
}

//设计函数，从输入中把单词读入数组，并丢弃其他字符，跨过第一个非空白字符前面的空白，将单词定义为纯字母
void P854_Question_3(char *ptr)
{
    scanf("%s", ptr);
}

//设计程序，类似P854_Question_3，不过接受第二个参数指明可读取的最大字符数
void P854_Question_4(char *ptr, int n)
{
    char ch;
    char *temp = ptr;
    int i = 0;
    while (i < n)
    {
        ch = getchar();
        if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z'))
        {
            *ptr++ = ch;
            i++;
        }
        else if (ch == '\n')
        {
            break;
        }
        else
        {
            continue;
        }
    }
    ptr = temp;
    puts(ptr);
}

//设计程序，接受第一个函数形参指定的字符串，在其中查找第二个形参指定的字符首次出现的位置，如果成功，返回指向它的指针，否则，返回空
//使用循环给函数提供输入值
char *P854_Question_5(char *ptr, char val)
{
    char *temp = ptr;
    while (*temp != val)
    {
        temp++;
    }
    if (*temp == '\0')
    {
        return NULL;
    }
    return temp;
}

//编写函数，接受一个字符和一个指向字符串的指针作为两个函数形参，如果指定字符在字符串中，则返回非零值，否则返回0
bool P854_Qeustion_6(char val, char *ptr)
{
    while (*ptr != '\0')
    {
        if (*ptr != val)
        {
            ptr++;
            continue;
        }
        if (*ptr == val)
        {
            return true;
        }
    }
    return false;
}

//编写程序，把第二个字符串的n个字符拷贝至第一个字符串中，如果第二个字符串长度大于等于n，则不能以空字符结尾，函数返回第一个字符串
char *P854_Qusetion_7(char *ptr_1, char *ptr_2, int n)
{
    int i = 0;
    for (; i < n; i++)
    {
        ptr_1[i] = ptr_2[i];
    }
    if (strlen(ptr_2) >= n)
    {
        return ptr_1;
    }
    else
    {
        ptr_1[i] = '\0';
        return ptr_1;
    }
}

//编写函数，接受两个字符串指针，如果第二个包含第一个，则被返回第1个开始的地址，否则返回空
char *P854_Question_8(char *ptr_1, char *ptr_2)
{
    char *temp = ptr_2;
    char *temp_1 = ptr_1;

    while (*ptr_1 != '\0' and *ptr_2 != '\0')
    {
        if (*ptr_1 == *ptr_2)
        {
            if (ptr_1 == temp_1)
            {
                temp = ptr_2; //temp用来标记可能要作为返回的地址
            }

            ptr_1++;
            ptr_2++;
            if (*(ptr_1 + 1) == '\0')
            {
                return temp; //如果全部匹配成功则返回
            }
        }
        else
        {
            ptr_1 = temp_1; //确保总是从头部开始匹配
            ptr_2++;
        }
    }
}

//编写函数，把字符串的内容用其反序字符串代替
void *P855_Qusetion_9(char *ptr)
{
    char *rare = ptr;
    char *put = ptr;
    char temp;
    int n = strlen(ptr);

    while (*(rare + 1) != '\0')
    {
        rare++;
    }
    for (int i = 0; i < n / 2; i++)
    {
        temp = *ptr;
        *ptr = *rare;
        *rare = temp;
        ptr++;
        rare--;
    }
    puts(put);
}

//编写函数接受字符串作为参数，并删除字符串中的空格
void P855_Question_10(char *ptr)
{
    char *put = ptr;
    while (*ptr != '\0')
    {
        if (*ptr == ' ')
        {
            *ptr = *(ptr + 1);
        }
        else
        {
            ptr++;
        }
    }
    puts(put);
}

//读入10个字符的串或遇到EOF停止，该程序为用户提供有5个选项的菜单
//打印源字符串列表、以ASCII顺序打印字符串、按长度递增顺序打印字符串、按字符串中第一个单词的长度打印字符串、退出
//菜单能够循环使用
void P855_Question_11(void)
{
    //略
}

//编写程序，读取输入直到EOF，报告单词数，大写字母、小写字母、标点符号和数字字符
void P855_Question_12(void)
{
    char ch;
    char array[100];
    int i = 0;
    int num_digit = 0;
    int num_upper = 0;
    int num_lower = 0;
    int num_punct = 0;
    int num_alpha = 0;
    while ((ch = getchar()) != EOF and i < 100)
    {
        array[i++] = ch;
    }
    char *ptr = array;
    while (*(ptr + i) != '\0')
    {
        num_alpha += isalpha(*ptr);
        num_lower += islower(*ptr);
        num_upper += isupper(*ptr);
        num_punct += ispunct(*ptr);
        num_digit += isdigit(*ptr);
    }
    printf("%d,%d,%d,%d", num_digit, num_lower, num_punct, num_upper, num_alpha);
}

//编写程序，反序显示命令行参数的单词
//see you later -> later you see
void P855_Question_13(void)
{
    char array[] = "see you later";
    char brray[strlen(array)];

    char *btr = brray;
    char *kongge = brray;
    char *ptr = array;
    char *temp = array;

    while (*(ptr + 1) != '\0')
    {
        ptr++;
    }

    while (ptr != temp)
    {
        while (*(ptr - 1) != ' ' and ptr != temp)
        {
            ptr--;
        }
        strcat(btr, ptr);
        while (*(kongge + 1) != '\0')
        {
            kongge++;
        }
        if (ptr != temp)
        {
            *(kongge + 1) = ' ';
            *(kongge + 2) = '\0';
        }
        *(ptr - 1) = '\0';
        if (ptr != temp)
        {
            ptr--;
        }
    }
    puts(brray);
}

//编写程序计算幂，第一个参数是double，作为幂的底数，第二参数是整数，作为幂的指数
void P855_Question_14(double me, int zhi)
{
    double results = pow(me, zhi);
}

//使用字符分类函数实现atoi()函数，如果输入的字符串不是纯数字，则返回0
bool P855_Qusetion_15(char *ptr)
{
    while (*(ptr + 1) != '\0')
    {
        if (isalpha(*ptr))
            ;
        else
        {
            return false;
        }
    }
    return true;
}

//编写程序，读取直至文件结尾，然后把字符串打印出来，-p 按原样打印，-u把输入全部转换成大写，-i全部转换为小写
void P855_Question_16(void)
{
    char array[100];
    fgets(array, 100 - 1, stdin);
    char *ptr = array;
    char *temp = array;
    char a;
    a = getchar();
    switch (a)
    {
    case 'p':
        fputs(array, stdout);
        break;
    case 'u':
        while (*(ptr + 1) != '\0')
            toupper(*ptr++);
        fputs(array, stdout);
    case 'i':
        while (*(ptr + 1) != '\0')
            tolower(*ptr++);
        fputs(array, stdout);
    default:
        break;
    }
}

int main(void)
{
    P855_Question_13();
    system("pause");
    return 0;
}