/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/nik/lab1_git/uart.v";
static int ng1[] = {0, 0};
static const char *ng2 = "!is_reading";
static int ng3[] = {1, 0};
static int ng4[] = {8, 0};
static int ng5[] = {7, 0};
static const char *ng6 = "shift_read = %b";
static const char *ng7 = "will copy byte to buf";



static void Initial_37_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(38, ng0);

LAB2:    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_42_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    int t29;

LAB0:    t1 = (t0 + 3728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4296);
    *((int *)t2) = 1;
    t3 = (t0 + 3760);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t5 = (t0 + 2248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(45, ng0);

LAB13:    xsi_set_current_line(46, ng0);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3536);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t16 = (t12 ^ t13);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB18;

LAB15:    if (t20 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t4) = 1;

LAB18:    t14 = (t4 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:
LAB21:    goto LAB12;

LAB17:    t8 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(48, ng0);

LAB22:    xsi_set_current_line(49, ng0);
    t15 = ((char*)((ng3)));
    t28 = (t0 + 2248);
    xsi_vlogvar_assign_value(t28, t15, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t2);
    t29 = (t11 & t10);
    t5 = (t0 + 5832);
    *((int *)t5) = t29;

LAB23:    t6 = (t0 + 5832);
    if (*((int *)t6) > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3536);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB24:    xsi_set_current_line(52, ng0);

LAB26:    xsi_set_current_line(53, ng0);
    t7 = (t0 + 2408);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    t15 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_rshift(t4, 8, t14, 8, t15, 32);
    t28 = (t0 + 2408);
    xsi_vlogvar_assign_value(t28, t4, 0, 0, 8);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3536);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 2408);
    t6 = (t0 + 2408);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t14 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t4, t8, 2, t14, 32, 1);
    t15 = (t4 + 4);
    t9 = *((unsigned int *)t15);
    t29 = (!(t9));
    if (t29 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5856);
    t3 = *((char **)t2);
    t5 = ((((char*)(t3))) + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t6, 8);
    t2 = (t0 + 5832);
    t29 = *((int *)t2);
    *((int *)t2) = (t29 - 1);
    goto LAB23;

LAB28:    xsi_vlogvar_assign_value(t3, t5, 0, *((unsigned int *)t4), 1);
    goto LAB29;

LAB30:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t16 = (t12 ^ t13);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB34;

LAB31:    if (t20 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t4) = 1;

LAB34:    t14 = (t4 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB21;

LAB33:    t8 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(59, ng0);

LAB38:    xsi_set_current_line(62, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3536);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB37;

}

static void Always_88_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4312);
    *((int *)t2) = 1;
    t3 = (t0 + 4008);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);

LAB5:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    goto LAB2;

}


extern void work_m_16518838632380584739_3505899711_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Always_42_1,(void *)Always_88_2};
	xsi_register_didat("work_m_16518838632380584739_3505899711", "isim/mips_testbench_isim_beh.exe.sim/work/m_16518838632380584739_3505899711.didat");
	xsi_register_executes(pe);
}
