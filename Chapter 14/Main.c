#include "Head.h"

//下面的结构模板有什么问题
void P1123_Question_1(void)
{
    /*
    structure{
    char itable;
    int num[20];
    char *togs;
    }
*/
    //答：没有结构名 *togs有可能指向错误的位置
}

//下面程序的输出是什么
void P1123_Question_2(void)
{
    struct house
    {
        float sqft;
        int romms;
        int stories;
        char address[40];
    };
    struct house fruzt = {1560.0, 6, 1, "22 Spiffo Road"};
    struct house *sign;
    sign = &fruzt;
    printf("%d %d\n", fruzt.romms, sign->stories);
    printf("%s\n", fruzt.address);
    printf("%c %c\n", sign->address[3], fruzt.address[4]);
    //答：输出为6 1 22 Spiffo Road S p
}

//设计一个结构模板存储一个月份名，该月份名的三个字母缩写、月份名的天数以及月份号
void P1124_Qusetion_3(void)
{
    struct Month
    {
        char Month_name[10];
        char Month_nickname[5];
        int Month_day;
        int Month_number;
    };
}

//定义一个数组，内含12个结构（上一题的类型），并初始化为一个年份
void P1124_Question_4(void)
{
    struct Month
    {
        char Month_name[10];
        char Month_nickname[5];
        int Month_day;
        int Month_number;
    } Year[12];

    char *month[12] = {"Modnay", "Tuesday", "..."}; //省略
    char *nickname[12] = {"Mon", "Tue", "..."};     //省略

    for (int i = 0; i < 12; i++)
    {
        Year[i].Month_day = 30 + (i + 1) % 2;
        Year[i].Month_number = i + 1;
        strcpy(Year[i].Month_name, month[i]);
        strcpy(Year[i].Month_nickname, nickname[i]);
    }
}

//编写函数，用户提供月份号，函数返回一年中到该月为止（包括该月）的总天数，假设在所有函数的外部声明了第三题的结构模板和一个该类型的结构的数组
int P1124_Question_5(int number)
{
    struct Month
    {
        char Month_name[10];
        char Month_nickname[5];
        int Month_day;
        int Month_number;
    } Year[12];
    int sum = 0;
    for (int i = 0; i < number; i++)
    {
        sum += Year[i].Month_number;
    }
    return sum;
}

//假设有下面的typedef，声明一个含10个指定结构的数组，然后单独给成员赋值（或等价字符串），使第3个元素表示一个焦距长度有500mm，孔径为f/2.0的Remarkata镜头
//用待定初始化器赋值
void P1124_Question_6(void)
{
    typedef struct lens
    {
        float foclen;
        float fstop;
        char brand[30];
    } LENS;

    LENS LEN[10];
    LEN->foclen = 500;
    LEN->fstop = 2.0;
    strcpy(LEN[2].brand, "Remarkata");

    LENS len[10] = {500, 2.0, "Remarkata"};
}

//程序分析
void P1125_Question_7(void)
{
    struct name
    {
        char first[20];
        char last[20];
    };
    struct bem
    {
        int limbs;
        struct name title;
        char type[30];
    };
    struct bem *pb;
    struct bem deb = {6, {"Berbnazel", "Gwolkapwolk"}, "Arcturan"};
    pb = &deb;

    /*
    下面的语句分别打印什么
    a: printf("%d\n",deb.limbs);
    答: 6
    b: printf("%s\n",pb->type);
    答: Arcturan
    c: printf("%s\n",pb->type+2);
    答：cturan
*/

    //如何用结构表示法（两种）表示"Gwolkapwolk"?
    printf("%s\n", pb->title.last);
    printf("%s\n", deb.title.last);

    //编写函数，以bem结构的地址作为参数，并以下面的形式输出内容(Berbnazel Gwolkapwolk is a 6-limbed Arcturan)
    /*
        void hanshu(struct bem * ptr)
        {
            printf("%s %s is a %d -limbed %s",ptr->title.first,ptr->title.last,ptr->limbs,ptr->type);
        }
    */
}

//考虑以下的声明
void P1126_Question_8(void)
{
    struct fullname
    {
        char fname[20];
        char lname[20];
    };
    struct bard
    {
        struct fullname name;
        int born;
        int died;
    };
    struct bard willie;
    struct bard *pt = &willie;

    //以下内容根据顺序书写
    willie.born;
    pt->born;
    scanf("%d", willie.born);
    scanf("%d", pt->born);
    scanf("%s", willie.name.lname);
    scanf("%s", pt->name.lname);
    char ch = willie.name.lname[3];
    int sum = strlen(willie.name.fname) + strlen(willie.name.lname);
}

//定义模板存储：汽车名、马力、轴距、出厂年份，用car标记
void P1127_Question_9(void)
{
    struct car
    {
        char name[50];
        int mali;
        float zhouju;
        char time[50];
    } Car;
}

//假设有以下结构
void P1127_Question_10(void)
{
    struct gas
    {
        float distance;
        float gals;
        float mpg;
    };
    //设计函数，接受struct gas类型的参数，假设传入结构包含distance 和 gals信息，该函数为mpg成员计算正确的值，并将结果返回该结构
    /*
    struct gas hanshu(struct gas)
    {
        gas.mpg=gas.distance / gas.gals;
        return gas;
    }
*/

    //设计函数，接受struct gas类型的参数，假设传入结构包含distance 和 gals信息，该函数为mpg成员计算正确的值，并将结果返回该结构
    /*
    void hanshu(struct gas *ptr)
    {
        ptr->mpg=ptr->distance / ptr->gals;
    }
*/
}

//声明一个标记为choices的枚举，把枚举常量no、yes和maybe分别设置为0、1、2
void P1128_Qusetion_11(void)
{
    enum choices
    {
        no,
        yes,
        maybe
    };
}

//声明一个指向函数的指针，该函数返回指向char的指针，接受一个指向char的指针和一个char类型的值
char *P1128_Question_12(char *ptr, char ch)
{
    char *(*btr)(char *qtr, char ch);
    btr = P1128_Question_12;
}

//声明4个函数，并初始化一个指向这些函数的指针数组，每个函数接受两个double类型的参数，返回double类型的值
char *P1128_Question_13(double a, double b)
{
    char *(*ptr[5])(double a, double b);
    ptr[0] = P1128_Question_13;
    ptr[1] = P1128_Question_13;
    /* …… */
}

//重复编程5，用月份名的拼写代替月份号
int P1129_Question_1(char *yuefenming)
{
    struct Month
    {
        char Month_name[10];
        char Month_nickname[5];
        int Month_day;
        int Month_number;
    } Year[12];
    int sum = 0;
    int i = 0;
    while (strcmp(Year[i++].Month_name, yuefenming))
    {
        sum += Year[i].Month_number;
    }
    return sum;
}

//编写一个函数，提示用户输入年、月、日。月份可以是月份号，月份名或月份名缩写。然后返回一年中到这一天（包括这一天）的总日子
int P1129_Question_2(void)
{
    struct Month
    {
        char Month_name[10];
        int Month_day;
        int Month_number;
    } Year[12];
    int sum = 0;
    printf("Enter the number of month and days\n");
    int number = 0;
    int days = 0;
    scanf("%d %d", &number, &days);
    for (int i = 0; i < number - 1; i++)
    {
        sum += Year[i].Month_number;
    }
    sum += days;
    return sum;
}

//略
void P1129_Question_3(void)
{
}

//编写程序，创建两个成员的模板
void P1129_Question_4(void)
{
    struct Name
    {
        char last_name[20];
        char middle_name[20];
        char first_name[20];
    };

    typedef struct People
    {
        int number_insurance;
        struct Name formation;
    } people;

    people array[5];
    strcpy(array[0].formation.first_name, "Dribble");
    strcpy(array[0].formation.middle_name, "Flossie");
    strcpy(array[0].formation.last_name, "M");
    array[0].number_insurance = 302039823;

    /*
    P1129_Question_4(array[0].formation.first_name,array[0].formation.middle_name,array[0].formation.last_name,array[0].number_insurance);
    */

    /*
    people *ptr =people[0];
    P1129_Question_4(people[0]);
   */
}

//编写程序，满足要求
void P1129_Question_5(void)
{
    //a: 外部定义模板name，一个字符串存储名，另一个存储姓
    //b: 定义模板student，一个name类型结构，一个grade数组储存3个浮点型分数，一个变量储存3个分数平均数
    //c: 声明CSIZE(CSIZE=4)个student类型结构数组，并初始化名字部分
    //d: 以交互的方式获取每个学生成绩，提示用户输入姓名和分数，分数储存到grade数组相应的结构中
    //e: 计算平均分，然后给合适的成员
    //f: 打印每个结构的信息
    //g: 打印班级平均分，即所有结构的数值成员的平均值
    struct NAME
    {
        char ming[40];
        char xing[40];
    };

    struct STUDENT
    {
        struct NAME name;
        float grade[3];
        float average;
    };

    struct STUDENT CSIZE[4] = {{"li", "ni"}, {"zhang", "jun"}, {"wang", "lei"}, {"yang", "mi"}};

    int i = 0;
    float sum = 0;
    int k = 0;
    do
    {
        printf("Enter the xing of name\n");
        char *ptr = NULL;
        scanf("%s", ptr);
        for (; i < 4; i++)
        {
            if (strcmp(ptr, CSIZE[i].name.xing))
            {
                printf("Enter the score\n");
                for (int j = 0; j < 3; j++)
                {
                    scanf("%f", CSIZE[i].grade[j]);
                    sum += CSIZE[i].grade[j];
                }
                break;
            }
        }
        CSIZE[i - 1].average = sum / 3;
        sum = 0;
    } while (k++ < 4);

    float sum_avarage = 0;
    for (int i = 0; i < 4; i++)
    {
        sum_avarage += CSIZE[i].average;
    }
    sum_avarage /= 4;
}

//P1129_Question_6-7略

//P1131_Question_8-9
void P1131_Question_89(void)
{
    struct SIT
    {
        int number;         //座位编号
        bool flag;          //座位是否被预定
        char name_xing[30]; //预订人姓
        char name_ming[30]; //预订人名
    };

    struct AIR
    {
        int number;
        struct SIT sit[12];
    } air[4];

    int j = 0;
    char bh;
    printf("Select the airline\n");
    printf("a) 102\n");
    printf("b) 311\n");
    printf("c) 444\n");
    printf("d) 519\n");
    printf("e) exit\n");
    bh = getchar();
    switch (bh)
    {
    case 'a':
        j = 0;
        break;
    case 'b':
        j = 1;
        break;
    case 'c':
        j = 2;
        break;
    case 'd':
        j = 3;
        break;
    case 'e':
        exit(EXIT_SUCCESS);
        break;
    default:
        break;
    }

    printf("To choose a function, enter its letter label:\n");
    printf("a) Show number of empty seats\n");
    printf("b) Show list of empty seats\n");
    printf("c) Show alphabetical list of seats\n");
    printf("d) Assign a customer to a seat assingment\n");
    printf("e) Delete a seat assignment\n");
    printf("f) Quit\n");

    struct AIR *ptr = &air[j];
    char ch;
    int number = 0;
    while ((ch = getchar()) != 'f')
    {
        switch (ch)
        {
        case 'a':
            for (int i = 0; i < 12; i++)
            {
                if (air[j].sit[i].flag == 0)
                {
                    printf("%d", air[j].sit[i].number);
                }
            }
            break;
        case 'b':
            for (int i = 0; i < 12; i++)
            {
                if (air[j].sit[i].flag == 0)
                {
                    printf("%d ", air[j].sit[i].number);
                }
            }
            printf(" is empty\n");
            break;
        case 'c':
            for (int k = 0; k < 12; k++)
            {
                for (int i = 0; i < 12 - k; i++)
                {
                    if (ptr->sit->name_xing[0] > (ptr + i)->sit->name_xing[0])
                    {
                        ptr = ptr + i;
                    }
                }
                printf("%s", ptr->sit->name_xing);
                ptr = ptr + 1;
            }
            break;
        case 'd':
            printf("Enter the seat number\n");
            scanf("%d", number);
            air[j].sit[number].flag = 1;
            break;
        case 'e':
            printf("Enter the seat number\n");
            scanf("%d", number);
            air[j].sit[number].flag = 0;
            break;
        default:
            break;
        }
    }
}

//编写程序，通过函数指针数组实现菜单。例如选择菜单中的a，将激活由该数组第1个元素指向的函数
char *P1132_Question_10(char *atr, char ch)
{
    char *(*ptr[5])(char *atr, char ch);
    ptr[0] = P1132_Question_10;
    ptr[1] = P1132_Question_10;
    ptr[2] = P1132_Question_10;
    ptr[3] = P1132_Question_10;
    ptr[4] = P1132_Question_10;
}

//编写名为transform()的函数，接受4个参数，内含double类型数据的源数组名、内含double类型的目标数组名、一个表示数组元素个数的int类型参数、函数名（等价的函数指针）
//transform函数应该把指定函数应用于源数组的每个元素，并把返回值储存在目标数组中；例如：transform(source,target,100,sin)
void transform(double source[], double target[], int SIZE, double (*ptr)(double a))
{
    for (int i = 0; i < SIZE; i++)
    {
        target[i] = ptr(source[i]);
    }
}

int main(void)
{
    //P1129_Question_5();
    system("pause");
}