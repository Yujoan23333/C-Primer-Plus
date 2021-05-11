#include "Head.h"

//下面代码的结果是什么？这些代码是否有效代码
void P1291_Question_1(void)
{
    /*
    a:
    #define FPM 5280
    int dist = FPM * mile;
    */
    //答：有效

    /*
    b:
    #define FEET 4
    #define POD FEET+FEET
    plort = FEET * POD
    */
    //答：4 * 4 + 4 = 20

    /*
    c:
    #define SIX = 6  错误
    nex SIX;
    */

    /*
    d: 
    #define NEW(X) X+5
    y = NEW(y)
    berg = NEW(berg) *lob
    est = NEW(berg)/NEW(y);
    nilp = lob *NEW(-berg);
    */
    //答：y = y + 5 , berg+5*lob, est = berg+5/y+5, nilp = lob * -x + 5
}

//修改上一题d中的定义，使其更可靠
void P1292_Question_2(void)
{
#define NEW(X) (X + 5)
    int y, berg, est, lob, nilp;
    y = NEW(y);
    berg = NEW(berg) * lob;
    est = NEW(berg) / NEW(y);
    nilp = lob * NEW(-berg);
}

//定义宏函数，反回两者最小值
void P1292_Question_3(void)
{
#define Min(X, Y) X > Y ? Y : X
    int a = 2, b = 3;
    printf("%d", Min(2, 3));
}

//定义宏函数，如果X为偶数且大于Y，则返回1
void P1292_Question_4(void)
{
#define EVEN_GT(X, Y) X % 2 == 0 and X > Y ? 1 : 0
}

//定义宏函数，打印两个表达式及其值，例如若参数为3+4和4*12，则打印3+4 is 7 and 4 * 12 is 48
void P1292_Question_5(void)
{
#define dayin(X, Y) printf("The sum is %d The ji is %d", X + Y, X * Y);
}

//创建#define指令完成任务
void P1292_Question_6(void)
{
    /*
a:
//创建一个值为25的命名常量}
#define value 25

b:
//SPACE表示空格字符
#define SPACE ' '

c:
//PS()代表打印空格字符
#define PS() printf("%c", ' ');

d:
//BIG(X)代表X的值加3
#define BIG(X) X = X + 3

e:
//SUMSQ(X,Y)代表X和Y的平方和
#define SUMSQ(X, Y) POW(X) + POW(Y)
*/
}

//定义宏，按格式打印
void P1292_Question_7(void)
{
    //#define dayin(X, Y, Z) printf("name: %s;value:%d;address:%d", X, Y, Z);
}

//如何不移除一块代码，而跳过
void P1292_Question_8(void)
{
    //用断言语句，或设立条件语句
}

//编写一段代码，如果定了PR_DATE宏，则打印预处理日期
void P1292_Question_9(void)
{
#ifdef PR_DATE
    printf("The day is %s", __DATE__);
#endif
}

//三种内联函数有何不同
void P1292_Question_10(void)
{
    //是否内联仍取决于编译器的实现，短语句内联效果好，但长语句内联可能没有函数调用好
}

//创建一个使用泛型选择表达式的宏，如果宏函数是_Bool类型，对"boolean"求值“not boolean"
void P1293_Question_11(void)
{
#define MY(x) _Generic(x, float : 2.0, double : 3.54, default : 1)
    int i = 0;
    bool flag = false;
    double a = 2.0;
    printf("%f\n", MY(a));
}

//程序找错
void P1293_Question_12(int argc, char argv[])
{
    //printf("The square root of %f is %f\n", argv[1], sqrt(argv[1]));
    //说明符错误 类型错误
}

//假设scores是内涵1000个int类型元素的数组，要按降序排序该数组中的值，假设你使用qsort()和comp()比较函数
int comp(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}
void P1293_Question_13(void)
{
    int array[5] = {2, 1, 3, 5, 4};
    int *ptr = array;
    qsort(ptr, 5, sizeof(int), comp);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
}

//假设有两个数组分别内含100个double和300个double
//编写函数调用实现后者的前100个拷贝到前者中
//编写函数调用实现后者的后100个拷贝到前者中
void P1293_Question_14(void)
{
    double array_1[100];
    double array_2[300];
    double *ptr = array_2;
    for (int i = 0; i < 200; i++)
    {
        ptr++;
    }
    memcpy(array_1, array_2, 100 * sizeof(double));
    memcpy(array_1, ptr, 100 * sizeof(double));
}

//开发一个包含你需要的预处理器定义的头文件
void P1294_Question_1(void)
{
    //已在Head.h中
}

//利用宏计算调和平均数
void P1294_Question_2(void)
{
#define tiaohe(X, Y) 1 / ((1 / X + 1 / Y) / 2)
}

//极坐标数据转换
void P1294_Question_3(void)
{
    struct xiangliang
    {
        float x;
        float y;
        int jiaodu;
        int r;
    };

    struct xiangliang A;
    A.x = A.r * cos(A.jiaodu);
    A.y = A.r * sin(A.jiaodu);
}

void P1295_Question_4(void)
{
    int i = 0;
    double a = ((double)clock() - (double)clock()) / CLOCKS_PER_SEC;
    for (;i < a; i++)
    {
    }
    printf("%d", i);
}

//编写函数，模拟抽奖
void P1295_Question_5()
{
    int array[5] = {1, 2, 3, 4, 5};
    int flag[5] = {0};
    int size = 5;
    int score = 2;
    for (int i = 0; i < score; i++)
    {
        srand((unsigned int)time(NULL));
        int j = rand() % 5;
        if (flag[j] != 0)
        {
            printf("%d ", array[j]);
        }
        flag[j] = 0;
    }
}

//P1295_Question_6 略

//完善程序
void show_array(const double ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%f", ar[i]);
    }
}

double *new_d_array(int n, double array[])
{
    double *ptr = (double *)malloc(n * sizeof(double));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = array[i];
    }
    return ptr;
}
int P1296_Qusetion_7(void)
{
    double *p1;
    double *p2;
    // p1 = new_d_array(5, 1.2, 2.3, 3.4, 4.5, 5.6);
    // p2 = new_d_array(4, 100.0, 20.00, 8.08, -1890.0);
    show_array(p1, 5);
    show_array(p2, 4);
    free(p1);
    free(p2);
    return 0;
}

int main(void)
{
    system("pause");
    return 0;
}
