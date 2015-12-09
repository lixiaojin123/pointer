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
    student *p,*q,*head;
    scanf("%s%d",A.name,&A.age);
    scanf("%s%d",B.name,&B.age);
    scanf("%s%d",C.name,&C.age);
    scanf("%s%d",D.name,&D.age);
    A.next=&B;
    B.next=&C;
    C.next=&D;
    D.next=0;
    head=&A;
    p=head;
    while(p!=0)
    {
        printf("%s %d p=%x\n",p->name,p->age,p);
        p=p->next;
    }
    
    return 0;
}
