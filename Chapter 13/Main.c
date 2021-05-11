#include "Head.h"

//下列的程序有什么问题
void P998_Qusetion_1(void)
{
    /*
    int *fp;
    int k;
    //fp= fopen("galatin"); 错误
    for (k = 0; k < 30; k++)
    {
        fputs(fp, "Nanete eats gelatin.\n");
    }
    fclose("gelatin"); //错误
*/
}

//下列程序完成什么任务
void P998_Question_2(int argc, char *argv[])
{
    int ch;
    FILE *fp;
    if (argc < 2)
        exit(EXIT_FAILURE);
    if ((fp = fopen(argv[1], "r")) != NULL)
        exit(EXIT_FAILURE);
    while ((ch = getc(fp)) != EOF)
        if (isdigit(ch))
            putchar(ch);
    fclose(fp);
    //答：检测文件每一个字符是否是数字
}

//假设有以下程序
void P998_Question_3(void)
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("terky", "r");
    fp2 = fopen("jerky", "w");
    //另外，假设成功打开，补全下面函数调用中缺少的参数
    /*
    a: ch = getc(fp1);
    b: fprintf(fp1,"%c\n",ch);
    c: putc(ch,fp1);
    d: fclose(fp1);
*/
}

//编写程序，不接受任何参数，或只接受一个，将其解释为文件命名，如果没有参数，则用标准输入作为输入，假设输入全是浮点数，计算和报告输入的算术平均值
void P998_Question_4(char *ptr)
{
    FILE *fp1;
    double sum = 0;
    int n = 0;
    int temp = 0;
    double sum_a = 0;
    if (strlen(ptr) == 0)
    {
        while (temp = scanf("%f", &sum) != EOF)
        {
            sum_a += sum;
        }
        n++;
        printf("The avarage is %f", sum_a / n);
    }
    else
    {
        fp1 = fopen(ptr, "r");
        if (fp1 == NULL)
        {
            exit(EXIT_FAILURE);
        }
        while ((temp = fscanf(fp1, "%f", &sum)) != EOF)
        {
            sum_a += sum;
            n++;
        }
        printf("The avarage is %f", sum_a / n);
    }
}

//编写程序，接受两个命令行参数，第一个是字符，第二个是文件名，要求只打印文件中包括给定字符的那些行
void P1000_Question_5(char ch, char *ptr)
{
    FILE *fp = NULL;
    char brray[30];
    char *btr = brray;
    fp = fopen(ptr, "a+");
    if (fp == NULL)
    {
        exit(EXIT_FAILURE);
    }
    while (fgets(btr, 255, fp))
    {
        for (int k = 0; k < sizeof(btr); k++)
        {
            if (btr[k] == ch)
            {
                fputs(btr, stdout);
                break;
            }
        }
    }
    fclose(fp);
}

//二进制和文本文件有什么区别？二进制流和文本流有何区别
void P1000_Qusetion_6(void)
{
    //二进制和文本结束标记不同，转义字符算法不同
    //所谓文本流是指在流中流动的数据是以字符形式出现，二进制流是指流动的是二进制数字序列
}

//分别用fprintf()和fwrite()存储8238201有什么区别
//分别用putc()和和fwrite()存储字符'S'有何区别
void P1000_Question_7(void)
{
    //答：前者是字符文件，后者是二进制文件
}

//下面语句的区别是什么
void P1000_Question_8(void)
{
    char *name = "YUJOAN";
    printf("Hello,%s\n", name);
    fprintf(stdout, "Hello,%s\n", name);
    fprintf(stderr, "Hello,%s\n", name);
    //在默认情况下，stdout是行缓冲的，他的输出会放在一个buffer里面，只有到换行的时候，才会输出到屏幕。而stderr是无缓冲的，会直接输出
}

//"a+"、"r+"和"w+"打开的内容都是可读写，哪个更合适更改已有内容
void P1000_Question_9(void)
{
    //"r+"适合
}

//修改程序13.1，提示用户输入文件名，并读取输入的信息
void P1002_Question_1(int argc, char *argv[])
{
    int ch;
    FILE *fp;
    unsigned long count = 0;
    printf("Enter the File address\n");
    char *ptr = NULL;
    scanf("%s", ptr);
    fputs(ptr, stdout);
    if (argc != 2)
    {
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(ptr, "r")) == NULL)
    {
        printf("Could not open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters\n", argv[1], count);
}

//编写程序，获取原始文件名和拷贝文件名，执行拷贝
void P1002_Question_2(void) //char *ptr_mubiao, char *ptr_yuanshi)
{
    FILE *fp = NULL;
    int i = 0;
    if ((fp = fopen("./Test.txt", "a+")) == NULL)
    {
        exit(EXIT_FAILURE);
    }
    char array[5][20] = {0};
    char(*btr)[20] = array;
    int flag = 0;
    while (fgets(array[i++], sizeof(array[i]), fp))
    {
        if (i > 4)
        {
            printf("The array is limited\n");
            break;
        }
    }
    fclose(fp);
    i = 0;
    printf("%s\n", array[1]);

    if ((fp = fopen("./Copy.txt", "a+")) == NULL)
    {
        exit(EXIT_FAILURE);
    }

    while (strlen(array[i]) > 0)
    {
        printf("%d ", strlen(array[i]));
        fputs(array[i], fp);
        i++;
        if (i > 4)
        {
            printf("The array is limited\n");
            break;
        }
    }
    fclose(fp);
}

//编写文件拷贝程序，提示用户输入文本文件名，将其内容转换为大写
void P1002_Question_3(void)
{
    char *apr = NULL;
    printf("Enter the address of File\n");
    scanf("%s", apr);
    FILE *fp = NULL;
    fp = fopen(apr, "a+");
    int i = 0;

    char array[200] = {0};
    while ((array[i] = getc(fp)) != EOF)
    {
        i++;
    }
    array[i] = '\0'; //否则读入EOF

    i = 0;
    while (array[i] > 0)
    {
        array[i] = toupper(array[i]);
        i++;
    }
    fputs(array, fp);
    fclose(fp);
}

//编写程序，按顺序在屏幕上显示命令行中列出的所有文件，使用argc控制循环
void P1002_Question_4(int argc, char *argv[])
{
    int i = 0;
    char ch;
    FILE *fp = NULL;
    while (i < argc)
    {
        fp = fopen(argv[i], "a+");
        if (fp == NULL)
        {
            exit(EXIT_FAILURE);
        }
        fprintf(stderr, "Usage: The file is %s", argv[i++]);
        while ((ch = getc(fp)) != EOF)
        {
            putchar(ch);
            putchar('\n');
        }
    }
}

//略
void P1002_Question_5(void)
{
    //略
}
//略
void P1002_Question_6(void)
{
    //略
}

//编写一个程序打开两个文件
//a：打印第一个文件的第一行，第二个文件的第一行的顺序，打印到行数较多文件的最后一行
//b：把行号相同的行打印成一行
void P1002_Question_7(void)
{
    FILE *fp_1 = NULL;
    FILE *fp_2 = NULL;

    if ((fp_1 = fopen("./Test.txt", "a+")) == NULL)
    {
        exit(EXIT_FAILURE);
    }
    if ((fp_2 = fopen("./Copy.txt", "a+")) == NULL)
    {
        exit(EXIT_FAILURE);
    }
    char array[25] = {0};

    int i = 0;
    char ch_1, ch_2;

    /*
    while ((ch_1 = feof(fp_1)) == 0 or (ch_2 = feof(fp_2)) == 0)
    {
        if (ch_1 == 0)
        {
            fgets(array, 100, fp_1);
            fputs(array, stdout);
        }
        if (ch_2 == 0)
        {
            fgets(array, 100, fp_2);
            fputs(array, stdout);
        }
    }
*/

    while ((ch_1 = feof(fp_1)) == 0 or (ch_2 = feof(fp_2)) == 0)
    {
        if (ch_1 == 0)
        {
            fgets(array, 100, fp_1);
            array[strlen(array) - 1] = '\0';
            fputs(array, stdout);
        }
        if (ch_2 == 0)
        {
            fgets(array, 100, fp_2);
            array[strlen(array) - 1] = '\0';
            fputs(array, stdout);
        }
        putchar('\n');
    }
}

//编写程序，以字符和任意文件名为参数，若字符后面没有参数，则读取标准输入，否则依次打开每个文件并报告该字符出现的次数，文件名和字符本身也要一同报告
//程序包含错误检查，确定参数数量是否正确和能否打开文件，如果无法打开，则报告情况，打开下一个
void P1002_Question_8(char ch, char *buf)
{
    char array[20] = {0};
    int i = 0;
    int scroe = 0;
    if (buf == NULL)
    {
        fgets(array, 20, stdin);
        array[strlen(array)] = '\0';
        while (array[i] != '\0')
        {
            if (array[i] == ch)
            {
                scroe++;
            }
            i++;
        }
        printf("The score is %d", scroe);
        exit(EXIT_SUCCESS);
    }
    FILE *fp = NULL;
    fp = fopen(buf, "a+");
    if (fp == NULL)
    {
        exit(EXIT_FAILURE);
    }
    while (fgets(array, 20, fp))
    {
        while (array[i] != '\0' and array[i] != '\n')
        {
            if (array[i] == ch)
            {
                scroe++;
            }
            i++;
        }
        i = 0;
    }
    printf("The score is %d", scroe);
}

//略
void P1002_Question_9(void)
{
}

//编写程序打开文本文件，获得文件名，通过循环，提示用户输入位置，然后程序打印该位置到下一个换行符之间的内容，用户输入负值或非数值字符可以结束循环
void P1003_Question_10(void)
{
    char *ptr = NULL;
    int flag = 0;
    char ch;
    /*
    puts("Enter the address of file\n");
    scanf("%s", ptr);
    */
    ptr = "./Test.txt";
    FILE *fp = NULL;
    fp = fopen(ptr, "a+");

    puts("Enter the position\n");
    scanf("%d", &flag);
    while (flag >= 0)
    {
        fseek(fp, flag - 1, SEEK_SET);
        while ((ch = getc(fp)) != '\n' and ch != EOF)
        {
            printf("%c ", ch);
        }
        puts("Enter the position\n");
        scanf("%d", &flag);
    }
}

//编写程序，接受两个参数，第一个参数是字符串，第二个是文件名。查找文件，打印文件中包含字符串的所有行，假设所以行不超过255个字符
void P1002_Question_11(char *str, char *file)
{
    FILE *fp = NULL;
    char array[255] = {0};
    char *result = NULL;
    fp = fopen(file, "a+");
    while (fgets(array, 255, fp))
    {
        result = strstr(array, str);
        if (result != NULL)
        {
            fputs(array, stdout);
        }
    }
    fclose(fp);
}

//创建文本文件，内含20行，每行30个整数，这些整数都在0~9之间，用空格分开
//编写程序，将数据读入20X30的int数组中，用数组初始化20X31的字符数组，每行最后一个字符是空字符，打印所有字符，储存在文本文件中
void P1002_Question_12(void)
{
    FILE *fp = NULL;
    fp = fopen("./Test.txt", "a+");
    int i_array[20][30] = {0};
    int j = 0;
    char c_array[20][31] = {0};

    while (!feof(fp))
    {
        for (int i = 0; i < 30; i++)
            fscanf(fp, "%d", &i_array[j][i]);
        j++;
    }

    j = 0;
    for (; j < 30; j++)
    {
        for (int i = 0; i < 30; i++)
        {
            if (i_array[j][i] == 1)
            {
                c_array[j][i] = 'A';
            }
            else if (i_array[j][i] == 2)
            {
                c_array[j][i] = 'C';
            }
            else
            {
                c_array[j][i] = 'D';
            }
        }
        c_array[j][30] = '\0';
    }
    fseek(fp, 0, SEEK_SET);

    j = 0;
    while (j < 30)
    {
        fputs(c_array[j++], fp);
    }
    fclose(fp);
}

//用变长数组解决上一题
void P1002_Question_13(int q, int k)
{
    FILE *fp = NULL;
    fp = fopen("./Test.txt", "a+");
    int i_array[q][k];
    int j = 0;
    char c_array[q][k + 1];

    while (!feof(fp))
    {
        for (int i = 0; i < k; i++)
            fscanf(fp, "%d", &i_array[j][i]);
        j++;
    }

    j = 0;
    for (; j < q; j++)
    {
        for (int i = 0; i < k; i++)
        {
            if (i_array[j][i] == 1)
            {
                c_array[j][i] = 'A';
            }
            else if (i_array[j][i] == 2)
            {
                c_array[j][i] = 'C';
            }
            else
            {
                c_array[j][i] = 'D';
            }
        }
        c_array[j][k + 1] = '\0';
    }
    fseek(fp, 0, SEEK_SET);

    j = 0;
    while (j < q)
    {
        fputs(c_array[j++], fp);
    }
    fclose(fp);
}

//为P1002_Question_12添加消除失真的函数，把每个值与他上下左右相邻值作比较，如果该值与相邻的差都大于1，则所有相邻值的平均值代替该值，边界上的值做特殊处理
void P1002_Question_14(void)
{
    FILE *fp = NULL;
    fp = fopen("./Test.txt", "a+");
    int i_array[20][30] = {0};
    int j = 0;
    char c_array[20][31] = {0};
    int hang = 0;
    int lie = 0;

    while (!feof(fp))
    {
        for (int i = 0; i < 30; i++)
            fscanf(fp, "%d", &i_array[j][i]);
        j++;
    }

    for(hang =0 ;hang<20;hang++)
    {
        for(lie = 0 ;lie<30; lie++)
        {
            if (hang > 1 and hang < 20 and lie > 1 and lie > 30)
            {
                if(fabs(i_array[hang][lie] - i_array[hang][lie - 30])
                + fabs(i_array[hang][lie - 30] - i_array[hang][lie]) 
                + fabs(i_array[hang][lie - 1] - i_array[hang][lie]) 
                + fabs(i_array[hang][lie + 1] - i_array[hang][lie])
                > 4)
                {
                    i_array[hang][lie]=(i_array[hang][lie - 30]+i_array[hang][lie - 30]+i_array[hang][lie - 1]+i_array[hang][lie + 1])/4;
                }
            }
        }
    }

    for (; j < 30; j++)
    {
        for (int i = 0; i < 30; i++)
        {
            if (i_array[j][i] == 1)
            {
                c_array[j][i] = 'A';
            }
            else if (i_array[j][i] == 2)
            {
                c_array[j][i] = 'C';
            }
            else
            {
                c_array[j][i] = 'D';
            }
        }
        c_array[j][30] = '\0';
    }
    fseek(fp, 0, SEEK_SET);

    j = 0;
    while (j < 30)
    {
        fputs(c_array[j++], fp);
    }
    fclose(fp);
}

int main(void)
{
    system("pause");
    return 0;
}