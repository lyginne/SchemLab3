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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/studing/schem/lab3_git/uart.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {8, 0};
static int ng4[] = {7, 0};



static void Initial_36_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_41_1(char *t0)
{
    char t4[8];
    char t23[8];
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
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    int t47;
    int t48;
    char *t49;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4712);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
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

LAB10:    xsi_set_current_line(44, ng0);

LAB13:    xsi_set_current_line(45, ng0);
    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng1)));
    memset(t23, 0, 8);
    t24 = (t22 + 4);
    t25 = (t21 + 4);
    t26 = *((unsigned int *)t22);
    t27 = *((unsigned int *)t21);
    t28 = (t26 ^ t27);
    t29 = *((unsigned int *)t24);
    t30 = *((unsigned int *)t25);
    t31 = (t29 ^ t30);
    t32 = (t28 | t31);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    t36 = (~(t35));
    t37 = (t32 & t36);
    if (t37 != 0)
        goto LAB17;

LAB14:    if (t35 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t23) = 1;

LAB17:    t39 = (t23 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t23);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB18;

LAB19:
LAB20:    goto LAB12;

LAB16:    t38 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(46, ng0);

LAB21:    xsi_set_current_line(47, ng0);
    t45 = ((char*)((ng2)));
    t46 = (t0 + 2248);
    xsi_vlogvar_assign_value(t46, t45, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t2);
    t47 = (t11 & t10);
    t5 = (t0 + 6380);
    *((int *)t5) = t47;

LAB22:    t6 = (t0 + 6380);
    if (*((int *)t6) > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB23:    xsi_set_current_line(50, ng0);

LAB25:    xsi_set_current_line(51, ng0);
    t7 = (t0 + 3704);
    xsi_process_wait(t7, 10000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    xsi_set_current_line(51, ng0);
    t8 = (t0 + 1048U);
    t14 = *((char **)t8);
    t8 = (t0 + 2568);
    t15 = (t0 + 2568);
    t21 = (t15 + 72U);
    t22 = *((char **)t21);
    t24 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t4, t22, 2, t24, 32, 1);
    t25 = (t4 + 4);
    t12 = *((unsigned int *)t25);
    t48 = (!(t12));
    if (t48 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_lshift(t4, 8, t5, 8, t6, 32);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 8);
    t2 = (t0 + 6380);
    t47 = *((int *)t2);
    *((int *)t2) = (t47 - 1);
    goto LAB22;

LAB27:    xsi_vlogvar_assign_value(t8, t14, 0, *((unsigned int *)t4), 1);
    goto LAB28;

LAB29:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng2)));
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
    t26 = (~(t20));
    t27 = (t17 & t26);
    if (t27 != 0)
        goto LAB33;

LAB30:    if (t20 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t4) = 1;

LAB33:    t14 = (t4 + 4);
    t28 = *((unsigned int *)t14);
    t29 = (~(t28));
    t30 = *((unsigned int *)t4);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB34;

LAB35:
LAB36:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB20;

LAB32:    t8 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(56, ng0);

LAB37:    xsi_set_current_line(57, ng0);
    t15 = (t0 + 2248);
    t21 = (t15 + 56U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t24 = (t22 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (~(t33));
    t35 = *((unsigned int *)t22);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB41;

LAB39:    if (*((unsigned int *)t24) == 0)
        goto LAB38;

LAB40:    t25 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t25) = 1;

LAB41:    t38 = (t23 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (~(t40));
    t42 = *((unsigned int *)t23);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB44:    goto LAB36;

LAB38:    *((unsigned int *)t23) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(58, ng0);

LAB45:    xsi_set_current_line(59, ng0);
    t39 = (t0 + 2568);
    t45 = (t39 + 56U);
    t46 = *((char **)t45);
    t49 = (t0 + 1928);
    xsi_vlogvar_assign_value(t49, t46, 0, 0, 8);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3704);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB46:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB44;

}

static void Always_73_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4728);
    *((int *)t2) = 1;
    t3 = (t0 + 4176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(74, ng0);

LAB5:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(76, ng0);

LAB9:    xsi_set_current_line(77, ng0);
    t13 = (t0 + 2568);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 1928);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 8);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3952);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB8;

}

static void Always_84_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4744);
    *((int *)t2) = 1;
    t3 = (t0 + 4424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);

LAB5:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    goto LAB2;

}


extern void work_m_00000000004140475218_3505899711_init()
{
	static char *pe[] = {(void *)Initial_36_0,(void *)Always_41_1,(void *)Always_73_2,(void *)Always_84_3};
	xsi_register_didat("work_m_00000000004140475218_3505899711", "isim/uart_isim_beh.exe.sim/work/m_00000000004140475218_3505899711.didat");
	xsi_register_executes(pe);
}
