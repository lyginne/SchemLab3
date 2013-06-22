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
static const char *ng0 = "D:/studing/schem3/interrupt_handler.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Initial_33_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(34, ng0);

LAB2:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 472);
    t2 = *((char **)t1);
    t1 = (t0 + 2040);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1880);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_39_1(char *t0)
{
    char t13[8];
    char t20[8];
    char t35[8];
    char t43[8];
    char t83[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;

LAB0:    t1 = (t0 + 3208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3528);
    *((int *)t2) = 1;
    t3 = (t0 + 3240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(44, ng0);

LAB9:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1320U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t2) != 0)
        goto LAB12;

LAB13:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB14;

LAB15:    memcpy(t43, t13, 8);

LAB16:    t75 = (t43 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1320U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t2) == 0)
        goto LAB32;

LAB34:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB35:    memset(t20, 0, 8);
    t5 = (t13 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t22 = (t16 & t15);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t5) != 0)
        goto LAB38;

LAB39:    t12 = (t20 + 4);
    t24 = *((unsigned int *)t20);
    t25 = *((unsigned int *)t12);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB40;

LAB41:    memcpy(t83, t20, 8);

LAB42:    t82 = (t83 + 4);
    t84 = *((unsigned int *)t82);
    t85 = (~(t84));
    t86 = *((unsigned int *)t83);
    t87 = (t86 & t85);
    t88 = (t87 != 0);
    if (t88 > 0)
        goto LAB54;

LAB55:
LAB56:
LAB30:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1880);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB12:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB14:    t11 = (t0 + 2040);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    t18 = (t0 + 472);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t17 + 4);
    t21 = (t19 + 4);
    t22 = *((unsigned int *)t17);
    t23 = *((unsigned int *)t19);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t18);
    t26 = *((unsigned int *)t21);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t18);
    t30 = *((unsigned int *)t21);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB20;

LAB17:    if (t31 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t20) = 1;

LAB20:    memset(t35, 0, 8);
    t36 = (t20 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t20);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t36) != 0)
        goto LAB23;

LAB24:    t44 = *((unsigned int *)t13);
    t45 = *((unsigned int *)t35);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t13 + 4);
    t48 = (t35 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t34 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t35) = 1;
    goto LAB24;

LAB23:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB24;

LAB25:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t13 + 4);
    t58 = (t35 + 4);
    t59 = *((unsigned int *)t13);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB27;

LAB28:    xsi_set_current_line(46, ng0);

LAB31:    xsi_set_current_line(47, ng0);
    t81 = (t0 + 608);
    t82 = *((char **)t81);
    t81 = (t0 + 2040);
    xsi_vlogvar_assign_value(t81, t82, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB30;

LAB32:    *((unsigned int *)t13) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t20) = 1;
    goto LAB39;

LAB38:    t11 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB39;

LAB40:    t17 = (t0 + 2040);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t21 = (t0 + 608);
    t34 = *((char **)t21);
    memset(t35, 0, 8);
    t21 = (t19 + 4);
    t36 = (t34 + 4);
    t27 = *((unsigned int *)t19);
    t28 = *((unsigned int *)t34);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t21);
    t31 = *((unsigned int *)t36);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t37 = *((unsigned int *)t21);
    t38 = *((unsigned int *)t36);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t33 & t40);
    if (t41 != 0)
        goto LAB46;

LAB43:    if (t39 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t35) = 1;

LAB46:    memset(t43, 0, 8);
    t47 = (t35 + 4);
    t44 = *((unsigned int *)t47);
    t45 = (~(t44));
    t46 = *((unsigned int *)t35);
    t50 = (t46 & t45);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t47) != 0)
        goto LAB49;

LAB50:    t52 = *((unsigned int *)t20);
    t53 = *((unsigned int *)t43);
    t54 = (t52 & t53);
    *((unsigned int *)t83) = t54;
    t49 = (t20 + 4);
    t57 = (t43 + 4);
    t58 = (t83 + 4);
    t55 = *((unsigned int *)t49);
    t56 = *((unsigned int *)t57);
    t59 = (t55 | t56);
    *((unsigned int *)t58) = t59;
    t60 = *((unsigned int *)t58);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB42;

LAB45:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t43) = 1;
    goto LAB50;

LAB49:    t48 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB50;

LAB51:    t62 = *((unsigned int *)t83);
    t63 = *((unsigned int *)t58);
    *((unsigned int *)t83) = (t62 | t63);
    t75 = (t20 + 4);
    t81 = (t43 + 4);
    t64 = *((unsigned int *)t20);
    t65 = (~(t64));
    t66 = *((unsigned int *)t75);
    t69 = (~(t66));
    t70 = *((unsigned int *)t43);
    t71 = (~(t70));
    t72 = *((unsigned int *)t81);
    t73 = (~(t72));
    t67 = (t65 & t69);
    t68 = (t71 & t73);
    t74 = (~(t67));
    t76 = (~(t68));
    t77 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t77 & t74);
    t78 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t78 & t76);
    t79 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t79 & t74);
    t80 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t80 & t76);
    goto LAB53;

LAB54:    xsi_set_current_line(51, ng0);

LAB57:    xsi_set_current_line(52, ng0);
    t89 = (t0 + 472);
    t90 = *((char **)t89);
    t89 = (t0 + 2040);
    xsi_vlogvar_assign_value(t89, t90, 0, 0, 1);
    goto LAB56;

}


extern void work_m_00000000002779056671_1533980871_init()
{
	static char *pe[] = {(void *)Initial_33_0,(void *)Always_39_1};
	xsi_register_didat("work_m_00000000002779056671_1533980871", "isim/interrupt_handler_isim_beh.exe.sim/work/m_00000000002779056671_1533980871.didat");
	xsi_register_executes(pe);
}
