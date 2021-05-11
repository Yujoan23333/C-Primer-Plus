# 关于结构体的指针

```c
struct TYPE
{
    int a;
}

struct BYTE
{
    int b;
    struct TYPE;
}

struct BYTE byte[3];
struct BYTE * ptr = &byte[0];

/*
    也可struct BYTE *ptr = byte ;
    此时 ptr+1 等价于 byte[1] ;
*/

此时，不能这样引用，因为在BYTE内的TYPE不是指针
ptr->TYPE->a;
只能：
ptr ->TYPE.a;

但若BYTE内的TYPE也是数组
struct BYTE
{
    int b;
    struct TYPE[3];
}
则：ptr->TYPE 此时也为指针，故可以 ptr->TYPE->a; 也可以 ptr->TYPE[0].a
ptr->(TYPE+1)->a 等价于 ptr->TYPE[1].a;
```
