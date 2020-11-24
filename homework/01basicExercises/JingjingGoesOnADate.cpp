//#include<stdio.h>
///*
//Description
//晶晶的朋友贝贝约晶晶下周去看展览，但晶晶每周的1、3、5有课必须上课，请帮晶晶判断她能否接受贝贝的邀请，如果能输出YES；如果不能则输出NO。
//Input
//输入有一行，贝贝邀请晶晶去看展览的日期，用数字1到7表示从星期一到星期日。
//Output
//输出有一行，如果晶晶可以接受贝贝的邀请，输出YES，否则，输出NO。注意YES和NO都是大写字母！
//Sample Input
//2
//Sample Output
//YES
//*/
///**
// * 可以使用单个表达式多个if来xx
// * 也可以使用多个表达式 + 逻辑与或非来写
// *  逻辑表达式返回值
// *      真或假
// * @return
// */
//int main() {
//    int week;
//    printf("请输入数字1-7");
//    scanf("%d", &week);
//    if (week == 1 || week == 3 || week == 5) {
//        printf("NO");
//    }
//    else if (week == 2 || week == 4 || week == 6 || week == 7) {
//        printf("YES");
//    }
//    else
//    {
//        printf("请输入数字1-7");
//    }
//
//    return 0;
//}