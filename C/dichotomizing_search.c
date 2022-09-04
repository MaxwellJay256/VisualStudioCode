#include<stdio.h> //�ö��ַ��������������е�λ��

int search(int key, int a[], int len)   //���ַ���ֻ��Ҫ����log2(n)�Ρ�����ֻ��������������顣
{
    int left = 0;
    int right = len - 1;
    int ret = -1;
    while ( right >= left ) {
        int mid = (left+right)/2;
        if ( a[mid] == key ) {
            ret = mid;
            break;
        } else if ( a[mid] > key ) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return ret;
}

int main()
{
    int a[] = {2,4,7,11,13,16,21,24,27,32,36,40,46,47};
    int x, loc;
    printf("Input a number:");
    scanf("%d", &x);
    loc = search(x, a, sizeof(a)/sizeof(a[0]));
    if ( loc != -1 ) {
        printf("%d is at the no.%d position.\n", x, loc+1);
    } else {
        printf("%d does not exist.\n", x);
    }
    return 0;
}