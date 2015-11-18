//
//  main.cpp
//  pointer
//
//  Created by 李晓晋 on 15/11/18.
//  Copyright © 2015年 李晓晋. All rights reserved.
//
#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a=10;
    int *p;
    p=&a;
    printf("&a=%x a=%x &p=%x p=%x *p=%x \n",&a,a,&p,p,*p);
    printf("&a=%d a=%d &p=%d p=%d *p=%d \n",&a,a,&p,p,*p);
    return 0;
}

