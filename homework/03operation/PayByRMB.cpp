//#include <stdio.h>
///**
//Description
//从键盘输入一指定金额（以元为单位，如345），然后输出支付该金额的各种面额的人民币数量，显示100元，50元，20元，10元，5元，1元各多少张，
// 要求尽量使用大面额的钞票。
//Input
//一个小于1000的正整数。
//Output
//输出分行，每行显示一个整数，从上到下分别表示100元，50元，20元，10元，5元，1元人民币的张数
//Sample Input
//735
//Sample Output
//7
//0
//1
//1
//1
//0
//Hint
//注意不要用6个判断来完成此题（如果你一定要这么做的话，想一想如果币值的种类是50种的话，你会用50个判断来解题吗？），
// 聪明的你一定可以用循环和数组这两个工具来解决这道题。（如果实在不行的话，请向助教求助）
// */
//int main()
//{
//    int money,n[]={100,50,20,10,5,2,1};
//    scanf("%d",&money);
//    int i = 0;
//    //循环次数固定的话 最好使用for循环
//    for (int j = 0; j < 6; ++j) {
//        if(money / n[j])
//        {
//            printf("%d\n",money / n[j]);
//            money %= n[j];
//        } else
//        {
//            printf("0\n");
//        }
//    }
//
//    return 0;
//}