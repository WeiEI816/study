#include <stdio.h>
/*
    定义数组
        <类型>变量名称[元素数量]
            类型：数组内每一个单元的类型
            变量名称：每一个数组是一个变量，需要一个变量的名字
            []：表明了这个变量是一个数组，如果没有[]就是普通的变量，int a 那这就是一个int变量，如果int a 后面带[]那么a的性质就变了a就成为一个数组，
            a里面的每一个单元都是int，[]里面要给一个数字
                int grades[100]//这是一个叫做grades的数组它有100个单元

            元素的数量必须是整数
            C99之前：元素数量必须是编译时刻确定的字面量
    数组
        是一种容器（放东西的东西），特点是：
            其中所有的元素具有相同的数据类型；
            一旦创建，不能改变大小
            数组中的元素在内存中是连续依次排序的
        int a[10]
            一个int的数组
            10个单元：a[0],a[1],……a[9]
                |a[0]|a[1]|a[2]|a[3]|a[4]|a[5]|a[6]|a[7]|a[8]|a[9]|
            每个单元就是一个int类型的变量
            可以出现在赋值的左边或者右边：
                放在左边是在写东西，比如说a[2] = a[1]+6;将a[1]的值读出来+6写入到a[2]中去，在赋值号右边是读取，左边是写入
            在赋值左边的叫做左值，右边的值叫做右值
    数组的单元
        数组的每个单元就是数组类型的一个变量
        使用数组时放在[]中的数字可以是变量可以是数字,叫做下标或者索引，小标从0开始计数：
            grades[0]
            grades[99]
            average[5]
    有效的下标范围
        编译器和运行环境都不会检查数组下标是否越界，无论是对数组单元做读还是写
        一旦程
            segmentation fault
        但是也可能运气好，没造成严重的后果
        保证程序只使用有效的下标值：[0,数组大小-1]

    长度为0的数组
        int a[0];
        可以存在，但是无用
*/
int main(void) {


    /*
    //计算平均数
    //先让用户输入有多少数字要计算
    int x;
    double sum = 0;
    int cnt;
    printf("输入数字的数量：");
    scanf("%d",&cnt);
    if(cnt > 0)
    {
        int number[cnt];
        scanf("%d",&x);
        while (x != -1)
        {
            number[cnt] = x;
            sum += x;
            cnt ++;
            scanf("%d", &x);
        }
    }
*/

/*用户输入的数超过100个会越界
    int x;
    double sum = 0;
    int cnt = 0;
    int number[100];//定义数组
    scanf("%d", &x);
    while (x != -1) {
        number[cnt] = x;//对数组中的元素赋值
        sum += x;
        cnt++;
        scanf("%d", &x);
    }
    if (cnt > 0) {
        int i;
        double average = sum / cnt;
        for (i = 0; i < cnt; i++) {//遍历数组
            if (number[i] > average) {//使用数组中的元素
                printf("%d", number[i]);
            }
        }
    }
*/
    return 0;
}