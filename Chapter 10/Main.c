#include "Head.h"

//下面程序将打印什么内容
void P729_Question_1(void)
{
    int ref[] = {8, 4, 0, 2};
    int *ptr;
    int index;
    for (index = 0, ptr = ref; index < 4; index++, ptr++)
        printf("%d%d\n", ref[index], *ptr);
    //答：将打印88440022
}

//第一题中，ref有多少个元素
void P729_Question_2(void)
{
    //答：4个元素
}

//第一题中，ref的地址是什么？ref+1是什么意思？++ref指向什么
void P729_Question_3(void)
{
    //答：ref的地址是数组的首地址，ref+1为指向4，++ref为4
}

//在下面的代码中，*ptr和*(ptr+2)的值分别是什么
void P729_Question_4(void)
{
    /*
    int *ptr;
    int torf[2][2]={12,14,16};
    ptr=torf[0];
*/
    //答：*ptr = 12
    //    *(ptr+2)=16

    /*
    int *ptr;
    int fort[2][2]={{12},{14,16}};
    ptr = fort[0];
    //答：*ptr = 12
    //    *(ptr+2)=14
*/
}

//在下面的代码中，**ptr和**(ptr+1)的值分别是什么
void P730_Question_5(void)
{
    /*
    int (*ptr)[2];
    int torf[2][2]={12,14,16};
    ptr = torf;
    答：**ptr = 12，**(ptr+1)=16
*/

    /*
    int (*ptr)[2];
    int fort[2][2]={{12},{14,16}};
    ptr = fort;
    答：**ptr = 12，**(ptr+1)=14
*/
}

//编程题
void P730_Question_6(void)
{
    int grid[30][100];
    /*
    用1种写法表示grid[22][56]
    答：gird[22][56];
*/

    /*
    用2种写法表示grid[22][0]
    答：gird[22][56];
        int *(ptr)[100] = gird;
        *(*(ptr+21)+55)
*/

    /*
    用3种写法表示grid[0][0]
    答：int (*ptr)[100] =gird;
        **ptr;
        gird[0][0]
        *(*(ptr+0)+0)
*/
}

//正确声明以下变量
void P731_Qusetion_7(void)
{
    //digits是一个内含10个int类型值的数组
    int digits[10];
    //rates是一个内含6个float类型值的数组
    float rate[6];
    //mat是一个内含3个元素的数组，每个元素都内含五个整数数组
    int mat[3][5];
    //psa是一个内含20个元素的数组，每个元素都是指向int的指针
    int *psa[20];
    //pstr是一个指向数组的指针，该数组内含20个char类型的值
}

void P731_Qusetion_8(void)
{
    //声明一个内含6个int类型的数组，并初始化各元素为1、2、4、8、16、32
    int array[6] = {1, 2, 4, 8, 16, 32};
    //用数组表示法表示array的第三个元素
    array[2];
    //声明一个内含100个int类型值的数组，并初始化最后一个为-1
    int arrays[100];
    arrays[99] = -1;
    //声明一个内含100个int类型值的数组，并初始化下标为5、10、11、12、3的元素为101
    int arrayss[100];
    arrayss[5] = arrayss[10] = arrayss[12] = arrayss[11] = arrayss[3] = 101;
}

//内含10个元素的数组下标范围
void P731_Question_9(void)
{
    //答：0-9
}

//判断是否有效
void P731_Question_10(void)
{
    float rootbeer[10], things[10][5], *pf, value = 2.2;
    int i = 3;
    //rootbeer[2]=value 答：有效
    //sacnf("%f",&rootbeer) 答：无效
    //rootbeer=value 答：无效
    //printf("%f",rootbeer) 答：无效
    //things[4][4]=rootbeer[3] 答：有效
    //things[5]=rootbeer 答：无效
    //pf = value 答：有效
    //pf = rootbeer 答：有效
}

//声明一个800X600的int类型数组
void P732_Question_11(void)
{
    int array[800][600];
}

void P732_Question_12(void)
{
    double trots[20];
    short clops[10][30];
    long shots[5][10][15];

    //分别以传统和变长数组为参数的方式编写处理trots数组的原型和调用
    /*
    void trots(int i,trots[i]); trots(trots);
    void trots(trors[20]); trots(trots);
*/

    //分别以传统和变长数组为参数的方式编写处理clops数组的原型和调用
    /*
    void clops(int i,int j,trots[i][j]); clops(clops);
    void clops(clops[10][30]); clpos(clops);
*/

    //分别以传统和变长数组为参数的方式编写处理shots数组的原型和调用
    /*
    void shots(int i,int j,int k,shots[i][j][k]); shots(trots);
    void shots(trors[5][10][15]); shots(shots);
*/
}

void P732_Question_13(void)
{
    void show(const double ar[], int n);
    void show2(const double ar2[][3], int n);
    //编写函数调用，把一个内含8.3.9和2的字面量传递给show()函数
    /*
    const double abb[4]={8,3,9,2};
    show(abb,4);
*/
    //编写函数调用，把一个2行3列的字面量（8、3、9作为第一行，5、4、1作为第二行）传递给show2()函数
    /*
    const double abb[2][3]={{8,3,9},{5,4,1}};
    show2(abb,2);
*/
}

//改写程序，使用指针计算
void P734_Question_1(void)
{
    //略
}

//编写程序，初始化double类型的数组，然后把数组拷贝至3个其他数组中，（在main()中声明这四个数组）。使用带数组表示法的函数进行第一份拷贝
//使用带指针表示法和指针递增的函数进行第二次拷贝，把目标数组名、原数组名和待拷贝元素个数作为前两个函数的参数。
//第三个函数以目标数组名、源数组名和指向源数组最后一个元素后面的元素的指针
void P734_Question_2(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double results[5];

    /*
    void copy_arr(double results[5], double source[5])
    {
        for (int i = 0; i < 5; i++)
            results[i] = source[i];
    }

    void copy_ptr(double results[5], double source[5], int i)
    {
        double *ptr = source;
        for (int i = 0; i < 5; i++)
        {
            results[i] = *(ptr + i);
        }
    }
    
    void copy_ptrs(double results[5], double source[5], float *ptr)
    {
        ptr--;
        for (int i = 0; i < 5; ptr--)
        {
            results[4 - i] = *ptr
        }
    }
*/
}

//编写函数，返回储存在int类型数组中的最大值
int P734_Question_3(int *ptr, int n)
{
    int value_max = *ptr;
    ptr++;
    for (int i = 0; i < n - 1; i++, ptr++)
    {
        if (value_max < *ptr)
        {
            value_max = *ptr;
        }
    }
    return value_max;
}

//编写函数，返回储存在double数组中最大值的下标
int P734_Question_4(double *ptr, int n)
{
    int value_max = *ptr;
    int biao = 0;
    for (int i = 0; i < n - 1; i++, ptr++)
    {
        if (value_max < *ptr)
        {
            value_max = *ptr;
            biao = i;
        }
    }
    return biao;
}

//编写函数，返回double数组中最大值和最小值的差值
double P734_Question_5(const double *ptr, int n)
{
    const double *temp = ptr;
    double value_max = *ptr;
    double value_min = *ptr;
    ptr++;
    for (int i = 0; i < n - 1; i++, ptr++)
    {
        if (value_max < *ptr)
        {
            value_max = *ptr;
        }
    }
    ptr = temp;
    ptr++;
    for (int i = 0; i < n - 1; i++, ptr++)
    {
        if (value_min > *ptr)
        {
            value_min = *ptr;
        }
    }
    double result = value_max - value_min;
    return result;
}

//编写函数，double类型数组倒序排列
double P735_Question_6(double *ptr, int n)
{
    double temp = 0;
    for (int i = 0; i < n / 2; i++)
    {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + (n - 1 - i));
        *(ptr + (n - 1 - i)) = temp;
    }
}

//初始化double二维数组，使用拷贝的方式拷贝到另一个数组中
void P735_Question_7(void)
{
    double array[2][2] = {1.1, 2.2, 3.3, 4.4};
    double array_b[2][2] = {0};

    double(*ptr)[2] = array;
    double(*ptr_b)[2] = array_b;
    double(*temp)[2] = ptr_b;

    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < 2; i++)
        {
            *(*ptr_b + i) = *(*ptr + i);
        }
        ptr++;
        ptr_b++;
    }
    ptr_b = temp;

    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("%.1f ", *(*ptr_b + i));
        }
        printf("\n");
        ptr_b++;
    }
}

//将一个内含7个元素的数组的第3~5个元素拷贝至内含3个元素的数组中
void P735_Qusetion_8(void)
{
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    int brray[3] = {0};
    int *ptr = array;
    int *btr = brray;

    for (int i = 0; i < 3; i++)
    {
        *(btr + i) = *(ptr + 2 + i);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", btr[i]);
    }
}

//编写程序，初始化double类型3X5的数组，使用变长数组的函数将其拷贝至另一个二维数组中，还要写一个变长数组显示两个数组的内容，这个函数能处理任意NXN的数组
void P735_Question_9(int i, int j, double array[i][j])
{
    double brray[i][j];

    for (int k = 0; k < i; k++)
    {
        for (int q = 0; q < j; q++)
        {
            brray[k][q] = array[k][q];
        }
    }

    for (int k = 0; k < i; k++)
    {
        for (int q = 0; q < j; q++)
        {
            printf("%.1f ", brray[k][q]);
        }
        printf("\n");
    }
}

//编写函数，将两个数组中相对于元素相加，然后把结果存储在第三个数组中，函数接受3个数组名和一个数组大小
void P735_Question_10(int size, int a[size], int b[size], int c[size])
{
    for (int i = 0; i < size; i++)
    {
        c[i] = a[i] + b[i];
    }
}

//编写程序，声明int类型的3X5数组，并初始化，打印数组值，然后各值翻倍，并显示新值，编写函数显示内容，再翻一倍，显示内容，以函数名和行数作参数
void P735_Question_11(int k, int array[k][5])
{
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array[i][j] = array[i][j] * 2;
        }
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            array[i][j] = array[i][j] * 2;
        }
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

//改写程序
void P735_Question_12(void)
{
    return;
    //略
}

//在上一题中以变长数组作形参
void P735_Question_14(void)
{
    //略
}

int main(void)
{
    P735_Question_13();
    getchar();
    getchar();
    return 0;
}
