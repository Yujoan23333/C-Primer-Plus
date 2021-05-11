# C-Primer-Plus

## 2021/2/29 Update

1. 整形与浮点型运算时，自动转换为浮点类型

```c
int a = 1;
float b = 2.2;
float c = (强制转换为float)a + b;
```

2. Double 类型的值 scanf 必须用%lf

3. 补充

```c
int i = 0
switch (i++)
case 0
printf("%d",i);break;
case 1
该程序会先到 case 0 处，因为 i 要到 printf 的时候才自加 1.
```

---

## 2021/3/16 Update

1. getchar 读取字符，丢弃换行符,所以连用两个 getchar 后者直接读取换行符，需要中间用一个吸收换行符

2. 零可以被二整除,所以余数为零.有一个概念是:零可以被任何数整除

```c
int i = 0;
int c = i%3;
则结果 c = 0
```

---

## 2021/3/29 Update

1. `gets()`函数：从 stdin 流中读取字符串，直至接受到换行符或 EOF 时停止，。**换行符不作为读取串的内容**，**换行符的位置变为`'\0'`**。程序应保证 buffer 不会超过上限。

```c
int main(void)
{
    char str[5];
    gets(str);
    printf("%s,str);
    return 0;
}
```

2. `puts()`函数，输出字符串，**并在末尾添加换行符**
3. `fputs()`函数，输出字符串，**不添加换行符**
4. `fgets()`函数，读入换行符、空格等，在末尾自动添加`'\0'`

```c
char array[n];
fgets(array,n-2,stdin);
//n-2的原因是读入换行符和'\0'
```

---

## 2021/3/30 Update

1. `char ptr[]="abcd"与char *ptr="abcd"`区别

```c
若使用指针初始化字符串则以下调用会出错
char *ptr = "abcd";
*ptr = 'e'  //错误，将字符串改为“ebcd"
//表面看上去无异常

char ptr[]="abcd";
*ptr = 'e'  //正确，将字符串改为“ebcd"
```

---

## 2021/3/31 Update

1. 寄存器变量`register int a = 0`不能使用取地址符
2. 静态变量自动完成初始化
3. 不能在函数形参中使用`static`
4. 外部变量具有静态的特征（自动初始化）
5. 外部静态变量只有内部链接（不可在其他文件中使用）
6. 函数也有内部和外部`（extern和static）static`声明的函数只能在文件内

---

## 2021/4/2 Update

1. 注册指针不能不初始化（C 语言的弊端，JAVA 的优势）

```c
char array[2][2];
char *ptr[2];
scanf("%s",ptr);//错误，因为ptr可能指向一个错误的内存

char *ptr[2];
ptr[0]=array[0];
scanf("%s",ptr);//正确
```

2. 各参数含义

```
${workspaceFolder} :表示当前workspace文件夹路径，也即C:\Users\admin\Desktop\test

${workspaceRootFolderName}:表示workspace的文件夹名，也即test

${file}:文件自身的绝对路径，也即C:\Users\admin\Desktop\test\.vscode\launch.json

${relativeFile}:文件在workspace中的路径，也即.vscode\launch.json

${fileBasenameNoExtension}:当前文件的文件名，不带后缀，也即launch

${fileBasename}:当前文件的文件名，launch.json

${fileDirname}:文件所在的文件夹路径，也即C:\Users\admin\Desktop\test\.vscode

${fileExtname}:当前文件的后缀，也即.json
```

---

## 2021/4/3 Update

1. 函数`fgets()`

```c
当读取(n-1)个字符时，或者读取到换行符时，或者到达文件末尾时，它会停止
失败或读到文件结尾返回NULL
```

2. 输出的区别

```c
stdout -- 标准输出设备
stderr -- 标准错误输出设备

stdout输出到磁盘文件，stderr在屏幕。
在默认情况下，stdout是行缓冲的，他的输出会放在一个buffer里面，只有到换行的时候，才会输出到屏幕。而stderr是无缓冲的，会直接输出
```

3. 文件读写控制符

```c
　　r   打开只读文件，该文件必须存在。
　　r+  打开可读写的文件，该文件必须存在。
　　rb+ 读写打开一个二进制文件，只允许读写数据。
　　rt+ 读写打开一个文本文件，允许读和写。
　　w   打开只写文件，若文件存在则文件长度清为0，若文件不存在则建立该文件。
　　w+  打开可读写文件，若文件存在则文件长度清为零，若文件不存在则建立该文件。
　　a   以附加的方式打开只写文件。若文件不存在，则建立文件，如果文件存在，写入数据被加到文件尾。（EOF符保留）
　　a+  以附加方式打开可读写的文件。若文件不存在，则建立文件，若文件存在，写入数据加到文件尾。（原EOF符不保留）
　　wb  只写打开或新建一个二进制文件；只允许写数据。
　　wb+ 读写打开或建立一个二进制文件，允许读和写。
　　wt+ 读写打开或着建立一个文本文件；允许读写。
　　at+ 读写打开一个文本文件，允许读或在文本末追加数据。
　　ab+ 读写打开一个二进制文件，允许读或在文件末追加数据。

```

4. 函数`fputs'

```c
成功写入一个字符串后，文件的位置指针会自动后移，函数返回值为非负整数；否则返回EOF(符号常量，其值为-1)。
```

---

## 2021/4/10 Update

1. 字符`'2'`与数值`2`相差 48

```c
char ch = '2';
int ar  = ch;
printf("The value of int is %d",ar);
//ar =  32

printf("The value of int is %d",ar-48);
//ar =  2

```

--- 
## 2021/4/13 Update
1. 宏函数替换
```c
#define SUM(x) x*x
SUM(3) //结果为9
SUM(3+3) //以为结果为36 其实为3+3*3+3 = 15 
宏只做替换，不会求值
```
--- 
## 2021/4/17 Update
内容完结，最后一章内容在数据结构专题中更新，接下来开C和指针