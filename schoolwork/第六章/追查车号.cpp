///**
//题目内容：一辆卡车违反交通规则，撞人逃逸。现场三人目击事件，但都没有记住车号，只记下车的一些特征。
//甲说：牌照的前两位数字是相同的；乙说：牌照的后两位数字是相同的；丙是位数学家，他说：四位的车号正好是一个整数的平方。
//请根据以上线索求出车号。
//
//输出格式：The number is ****。
// */
//#include <stdio.h>
//int main()
//{
//    for (int i = 1100; i < 8888; ++i) {
//        int low = i % 100;
//        int low1 = low %10;
//        int low2 = low/10;
//
//        int high = i / 100;
//        int high1 = high %10;
//        int high2 = high /10;
//        for (int j = 0; j < 300; ++j) {
//            if((i==j*j) && (low1==low2)&&(high1==high2))
//                printf("The number is %d\n",i);
//        }
//    }
//    return 0;
//}