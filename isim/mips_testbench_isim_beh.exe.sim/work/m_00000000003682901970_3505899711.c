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
static const char *ng0 = "D:/studing/schem3/uart.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {10U, 0U};
static int ng4[] = {2, 0};
static int ng5[] = {1, 0};
static int ng6[] = {7, 0};
static unsigned int ng7[] = {1U, 0U};



static void Initial_61_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(62, ng0);

LAB2:    xsi_set_current_line(63, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3384);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(64, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3544);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 472);
    t2 = *((char **)t1);
    t1 = (t0 + 3704);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 2);
    xsi_set_current_line(66, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4024);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(67, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3864);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(68, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4184);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(69, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 4504);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4344);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);

LAB1:    return;
}

static void Always_73_1(char *t0)
{
    char t9[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
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
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;

LAB0:    t1 = (t0 + 5672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 6488);
    *((int *)t2) = 1;
    t3 = (t0 + 5704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(74, ng0);

LAB5:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 3704);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t8);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t9) = 1;

LAB9:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2824U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(121, ng0);

LAB76:    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB24:    goto LAB2;

LAB8:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(76, ng0);

LAB13:    xsi_set_current_line(77, ng0);
    t31 = (t0 + 1864U);
    t32 = *((char **)t31);
    memset(t30, 0, 8);
    t31 = (t32 + 4);
    t33 = *((unsigned int *)t31);
    t34 = (~(t33));
    t35 = *((unsigned int *)t32);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t31) == 0)
        goto LAB14;

LAB16:    t38 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t38) = 1;

LAB17:    t39 = (t30 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t30);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB18;

LAB19:
LAB20:    goto LAB12;

LAB14:    *((unsigned int *)t30) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(78, ng0);

LAB21:    xsi_set_current_line(79, ng0);
    t45 = (t0 + 608);
    t46 = *((char **)t45);
    t45 = (t0 + 3704);
    xsi_vlogvar_assign_value(t45, t46, 0, 0, 2);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_divide(t9, 32, t2, 8, t3, 32);
    t4 = (t0 + 4344);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 8);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB20;

LAB22:    xsi_set_current_line(88, ng0);

LAB25:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 3704);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 608);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    t10 = (t8 + 4);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t8);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t10);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t10);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t22 & t28);
    if (t29 != 0)
        goto LAB29;

LAB26:    if (t27 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t9) = 1;

LAB29:    t24 = (t9 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (~(t33));
    t35 = *((unsigned int *)t9);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB45;

LAB42:    if (t20 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t9) = 1;

LAB45:    t10 = (t9 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB63;

LAB60:    if (t20 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t9) = 1;

LAB63:    t10 = (t9 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB64;

LAB65:
LAB66:
LAB48:
LAB32:    goto LAB24;

LAB28:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(90, ng0);

LAB33:    xsi_set_current_line(91, ng0);
    t31 = (t0 + 1864U);
    t32 = *((char **)t31);
    memset(t30, 0, 8);
    t31 = (t32 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (~(t40));
    t42 = *((unsigned int *)t32);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB37;

LAB35:    if (*((unsigned int *)t31) == 0)
        goto LAB34;

LAB36:    t38 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t38) = 1;

LAB37:    t39 = (t30 + 4);
    t47 = *((unsigned int *)t39);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 3704);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);

LAB40:    goto LAB32;

LAB34:    *((unsigned int *)t30) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(92, ng0);

LAB41:    xsi_set_current_line(93, ng0);
    t45 = (t0 + 744);
    t46 = *((char **)t45);
    t45 = (t0 + 3704);
    xsi_vlogvar_assign_value(t45, t46, 0, 0, 2);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB40;

LAB44:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(100, ng0);

LAB49:    xsi_set_current_line(101, ng0);
    t23 = (t0 + 3864);
    t24 = (t23 + 56U);
    t31 = *((char **)t24);
    t32 = ((char*)((ng5)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_rshift(t30, 8, t31, 8, t32, 32);
    t38 = (t0 + 3864);
    xsi_vlogvar_assign_value(t38, t30, 0, 0, 8);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1864U);
    t3 = *((char **)t2);
    t2 = (t0 + 3864);
    t4 = (t0 + 3864);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t9, t6, 2, t7, 32, 1);
    t8 = (t9 + 4);
    t11 = *((unsigned int *)t8);
    t52 = (!(t11));
    if (t52 == 1)
        goto LAB50;

LAB51:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1152);
    t6 = *((char **)t5);
    t5 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t6, 32, t5, 32);
    memset(t30, 0, 8);
    t7 = (t4 + 4);
    t8 = (t9 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t9);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB55;

LAB52:    if (t20 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t30) = 1;

LAB55:    t23 = (t30 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t30);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 8, t5, 32);
    t6 = (t0 + 4024);
    xsi_vlogvar_assign_value(t6, t9, 0, 0, 8);

LAB58:    goto LAB48;

LAB50:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t9), 1);
    goto LAB51;

LAB54:    t10 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(104, ng0);

LAB59:    xsi_set_current_line(105, ng0);
    t24 = (t0 + 880);
    t31 = *((char **)t24);
    t24 = (t0 + 3704);
    xsi_vlogvar_assign_value(t24, t31, 0, 0, 2);
    goto LAB58;

LAB62:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(111, ng0);

LAB67:    xsi_set_current_line(112, ng0);
    t23 = (t0 + 1864U);
    t24 = *((char **)t23);
    t23 = ((char*)((ng5)));
    memset(t30, 0, 8);
    t31 = (t24 + 4);
    t32 = (t23 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t23);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t40 = (t36 ^ t37);
    t41 = (t35 | t40);
    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t32);
    t44 = (t42 | t43);
    t47 = (~(t44));
    t48 = (t41 & t47);
    if (t48 != 0)
        goto LAB71;

LAB68:    if (t44 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t30) = 1;

LAB71:    t39 = (t30 + 4);
    t49 = *((unsigned int *)t39);
    t50 = (~(t49));
    t51 = *((unsigned int *)t30);
    t53 = (t51 & t50);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB72;

LAB73:
LAB74:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 3704);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    goto LAB66;

LAB70:    t38 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(113, ng0);

LAB75:    xsi_set_current_line(114, ng0);
    t45 = (t0 + 3864);
    t46 = (t45 + 56U);
    t55 = *((char **)t46);
    t56 = (t0 + 3384);
    xsi_vlogvar_assign_value(t56, t55, 0, 0, 8);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB74;

}

static void Always_137_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 5920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 6504);
    *((int *)t2) = 1;
    t3 = (t0 + 5952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(138, ng0);

LAB5:    xsi_set_current_line(139, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t0 + 4184);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    goto LAB2;

}

static void implSig1_execute(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;

LAB0:    t1 = (t0 + 6168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 8, t2, 8, t3, 8);
    t5 = (t0 + 6584);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);

LAB1:    return;
}


extern void work_m_00000000003682901970_3505899711_init()
{
	static char *pe[] = {(void *)Initial_61_0,(void *)Always_73_1,(void *)Always_137_2,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000003682901970_3505899711", "isim/mips_testbench_isim_beh.exe.sim/work/m_00000000003682901970_3505899711.didat");
	xsi_register_executes(pe);
}
