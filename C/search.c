#include <stdio.h>

/**
 * 鎵惧嚭key鍦ㄦ暟缁刟涓殑浣嶇疆
 * @param key 瑕佸鎵剧殑鏁板瓧
 * @param a 瑕佸鎵剧殑鏁扮粍
 * @param length 鏁扮粍a鐨勯暱搴?
 * @return 濡傛灉鎵惧埌key锛岃繑鍥炲叾鍦╝涓殑浣嶇疆锛涘鏋滄壘涓嶅埌锛屽垯杩斿洖-1銆?
 */
int search(int key, int a[], int length);

int main(void)
{
    int a[] = {2,4,6,7,1,3,5,9,11,13,23,14,32};
    int x, loc;
    printf("请输入一个数字：");
    scanf("%d", &x);
    loc = search(x, a, sizeof(a)/sizeof(a[0]));
    if ( loc != -1 ) {
        printf("%d在第%d个位置上。\n", x, loc);
    } else {
        printf("%d不存在。\n", x);
    }

    return 0;
}

int search(int key, int a[], int length)  //搜索x是否在数组中
{
    int ret = -1;
    int i;
    for ( i=0; i<length; i++ ) {
        if ( a[i] == key ) {
            ret = i;
            break;
        }
    }
    return ret;
}