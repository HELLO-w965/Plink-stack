#include"Sequential stack.h"
//Initialize the implementation of the stack
void InitSequentialStack(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;

}
// Implementation of Push Stack function
void PushSequentialStack(ST* ps, STDataType x)
{
	assert(ps);

	if (ps->top == ps->capacity)
	{

		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* tmp = realloc(ps->a, newcapacity * sizeof(STDataType));
		if (tmp == NULL)
		{
			printf("Expansion failure\n");
			exit(-1);
		}

		ps->a = tmp;
		ps->capacity = newcapacity;

	}

	ps->a[ps->top] = x;
	ps->top++;

}
//Determine the implementation of the stack empty function
bool SequentialStackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;

}
//Implementation of the Pop stack function
void PopSequentialStack(ST* ps)
{
	assert(ps);

	if (!SequentialStackEmpty(ps))
	{

		ps->top--;


	}

  else
	printf("The stack is empty and cannot be removed. Procedure\n");

}
//Traverse the stack function implementation
void PrintfSequentialStack(ST* ps)
{

	assert(ps);
	if (!SequentialStackEmpty(ps))
	{

	 for (int i = 1; i <= ps->top; i++) 
	 {
				printf("|%d|\n", ps->a[ps->top - i]);
			}
	        printf("\n\n\n");
			
		}
	else
		printf("The empty stack cannot do print calculations\n");

	

	}


void DecimalIsConvertedToOctal(ST* ps, STDataType x)
{
	ClearStack(ps);
	while (x)
	{

		PushSequentialStack(ps, x% 8);

		x = x / 8;



	}


	PrintfSequentialStack(ps);




}

//ClearStack Function implementation

void ClearStack(ST* ps)
{


	assert(ps);
	if (!SequentialStackEmpty(ps))
	{
		ps->top = 0;

	}

	else
		printf("The empty stack cannot be emptied\n");



}