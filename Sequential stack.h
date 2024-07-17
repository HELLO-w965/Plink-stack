#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;


void InitSequentialStack(ST* ps);//InitSequentialStack interface function

void PushSequentialStack(ST* ps, STDataType x); //PushSequentialStack interface function
bool SequentialStackEmpty(ST* ps);//SequentialStackEmpty interface function
void PopSequentialStack(ST*ps);//PopSequentialStack interface function
void PrintfSequentialStack(ST* ps);//PrintfSequentialStack interface function
void DecimalIsConvertedToOctal(ST*ps, STDataType x);//DecimalIsConvertedToOctal function declaration
void  ClearStack(ST* st);//ClearStack function declaration
