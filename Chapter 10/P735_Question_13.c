#include "Head.h"

/*
编写程序，提示用户输入三组数，每组包含5个double类型的数（假设用户不会错误输入）
该程序完成以下任务：
a：把用户输入的数据储存在3X5的数组中
b：计算每组（5个）的平均值
c：计算所有数据的平均值
d：找出15个数据的最大值
e：打印结果
*/
void P735_Question_13(int e,int q,double number[e][q])
{
    //double number[3][5] = 0;
    /*
    printf("Scanf 3X5 numbers\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%f", number[i][j]);
        }
    }
    */

    double number[3][5] = {{1, 2, 3, 4, 5}, {2, 3, 4, 5, 6}, {3, 4, 5, 6, 7}};

    double avarage[5] = {0};
    double temp_sum = 0;
    int k = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            temp_sum += number[i][j];
        }
        avarage[k++] = temp_sum;
    }

    double all_avarage = 0.0;
    for (int i = 0; i < 5; i++)
    {
        all_avarage += avarage[i];
    }
    all_avarage /= 5;

    double max_value = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (max_value < number[i][j])
            {
                max_value = number[i][j];
            }
        }
    }

    printf("The max number is %.1f\n", max_value);
    printf("The avarage number is %.1f\n", all_avarage);
}