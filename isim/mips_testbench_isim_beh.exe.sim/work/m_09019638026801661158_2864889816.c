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
static const char *ng0 = "/home/nik/SchemLab3/mips_testbench.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {4, 0};
static int ng4[] = {800000, 0};
static const char *ng5 = "start sending to uart";
static const char *ng6 = "leds = %x";



static void Initial_9_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);

LAB4:    xsi_set_current_line(10, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(11, ng0);

LAB5:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 2328);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(12, ng0);
    t3 = (t0 + 1288);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t7) == 0)
        goto LAB7;

LAB9:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB10:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB12;

LAB11:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1288);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    goto LAB5;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB12:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB11;

LAB13:    goto LAB1;

}

static void Initial_16_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);

LAB4:    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(19, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5240);
    *((int *)t8) = t7;

LAB5:    t9 = (t0 + 5240);
    if (*((int *)t9) > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t0 + 5244);
    *((int *)t8) = t7;

LAB9:    t9 = (t0 + 5244);
    if (*((int *)t9) > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(29, ng0);
    xsi_vlog_stop(1);

LAB1:    return;
LAB6:    xsi_set_current_line(20, ng0);
    t10 = (t0 + 3584);
    *((int *)t10) = 1;
    t11 = (t0 + 2800);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    t2 = (t0 + 5240);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB5;

LAB10:    xsi_set_current_line(25, ng0);
    t10 = (t0 + 3600);
    *((int *)t10) = 1;
    t11 = (t0 + 2800);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    t2 = (t0 + 5244);
    t7 = *((int *)t2);
    *((int *)t2) = (t7 - 1);
    goto LAB9;

}

static void Initial_33_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 3016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);

LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);

LAB6:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3616);
    *((int *)t2) = 1;
    t3 = (t0 + 3048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB7:    goto LAB5;

LAB8:    goto LAB1;

}

static void Initial_44_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 3264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);

LAB4:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(46, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 5272);
    t4 = *((char **)t3);
    t5 = ((((char*)(t4))) + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t6, 8);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(59, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 5304);
    t4 = *((char **)t3);
    t5 = ((((char*)(t4))) + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t6, 8);
    goto LAB1;

}


extern void work_m_09019638026801661158_2864889816_init()
{
	static char *pe[] = {(void *)Initial_9_0,(void *)Initial_16_1,(void *)Initial_33_2,(void *)Initial_44_3};
	xsi_register_didat("work_m_09019638026801661158_2864889816", "isim/mips_testbench_isim_beh.exe.sim/work/m_09019638026801661158_2864889816.didat");
	xsi_register_executes(pe);
}
