//#include <stdio.h>
///**
//Description
//某医院想统计一下某项疾病的获得与否与年龄是否有关，需要对以前的诊断记录进行整理。
//Input
//共2行，第一行为过往病人的数目n（0 < n <= 100)，第二行为每个病人患病时的年龄。
//Output
//每个年龄段（分四段：18以下，19-35，36-60，60以上）的患病人数占总患病人数的比例，以百分比的形式输出，精确到小数点后两位（double）。
//Sample Input
//10
//1 11 21 31 41 51 61 71 81 91
//Sample Output
//1-18: 20.00%
//19-35: 20.00%
//36-60: 20.00%
//Over60: 40.00%
//Hint
//输出%可以用下面的语句
//printf("%%");
// */
//int main()
//{
//    int n;
//    int a[100];
//    double b[4];
//
//    scanf("%d",&n);
//    for (int i = 0; i < n; ++i)
//    {
//        scanf("%d",&a[i]);
//    }
//
//    for (int j = 0; j < n; ++j)
//    {
//        if(a[j] < 18)
//        {
//            b[0]++;
//        }
//        if(a[j]>=18 && a[j] <35)
//        {
//            b[1]++;
//        }
//        if(a[j]>=36 && a[j] <60)
//        {
//            b[2]++;
//        }
//        if(a[j]>=60)
//        {
//            b[3]++;
//        }
//    }
//
//    printf("1-18: %.2lf%%\n",b[0]/n*100);
//    printf("19-35: %.2lf%%\n",b[1]/n*100);
//    printf("36-60: %.2lf%%\n",b[2]/n*100);
//    printf("Over60: %.2lf%%\n",b[3]/n*100);
//    return 0;
//}
//
