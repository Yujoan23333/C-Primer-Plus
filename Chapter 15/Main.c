#include "Head.h"

//把下列十进制转换为二进制
void P1188_Question_1(void)
{
a:
    3;
//答：11
b:
    13;
//答：1101
c:
    59;
//答：111011
d:
    119;
    //答：1110111
}

//将下列的二进制转换为十进制、八进制和十六进制的形式
void P1188_Question_2(void)
{
a:
    00010101;
//答：21、25、15
b:
    01010101;
//答：85、125、55
c:
    01001100;
//答：12+64=76、114、4C
d:
    10011101;
    //答：128+16+8+4+1=144+13=157、235、9D
}

//对下面的表达式求值，假设每个值都为8位
void P1188_Question_3(void)
{
a:
    ~3;
    //答：11111100
b:
    3 & 6;
    //答：00000011 & 00000110 = 00000010
c:
    3 | 6;
    //答：00000011 | 00000110 = 00001001
d:
    1 | 6;
    //答：00000001 | 00000110 = 00000111
e:
    3 ^ 6;
    //答：00000011 ^ 00000110 = 00000101
f:
    7 >> 1;
    //答：00000111 = 10000011
g:
    7 << 2;
    //答：00000111 = 00011100
}

//对下面的表达式求值，假设每个值都为8位
void P1188_Question_4(void)
{
a:
    ~0;
    //答：11111111
b:
    !0;
    //答：1
c:
    2 & 4;
    //答：00000010 & 00000011 = 00000010
d:
    2 && 4;
    //答：1
e:
    2 | 4;
    //答：00000010 | 00000100 = 00000110
f:
    2 || 4;
    //答：1
g:
    5 << 3;
    //答：00000101 << 00101000
}

//因为ASCII码只使用最后7位，所以有时需要掩码关闭其他位，其相应的二进制掩码是多少？分别用八进制、十进制和十六进制表示
void P1188_Question_5(void)
{
    // ASCII & 01111111;
    // ASCII & 177;
    // ASCII & 64+32+16+8+4+2+1;
    // ASCII & 7F;
}

//说法是否正确
void P1188_Question_6(void)
{
    //前者是对的、后者是错的 但都依赖于编译器实现
}

//创建位字段存储模板
void P1190_Question_7(void)
{
    struct
    {
        unsigned int shuliang : 2;
        unsigned int : 1;
        unsigned int CD : 2;
        unsigned int : 1;
        unsigned int qudongqi : 2;

    } ziduan;
}

//创建位字段存储模板
void P1190_Question_8(void)
{
    struct
    {
        unsigned int qudongqi : 2;
        unsigned int : 1;
        unsigned int CD : 2;
        unsigned int : 1;
        unsigned int shuliang : 2;

    } ziduan;
}

//编写函数，将二进制字符串转换为数值 !书中25为错误
void P1191_Question_1(char *pbin)
{
    int sum = 0;
    for (int i = 0; i < 8; i++)
    {
        sum += (*(pbin + i) - 48) * pow(2, (7 - i));
    }
    printf("The sum is %d\n", sum);
}

//编写程序，读取两个二进制字符串，并使用~、&、|、^运算符，并以二进制字符串打印结果
void P1191_Question_2(void)
{
    unsigned char array[20] = "01001001";
    char brray[20] = "10000101";
    char crray[20];

    char *ptr = NULL;

    ptr = array;
    while (*ptr != '\0')
    {
        *ptr = ~(*(ptr - 48)) + 48;
        printf("%c", (~(*ptr - 48)) + 48);
        ptr++;
    }
    puts(array);

    for (int i = 0; i < strlen(array); i++)
    {
        crray[i] = 48 + (array[i] - 48) & (brray[i] - 48);
    }
    puts(crray);

    for (int i = 0; i < strlen(array); i++)
    {
        crray[i] = 48 + (array[i] - 48) | (brray[i] - 48);
    }
    puts(crray);

    for (int i = 0; i < strlen(array); i++)
    {
        crray[i] = 48 + (array[i] - 48) ^ (brray[i] - 48);
    }
    puts(crray);
}

//编写函数，接受int类型的参数，返回该参数中打开位的数量
void P1191_Question_3(int a)
{
    int *array = (int *)calloc(8, sizeof(int));

    int quantity = 0;

    for (int i = 0; i < 8; i++, a = a >> 1) //最高支持32位
    {
        array[i] = a & 1;
    }
    for (int i = 0; i < 8; i++)
    {
        if (array[i])
        {
            quantity++;
        }
    }
    printf("%d ", quantity);
}

//编写程序，接受两个int类型的参数，一个是值，一个是位的位置，如果指定位的位置为1，则返回1，否则返回0
bool P1191_Question_4(int value, int location)
{
    for (int i = 0; i < location; i++)
    {
        value = value >> 1;
    }
    if (value & 1 == 1)
    {
        return true;
    }
    return false;
}

//编写函数，把unsigned int类型值中的所有位向左旋转指定数量的位（把高阶位放入低阶位）
void P1191_Question_5(void)
{
    /*
    unsigned int a = 5;
    int *array = (int *)calloc(8, sizeof(int));
    for (int i = 0; i < 8; i++, a = a >> 1) //最高支持64位
    {
        array[i] = a & 1;
    }
    for (int i = 7; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
    */
    unsigned int a = 5;
    for (int i = 0; i < 4; i++)
    {
        if ((a & 8) == 8)
        {
            a = a << 1;
            a = a | 1;
            //printf("%d ", a);
        }
        else
        {
            a = a << 1;
            printf("%d\n", a);
        }
    }

    int *array = (int *)calloc(8, sizeof(int));
    for (int i = 0; i < 8; i++, a = a >> 1) //最高支持64位
    {
        array[i] = a & 1;
    }
    for (int i = 7; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }
}

//设计位字段储存数据并打印
void P1191_Question_6_7(void)
{
    struct
    {
        unsigned long ID : 8;
        unsigned long SIZE : 7;
        unsigned long REGULATION : 2;
        unsigned long JIACU : 1;
        unsigned long XIETI : 1;
    } ziduan;
    ziduan.ID = 1;
    ziduan.SIZE = 12;
    ziduan.REGULATION = 0;
    ziduan.JIACU = 0;
    ziduan.XIETI = 0;

    char array_REGULATION[10] = "0";
    char array_JIACU[10] = "0";
    char array_XIETI[10] = "0";

    char ch;
    while ((ch = getchar()) != 'q')
    {
        printf("ID SIZE ALIGMENT B I\n");
        if (ziduan.REGULATION == 0)
        {
            strcpy(array_REGULATION, "left");
        }
        else if (ziduan.REGULATION == 1)
        {
            strcpy(array_REGULATION, "middle");
        }
        else
        {
            strcpy(array_REGULATION, "right");
        }
        if (ziduan.JIACU)
        {
            strcpy(array_JIACU, "on");
        }
        else
        {
            strcpy(array_JIACU, "off");
        }

        if (ziduan.XIETI)
        {
            strcpy(array_XIETI, "on");
        }
        else
        {
            strcpy(array_XIETI, "off");
        }

        printf("%d", ziduan.ID);
        printf("%4d   ", ziduan.SIZE);
        printf("%s  ", array_REGULATION);
        printf("%s  ", array_JIACU);
        printf("%s", array_XIETI);

        printf("f)change font   s)change size   a)change alignment\n");
        printf("b)toggle bold   i)toggle italic u)change undermine\n");
        printf("f)quit\n");

        ch = getchar();
        switch (ch)
        {
        case 'f':
            printf("Enter the new font\n");
            int temp;
            scanf("%d", &temp);
            if (temp >= 255)
            {
                printf("Over the line\n");
                exit(EXIT_FAILURE);
            }
            ziduan.ID = temp;
            break;
        case 's':
            printf("Enter the new size\n");
            scanf("%d", &temp);
            if (temp >= 128)
            {
                printf("Over the line\n");
                exit(EXIT_FAILURE);
            }
            ziduan.SIZE = temp;
            break;
        case 'a':
            printf("Enter the new REGULATION\n");
            scanf("%d", &temp);
            if (temp >= 4)
            {
                printf("Over the line\n");
                exit(EXIT_FAILURE);
            }
            ziduan.REGULATION = temp;
            break;
        case 'b':
            printf("Enter the new JIACU\n");
            scanf("%d", &temp);
            if (temp >= 2)
            {
                printf("Over the line\n");
                exit(EXIT_FAILURE);
            }
            ziduan.JIACU = temp;
            break;
        case 'u':
            printf("Enter the new XIETI\n");
            scanf("%d", &temp);
            if (temp >= 2)
            {
                printf("Over the line\n");
                exit(EXIT_FAILURE);
            }
            ziduan.XIETI = temp;
            break;
        default:
            break;
        }
    }
}

int main(void)
{
    P1191_Question_6();
    system("pause");
}