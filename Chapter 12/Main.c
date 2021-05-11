#include "Head.h"

//哪些类别的变量可以成为他所在函数的局部变量
void P937_Question_1(void)
{
    //答：函数内部不用static声明的变量
}

//哪些变量在程序运行周期内一直存在
void P937_Question_2(void)
{
    //答：静态变量
}

//哪些类别的变量可以被多个文件使用，哪些仅限于一个文件中使用
void P937_Question_3(void)
{
    //答：非static的全局变量可以多个文件，static只能单个文件
}

//块作用域变量具有什么链接属性
void P937_Question_4(void)
{
    //答：块作用域变量具有内链接属性
}

//extern关键字有什么用途
void P937_Question_5(void)
{
    //答：引用式声明
}

//考虑下面两行代码，就输出的结果有何异同
void P937_Question_6(void)
{
    /*
    int *p1 = (int *)malloc(100 * sizeof(int));
    int *p1 = (int *)calloc(100, sizeof(int));
    */
    //后者将全部初始化为0
}

//下面的变量对哪些函数可见，是否有误？
void P937_Question_7(void)
{
    /*
    //文件1
    int daisy;
    int main(void)
    {
        int lily;
        ……
    }
    int petal()
    {
        extern int daisy,lily; 
    }

    //文件2
    extern int daisy;
    static int lily; 该行错误
    int rose;
    int stem()
    {
        int rose;
        ……;
    }
    void root()
    {
        ……
    }
*/
}

//下面的程序打印什么
void P938_Question_8(void)
{
    /*
    char color = 'B';
    void first(void);
    void second(void);
    int main()
    {
        extern char color;
        printf("color in main() is %c\n", color);
        first();
        printf("color in main() is %c\n", color);
        second();
        printf("color in main() is %c\n", color);
    }

    void first(void)
    {
        char color;
        color = 'R';
        printf("color in first() is %c\n", color);
    }

    void second(void)
    {
        color = 'G';
        printf("color in second() is %c\n", color);
    }
*/
    //答：输出为 B R B G G
}

//假设文件开始有以下声明
//static int plink;
//int value_ct(const int arr[], int value, int n);
void P938_Question_9(void)
{
    //a:以上声明表明程序员什么意图？
    //答：表明存在一个文件内的全局变量，一个不能被修改的数组

    //b:用const int value 和const int n分别替换后两个参数，是否对主调程序的值加强保护
    //因为是拷贝，所以并没有保护
}

//不使用全局变量，重写清单12.4
void P941_Question_1(void)
{
    /*
    void critic(void);
    int main(void)
    {
        int unsits=0;
        int *ptr = &unsits;
        printf("How many pounds to a firkin of butter?\n");
        scanf("%d",ptr);
        while(units!=56)
        critic(ptr);
        pritnf("You must have lookd it up!\n");
        return 0;
    }
    void critic(int * a)
    {
        printf("No luck,my friend. Try again\n");
        scanf("%d",a);
    }
*/
}

//P943_Question_2-P941_Uuestion_3：略

//循环中编写并测试一个函数，该函数返回它被调用的次数
int P943_Question_4(void)
{
    static int cishu = 0;
    cishu++;
    return cishu;
}

//编写程序，生成100个1~10范围内的随机数，并以降序排列，假设都是整数
void P943_Question_5(void)
{
    int i = 0;
    int n = 5;
    int array[100];
    int k = 0;
    int temp;

    srand((unsigned int)time(NULL));
    for (; i < 100; i++)
    {
        array[i] = rand() % 10 + 1;
    }

    for (int j = 0; j < 100; j++)
    {
        for (k = 1; k < 100 - j; k++)
        {
            if (array[j] < array[j + k])
            {
                temp = array[j];
                array[j] = array[j + k];
                array[j + k] = temp;
            }
        }
    }

    for (i = 0; i < 100; i++)
    {
        printf("%d ", array[i]);
        if ((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }
}

//编写程序，生成1000个1~10范围内的随机数，不用打印这些数字，仅打印数字出现的次数，用十个不同种子值运行，观察生成数字的值是是否相同
void P943_Question_6(void)
{
    int q = 0;
    srand((unsigned int)time(NULL));
    for (int i = 1; i <= 1000; i++)
    {
        int k = rand() % 10 + 1;
        if (k == 2)
        {
            q++;
        }
    }
    printf("%d", q);
}

//略
void P943_Question_7(void)
{
    //略
}

//按要求编写函数
void P944_Question_8(void)
{
    /*
    int * make_array(int a ,int value)
    {
        int *ptr  = (int *)malloc(a*sizeof(int));
        return ptr;
    }
*/

    /*
    void show_array(const int ar[],int n)
    {
        for(int i = 0;i<n i++)
        {
            printf("%d ",ar[i]);
            if(i%8==0)
            {
                printf("\n");
            }
        }
    }
*/
    /*
    int *pa;
    int size;
    int value;
    printf("Enter the number of elements: ");
    while (scanf("%d", &size) == 1 and size > 0)
    {
        printf("Enter the initialization value: ");
        scanf("%d", &value);
        pa = make_array(size, value);
        if (pa)
        {
            show_array(pa, size);
            free(pa);
        }
        printf("Enter the number of elements (<1 to quit): ");
    }
    printf("Done.\n");
*/
}

//编写函数，询问用户输入多少单词，接受用户单词，并显示出来
void P945_Question_9(void)
{
    int size = 0;
    printf("How many words do you wish enter ?");
    scanf("%d", &size);
    printf("Enter %d words now\n", size);
    getchar();
    char array[size][20];
    char *arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = array[i];
        scanf("%s", arr[i]);
        getchar();
    }
    for (int i = 0; i < size; i++)
    {
        puts(arr[i]);
    }
}

int main(void)
{
    int array[2][2] = {1, 2, 3, 4};
    int *ptr[2];
    int(*btr)[2] = array;
    ptr[0] = array[0];
    printf("%d\n", *(ptr[0] + 1));
    printf("%d", *(*(btr)+1));

    printf("\n");
    system("pause");
    return 0;
}
