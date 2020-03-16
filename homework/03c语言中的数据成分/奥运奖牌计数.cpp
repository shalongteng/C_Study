///**
// * 2008年北京奥运会，A国的运动员参与了n天的决赛项目(1≤n≤17)。现在要统计一下A国所获得的金、银、铜牌数目及总奖牌数。
// */
//#include <stdio.h>
//int main()
//{
//    printf("第1行是A国参与决赛项目的天数n，其后有n行，每一行是该国获得的金、银、铜牌数目，用空格隔开。\n");
//    int n=0;
//    int a[100];
//    int b[100];
//    int c[100];
//    int d[100];
//    int count =0;
//    scanf("%d",&n);
//    //输入奖牌数据
//    for (int i = 0; i < n; ++i) {
//        scanf("%d",&a[i]);
//        scanf("%d",&b[i]);
//        scanf("%d",&c[i]);
//    }
//    //对金银铜分别求和，求总和
//    for (int j = 0; j < n; ++j) {
//
//        d[j]=a[j]+b[j]+c[j];
//        count += d[j];
//    }
//    //输出结果
//    for (int k = 0; k < n; ++k) {
//        printf("%d ",d[k]);
//    }
//    printf("%d",count);
//    return 0;
//}