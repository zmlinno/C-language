//
//  C Basics.c
//  klo
//
//  Created by 张木林 on 2023/04/26.
//

#include "C Basics.h"

//int main()
//{
//
//    printf("heloo,world\n");
//    return 0;
//}





//
//int main()
//{
//    int a=10;
//    int b=20;
//    printf("%d\n",a);
//    printf("%d\n",b);
//    return 0;
//}





//int a=100;
//void test()
//{
//    printf("2:%d\n",a);
//}
//
//
//int main()
//{
//    printf("1:%d\n",a);
//    test();
//    return 0;
//}





// const 修饰的常变量
//int main()
//{
//    const int a=10;
//    //a=20;
//    //수정자(const)가 있는 상수 변수는 한 번 값을 할당하면 그 값을 변경할 수 없지만 여전히 변수입니다.
//    printf("%d\n",a);
//    return 0;
//}



//define 정의된 식별자 상수
#define max 1000
int main()
{
    int arr[max];
    printf("%d\n",max);
#define man 200
    //max =200; 고칠 수 없음
    printf("%d\n",man);
    return 0;
    
    
}
