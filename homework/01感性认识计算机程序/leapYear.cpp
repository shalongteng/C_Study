////
//// 判断一个年份是否是闰年
////
///**
// * 普通闰年:公历年份是4的倍数的，且不是100的倍数，为普通闰年。（如2004年就是闰年）；
// * 世纪闰年:公历年份是整百数的，必须是400的倍数才是世纪闰年（如1900年不是世纪闰年，2000年是世纪闰年）；
// */
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int year;
//    cout << "请输入年份" << endl;
//    cin >> year;
//    if (year % 4 == 0)
//    {
//
//        if (year % 100 == 0)
//        {
//            if (year % 400 == 0)
//            {
//                cout << year << "是世纪闰年" << endl;
//            } else {
//
//                cout << year << "不是闰年" << endl;
//            }
//        } else
//        {
//            cout << year << "是普通闰年" << endl;
//
//        }
//    } else {
//        cout << year << "不是闰年" << endl;
//    }
//    return 0;
//}