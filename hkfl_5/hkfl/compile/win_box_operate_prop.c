/*
 * This file is automatically generated by func_gen.c,don't edit
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lincon.h"
#include "linconhmi.h"
#include "userfunc.h"

#ifndef HMI_GEN_FUNC_FILE
static int widget_set_timer_enable(void *value);

hmi_widget_func_t hmi_window_77696E5F626F785F6F706572617465_prop_funcs[]={
{"timer_enable",(void *)widget_set_timer_enable},
{NULL,NULL}
};

static int widget_set_timer_enable(void *value)
{
	static void *__hmi_var_123_ptr;
	u8 __hmi_var_123 = (*(u8 *)hmidb_get_data_value_by_ptr("sys_set.open_all_box_flag",&__hmi_var_123_ptr));
#line 1 "�ؼ�:timer,����:enable"
	u8 __hmi_retval = (u8)(__hmi_var_123);
	if (__hmi_retval != (*(u8 *)value))
	{
		(*(u8 *)value) = __hmi_retval;
		return 1;
	}
	return 0;
}

#endif