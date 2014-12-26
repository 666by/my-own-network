#if !defined(	MON__STACK__H	)
	#define		MON__STACK__H

	#include		<stdio.h>
	#include		<stdlib.h>
	#include		<stdint.h>
	#include		<string.h>
	#include		<errno.h>

	#include		<define.h>
	#include		<typedef.h>

	int stack_push		(STACK *stack_pointer, void *data);
	int stack_pop		(STACK *stack_pointer, void **data);
	int stack_search	(STACK stack, void *data_for_compare, void *data_for_apply, COMPARE_CALLBACK compare, APPLY_CALLBACK apply);

#endif
