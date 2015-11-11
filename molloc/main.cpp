//
//  main.cpp
//  动态分配存储空间
//
//  Created by  黄磊 on 15/11/11.
//  Copyright © 2015年  黄磊. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int *a;
    a=(int *)malloc(4);
    *a=100;
    printf("a=%x  *a=%x\n",a,*a);
    return 0;
}
