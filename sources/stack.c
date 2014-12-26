#include <stack.h>

struct STACK
{
	struct STACK
	*	previous;
	void
	*	data;
};

int stack_push(STACK *stack_pointer, void *data)
{
	struct STACK
	*	stack_temp	= NULL;
	if(stack_pointer == NULL)
	{
		return TRUE;
	}

	stack_temp		= malloc(sizeof(*stack_temp));
	if(stack_temp == NULL)
	{
		return TRUE;
	}

	stack_temp->previous	= *stack_pointer;
	stack_temp->data	=  data;

	*stack_pointer		= stack_temp;

	return FALSE;
}


int stack_pop(STACK *stack_pointer, void **data)
{
	struct STACK
	*	stack_temp	= NULL;
	if(stack_pointer == NULL)
	{
		return TRUE;
	}

	 stack_temp		= *stack_pointer;
	*stack_pointer		= stack_temp->previous;
	if(data != NULL)
	{
		*data = stack_temp->data;
	}

	return FALSE;
}

int stack_get(STACK stack, void **data, uint32_t index)
{
	uint32_t
		i	= 0;
	struct STACK
		current	= stack;

	if(current == NULL)
	{
		fprintf(stderr, "%s:%s:%s:%d:%s\n", "");
		return TRUE;
	}

	for(i = 0; i < index; i++)
	{

	}
	return 0;
}

int stack_search(STACK stack, void *data_compare, void *data_apply, COMPARE_CALLBACK compare, APPLY_CALLBACK apply)
{
	struct STACK
	*	element 	= NULL;
	if(stack == NULL)
	{
		return TRUE;
	}

	element = stack;

	if(compare != NULL)
	{
		while(element != NULL)
		{
			if(compare(data_compare, element->data) == 0)
			{
				if(apply != NULL)
				{
					if(apply(data_apply, element->data))
					{
						return TRUE;
					}
				}
			}
		}
	}

	return FALSE;
}
