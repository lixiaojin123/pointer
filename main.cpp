//
//  main.cpp
//  pointer
//
//  Created by 李晓晋 on 15/11/18.
//  Copyright © 2015年 李晓晋. All rights reserved.
//
#include <iostream>
struct student
{
    char name[100];
    char sex;
    int age;
    student *next;
};
int main(int argc,const char *argv[]){
    //insert code here...
    student A,B,C,D;
    printf("%x ,%x, %x, %x",&A,&B,&C,&D);
    return 0;
}
