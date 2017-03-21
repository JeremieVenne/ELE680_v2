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
static const char *ng0 = "/home/f3nr1r/Documents/Workspace/Xilinx/ELE680_v2/ELE680_TOP/FTDI_Block.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_3538360624587667818_1035706684(char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_3538367364750660645_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_800139796931496790_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0774550523_3212880686_p_0(char *t0)
{
    char t13[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    int t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    static char *nl0[] = {&&LAB9, &&LAB10, &&LAB11, &&LAB12};
    static char *nl1[] = {&&LAB35, &&LAB36, &&LAB37, &&LAB38};

LAB0:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1792U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5680);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 3112U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl0) + t2);
    goto **((char **)t1);

LAB5:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 5792);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 5856);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB8:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl1) + t2);
    goto **((char **)t1);

LAB9:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 5920);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 10171);
    t4 = (t0 + 5984);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(74, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t3 = t1;
    memset(t3, (unsigned char)2, 8U);
    t4 = (t0 + 6048);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 6112);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = (unsigned char)0;

LAB18:    if (t2 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB8;

LAB10:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 6112);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 10104U);
    t4 = ieee_p_1242562249_sub_800139796931496790_1035706684(IEEE_P_1242562249, t13, t3, t1, 10);
    t7 = (t13 + 12U);
    t14 = *((unsigned int *)t7);
    t15 = (1U * t14);
    t2 = (8U != t15);
    if (t2 == 1)
        goto LAB19;

LAB20:    t8 = (t0 + 6048);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t4, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 10104U);
    t18 = (14 - 10);
    t2 = ieee_p_1242562249_sub_3538360624587667818_1035706684(IEEE_P_1242562249, t3, t1, t18);
    if (t2 != 0)
        goto LAB21;

LAB23:
LAB22:    goto LAB8;

LAB11:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 10104U);
    t4 = ieee_p_1242562249_sub_800139796931496790_1035706684(IEEE_P_1242562249, t13, t3, t1, 10);
    t7 = (t13 + 12U);
    t14 = *((unsigned int *)t7);
    t15 = (1U * t14);
    t2 = (8U != t15);
    if (t2 == 1)
        goto LAB24;

LAB25:    t8 = (t0 + 6048);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t4, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 5984);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 10104U);
    t18 = (28 - 10);
    t2 = ieee_p_1242562249_sub_3538360624587667818_1035706684(IEEE_P_1242562249, t3, t1, t18);
    if (t2 != 0)
        goto LAB26;

LAB28:
LAB27:    goto LAB8;

LAB12:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 10104U);
    t4 = ieee_p_1242562249_sub_800139796931496790_1035706684(IEEE_P_1242562249, t13, t3, t1, 10);
    t7 = (t13 + 12U);
    t14 = *((unsigned int *)t7);
    t15 = (1U * t14);
    t2 = (8U != t15);
    if (t2 == 1)
        goto LAB29;

LAB30:    t8 = (t0 + 6048);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t4, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 10104U);
    t18 = (77 - 10);
    t2 = ieee_p_1242562249_sub_3538360624587667818_1035706684(IEEE_P_1242562249, t3, t1, t18);
    if (t2 != 0)
        goto LAB31;

LAB33:
LAB32:    goto LAB8;

LAB13:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 5792);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    t1 = (t0 + 3272U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)0);
    t2 = t12;
    goto LAB18;

LAB19:    xsi_size_not_matching(8U, t15, 0);
    goto LAB20;

LAB21:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 5792);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    goto LAB22;

LAB24:    xsi_size_not_matching(8U, t15, 0);
    goto LAB25;

LAB26:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 5792);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 6112);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 6176);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB27;

LAB29:    xsi_size_not_matching(8U, t15, 0);
    goto LAB30;

LAB31:    xsi_set_current_line(96, ng0);
    t4 = (t0 + 10179);
    t8 = (t0 + 6048);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t4, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 5792);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 6176);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 6112);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB32;

LAB34:    goto LAB6;

LAB35:    xsi_set_current_line(105, ng0);
    t4 = (t0 + 5920);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 6240);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t6 = *((unsigned char *)t3);
    t11 = (t6 == (unsigned char)2);
    if (t11 == 1)
        goto LAB45;

LAB46:    t5 = (unsigned char)0;

LAB47:    if (t5 == 1)
        goto LAB42;

LAB43:    t2 = (unsigned char)0;

LAB44:    if (t2 != 0)
        goto LAB39;

LAB41:
LAB40:    goto LAB34;

LAB36:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 5984);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 10104U);
    t4 = ieee_p_1242562249_sub_800139796931496790_1035706684(IEEE_P_1242562249, t13, t3, t1, 10);
    t7 = (t13 + 12U);
    t14 = *((unsigned int *)t7);
    t15 = (1U * t14);
    t2 = (8U != t15);
    if (t2 == 1)
        goto LAB50;

LAB51:    t8 = (t0 + 6048);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t4, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 10104U);
    t18 = (5 - 10);
    t2 = ieee_p_1242562249_sub_3538360624587667818_1035706684(IEEE_P_1242562249, t3, t1, t18);
    if (t2 != 0)
        goto LAB52;

LAB54:
LAB53:    goto LAB34;

LAB37:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 5984);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 10104U);
    t4 = ieee_p_1242562249_sub_800139796931496790_1035706684(IEEE_P_1242562249, t13, t3, t1, 10);
    t7 = (t13 + 12U);
    t14 = *((unsigned int *)t7);
    t15 = (1U * t14);
    t2 = (8U != t15);
    if (t2 == 1)
        goto LAB55;

LAB56:    t8 = (t0 + 6048);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t4, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 10104U);
    t18 = (35 - 10);
    t2 = ieee_p_1242562249_sub_3538360624587667818_1035706684(IEEE_P_1242562249, t3, t1, t18);
    if (t2 != 0)
        goto LAB57;

LAB59:
LAB58:    goto LAB34;

LAB38:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 10104U);
    t4 = ieee_p_1242562249_sub_800139796931496790_1035706684(IEEE_P_1242562249, t13, t3, t1, 10);
    t7 = (t13 + 12U);
    t14 = *((unsigned int *)t7);
    t15 = (1U * t14);
    t2 = (8U != t15);
    if (t2 == 1)
        goto LAB60;

LAB61:    t8 = (t0 + 6048);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t4, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 10104U);
    t18 = (85 - 10);
    t2 = ieee_p_1242562249_sub_3538360624587667818_1035706684(IEEE_P_1242562249, t3, t1, t18);
    if (t2 != 0)
        goto LAB62;

LAB64:
LAB63:    goto LAB34;

LAB39:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 3432U);
    t8 = *((char **)t1);
    t1 = (t0 + 10104U);
    t9 = ieee_p_1242562249_sub_800139796931496790_1035706684(IEEE_P_1242562249, t13, t8, t1, 10);
    t10 = (t13 + 12U);
    t14 = *((unsigned int *)t10);
    t15 = (1U * t14);
    t22 = (8U != t15);
    if (t22 == 1)
        goto LAB48;

LAB49:    t16 = (t0 + 6048);
    t17 = (t16 + 56U);
    t23 = *((char **)t17);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t9, 8U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 5856);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 5984);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB40;

LAB42:    t1 = (t0 + 3112U);
    t7 = *((char **)t1);
    t20 = *((unsigned char *)t7);
    t21 = (t20 == (unsigned char)0);
    t2 = t21;
    goto LAB44;

LAB45:    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t12 = *((unsigned char *)t4);
    t19 = (t12 == (unsigned char)3);
    t5 = t19;
    goto LAB47;

LAB48:    xsi_size_not_matching(8U, t15, 0);
    goto LAB49;

LAB50:    xsi_size_not_matching(8U, t15, 0);
    goto LAB51;

LAB52:    xsi_set_current_line(117, ng0);
    t4 = (t0 + 5856);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 6240);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB53;

LAB55:    xsi_size_not_matching(8U, t15, 0);
    goto LAB56;

LAB57:    xsi_set_current_line(130, ng0);
    t4 = (t0 + 5856);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 6240);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(132, ng0);
    t1 = (t0 + 5920);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB58;

LAB60:    xsi_size_not_matching(8U, t15, 0);
    goto LAB61;

LAB62:    xsi_set_current_line(137, ng0);
    t4 = (t0 + 10187);
    t8 = (t0 + 6048);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t4, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(138, ng0);
    t1 = (t0 + 5856);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(139, ng0);
    t1 = (t0 + 5920);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB63;

}

static void work_a_0774550523_3212880686_p_1(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(146, ng0);
    t4 = (t0 + 3112U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)0);
    if (t7 == 1)
        goto LAB11;

LAB12:    t3 = (unsigned char)0;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t22 = xsi_get_transient_memory(8U);
    memset(t22, 0, 8U);
    t23 = t22;
    memset(t23, (unsigned char)4, 8U);
    t24 = (t0 + 6304);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t22, 8U);
    xsi_driver_first_trans_fast_port(t24);

LAB2:    t29 = (t0 + 5696);
    *((int *)t29) = 1;

LAB1:    return;
LAB3:    t16 = (t0 + 3592U);
    t17 = *((char **)t16);
    t16 = (t0 + 6304);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t17, 8U);
    xsi_driver_first_trans_fast_port(t16);
    goto LAB2;

LAB5:    t13 = (t0 + 3432U);
    t14 = *((char **)t13);
    t13 = (t0 + 10104U);
    t15 = ieee_p_1242562249_sub_3538360624587667818_1035706684(IEEE_P_1242562249, t14, t13, 0);
    t1 = t15;
    goto LAB7;

LAB8:    t4 = (t0 + 3432U);
    t11 = *((char **)t4);
    t4 = (t0 + 10104U);
    t12 = ieee_p_1242562249_sub_3538367364750660645_1035706684(IEEE_P_1242562249, t11, t4, 40);
    t2 = t12;
    goto LAB10;

LAB11:    t4 = (t0 + 1672U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB13;

LAB15:    goto LAB2;

}

static void work_a_0774550523_3212880686_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t14 = xsi_get_transient_memory(8U);
    memset(t14, 0, 8U);
    t15 = t14;
    memset(t15, (unsigned char)4, 8U);
    t16 = (t0 + 6368);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t14, 8U);
    xsi_driver_first_trans_fast_port(t16);

LAB2:    t21 = (t0 + 5712);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 3592U);
    t9 = *((char **)t2);
    t2 = (t0 + 6368);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 8U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB7;

LAB9:    goto LAB2;

}


extern void work_a_0774550523_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0774550523_3212880686_p_0,(void *)work_a_0774550523_3212880686_p_1,(void *)work_a_0774550523_3212880686_p_2};
	xsi_register_didat("work_a_0774550523_3212880686", "isim/MAIN_TOP_TB_isim_beh.exe.sim/work/a_0774550523_3212880686.didat");
	xsi_register_executes(pe);
}
