///**
// *Description
//3个人比饭量，每人说了两句话：
//A说：B比我吃的多，C和我吃的一样多
//B说：A比我吃的多，A也比C吃的多
//C说：我比B吃得多，B比A吃的多。
//事实上，饭量和正确断言的个数是反序的关系。
//请编程按饭量的大小输出3个人的顺序。
//Input
//无输入
//Output
//按照饭量大小输出3人顺序，比如：
//ABC
//Sample Input
//无
//Sample Output
//无
// */
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//int main()
//{
//    int A,B,C;//饭量  1 2 3 表示
//    int a,b,c;//正确度
//
//    cout<<"三个人的饭量从小到大是："<<endl;
//    for(A=0;A<3;A++)
//        for(B=0;B<3;B++)
//            for(C=0;C<3;C++)
//            {
//                a=(A<B)+(A==C);//a的断言
//                b=(A>B)+(A>C);
//                c=(C>B)+(B>A);
//
//                if(a>b&&b>c    &&    A<B&&B<C)
//                    cout<<"ABC"<<endl;
//
//                if(a>c&&c>b    &&    A<C&&C<B)
//                    cout<<"ACB"<<endl;
//
//                if(b>a&&a>c    &&    B<A&&A<C)
//                    cout<<"BAC"<<endl;
//
//                if(b>c&&c>a    &&    B<C&&C<A)
//                    cout<<"BCA"<<endl;
//
//                if(c>a&&a>b    &&    C<A&&A<B)
//                    cout<<"CAB"<<endl;
//
//                if(c>b&&b>a    &&    C<B&&B<A)
//                    cout<<"CBA"<<endl;
//            }
//    return 0;
//}