#include <stdio.h>
/**
Description
����һ�����������飨Ԫ�ص�ֵ�������㣩����������еڶ����ظ����ֵ������������û�У�������ַ���"NOT EXIST"��
Input
��һ��Ϊ����m����ʾ��m�����ݡ�
���ÿ�����ݷ����У�
��һ��Ϊ������n��3<n<500������ʾ����ĳ��ȣ�
�ڶ�����n�������������������ÿո�ֿ���
Output
��m�������ÿ��������������еڶ����ظ����ֵ������������û�У�������ַ���"NOT EXIST"��
Sample Input
5
10
1 3 5 7 9 7 8 5 2 6
10
1 3 5 5 7 9 7 8 2 6
10
1 3 5 5 7 9 4 8 2 6
10
1 3 5 7 2 9 9 8 7 5
10
1 3 5 2 7 9 9 8 7 5
Sample Output
7
7
NOT EXIST
7
7
 */
int main()
{
    int n;
    printf("����������\n");
    scanf("%d",&n);
    int arr [100];
    int m;
    for (int i = 0; i < n; ++i) {
        //count ���ܶ���Ϊȫ�ֱ���
        int count =0;
        scanf("%d",&m);
        //��������
        for (int j = 0; j < m; ++j) {
            scanf("%d",&arr[j]);
        }
        for (int k = 0; k < m; ++k) {
            for (int j = k+1; j < m; ++j) {
                if(arr[k] == arr[j]){
                    count++;
                    break;
                }
            }
            if(count==2){
                printf("\n%d\n",arr[k]);
                break;
            }

        }
        if(count!=2) printf("NOT EXIST\n");

    }

    return 0;
}