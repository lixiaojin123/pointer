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
    int age;
    student *next;
};
int main(int argc,const char *argv[]){
    //insert code here...
    student A,B,C,D;
    scanf("%s%d",A.name,&A.age);
    scanf("%s%d",B.name,&B.age);
    scanf("%s%d",C.name,&C.age);
    scanf("%s%d",D.name,&D.age);
    printf("%s %d",A.name,A.age);
    printf("%s %d",B.name,B.age);
    printf("%s %d",C.name,C.age);
    printf("%s %d",D.name,D.age);

    return 0;
}
