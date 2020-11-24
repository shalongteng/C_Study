//#include <stdio.h>
//
///**
//Description
//正常情况下一年有365天，但是闰年的时候，一年有366天。现在给定一个年份，请你判断它是不是闰年
//Input
//一行一个整数，表示年份
//Output
//闰年输出"YES"
//否则输出"NO"
//Sample Input
//2000
//Sample Output
//YES
//Hint
// * 判断一个年份是否是闰年
// * 普通闰年:公历年份是4的倍数的，且不是100的倍数，为普通闰年。（如2004年就是闰年）；
// * 世纪闰年:公历年份是400的倍数的是世纪闰年（如1900年不是世纪闰年，2000年是世纪闰年）；
// */
//int main()
//{
//    printf("请输入年份");
//    bool leapYear(int year);
//    bool leapYear2(int year);
//    int year;
//    scanf("%d", &year);
//    bool res = leapYear2(year);
//
//    if (res)
//    {
//        printf("YES");
//    } else {
//        printf("NO");
//    }
//    return 0;
//}
//
////使用表达式判断
//bool leapYear(int year) {
//    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//    {
//        return true;
//    }
//    return false;
//}
////使用if else 实现
//bool leapYear2(int year)
//{
//    if (year % 4 == 0)
//    {
//        if (year % 100 != 0)
//        {
//            return true;
//        } else{
//            return false;
//        }
//
//    }
//    if(year % 400 == 0){
//        return true;
//    }
//    return false;
//}
