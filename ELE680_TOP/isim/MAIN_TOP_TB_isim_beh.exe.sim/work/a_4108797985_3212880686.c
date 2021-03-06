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
static const char *ng0 = "/home/f3nr1r/Documents/Workspace/Xilinx/ELE680_v2/ELE680_TOP/BRAM_ctrlr.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1006216973935652998_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_1434214030532789707_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_3044629854722631167_1035706684(char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_3525738511873186323_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_3525738511873258197_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_800139796931496790_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_4108797985_3212880686_p_0(char *t0)
{
    char t15[16];
    char t21[16];
    char t22[16];
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
    char *t13;
    char *t14;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t23;
    char *t24;
    char *t25;
    static char *nl0[] = {&&LAB9, &&LAB10, &&LAB11, &&LAB12};
    static char *nl1[] = {&&LAB23, &&LAB25, &&LAB24, &&LAB25};

LAB0:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 3232U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 8952);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 3432U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 9192);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl0) + t2);
    goto **((char **)t1);

LAB5:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 9128);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);

LAB6:    goto LAB3;

LAB8:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl1) + t2);
    goto **((char **)t1);

LAB9:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 9256);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 16036);
    t4 = (t0 + 9320);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 1U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = (unsigned char)0;

LAB18:    if (t2 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB8;

LAB10:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = (t0 + 9384);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 15U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 9448);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 14U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 9128);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB11:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 9448);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 14U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 16037);
    t4 = (t0 + 9320);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 1U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 9256);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB8;

LAB12:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 9128);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB13:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 9128);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    t1 = (t0 + 5192U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)2);
    t2 = t12;
    goto LAB18;

LAB19:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 9128);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB20;

LAB22:    goto LAB6;

LAB23:    xsi_set_current_line(104, ng0);
    t4 = xsi_get_transient_memory(14U);
    memset(t4, 0, 14U);
    t7 = t4;
    memset(t7, (unsigned char)2, 14U);
    t8 = (t0 + 9512);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t4, 14U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(105, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t3 = t1;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 9576);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(106, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t3 = t1;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 9640);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 16038);
    t4 = (t0 + 9704);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB26;

LAB28:
LAB27:    goto LAB22;

LAB24:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB31;

LAB33:    xsi_set_current_line(133, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t3 = t1;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 9576);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(134, ng0);
    t1 = (t0 + 9768);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB32:    goto LAB22;

LAB25:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 9128);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB22;

LAB26:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 4552U);
    t4 = *((char **)t1);
    t1 = (t0 + 15728U);
    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t7 = (t0 + 15552U);
    t9 = ieee_p_1242562249_sub_3525738511873186323_1035706684(IEEE_P_1242562249, t15, t4, t1, t8, t7);
    t10 = (t15 + 12U);
    t16 = *((unsigned int *)t10);
    t17 = (1U * t16);
    t6 = (16U != t17);
    if (t6 == 1)
        goto LAB29;

LAB30:    t13 = (t0 + 9640);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 16U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 9768);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB27;

LAB29:    xsi_size_not_matching(16U, t17, 0);
    goto LAB30;

LAB31:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 2152U);
    t4 = *((char **)t1);
    t1 = (t0 + 9512);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 14U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 5992U);
    t3 = *((char **)t1);
    t1 = (t0 + 15776U);
    t4 = (t0 + 1192U);
    t7 = *((char **)t4);
    t4 = (t0 + 15520U);
    t2 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t3, t1, t7, t4);
    if (t2 != 0)
        goto LAB34;

LAB36:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 5992U);
    t3 = *((char **)t1);
    t1 = (t0 + 15776U);
    t4 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t15, t3, t1, 1);
    t7 = (t15 + 12U);
    t16 = *((unsigned int *)t7);
    t17 = (1U * t16);
    t2 = (5U != t17);
    if (t2 == 1)
        goto LAB48;

LAB49:    t8 = (t0 + 9704);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t4, 5U);
    xsi_driver_first_trans_fast(t8);

LAB35:    goto LAB32;

LAB34:    xsi_set_current_line(116, ng0);
    t8 = (t0 + 16043);
    t10 = (t0 + 9704);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t8, 5U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t4 = ((IEEE_P_2592010699) + 4000);
    t7 = (t0 + 15568U);
    t1 = xsi_base_array_concat(t1, t21, t4, (char)99, (unsigned char)2, (char)97, t3, t7, (char)101);
    t8 = (t0 + 1512U);
    t9 = *((char **)t8);
    t10 = ((IEEE_P_2592010699) + 4000);
    t13 = (t0 + 15552U);
    t8 = xsi_base_array_concat(t8, t22, t10, (char)99, (unsigned char)2, (char)97, t9, t13, (char)101);
    t14 = ieee_p_1242562249_sub_3525738511873258197_1035706684(IEEE_P_1242562249, t15, t1, t21, t8, t22);
    t18 = (t15 + 12U);
    t16 = *((unsigned int *)t18);
    t17 = (1U * t16);
    t2 = (16U != t17);
    if (t2 == 1)
        goto LAB37;

LAB38:    t19 = (t0 + 9832);
    t20 = (t19 + 56U);
    t23 = *((char **)t20);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t14, 16U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 4872U);
    t3 = *((char **)t1);
    t1 = (t0 + 15728U);
    t4 = ieee_p_1242562249_sub_800139796931496790_1035706684(IEEE_P_1242562249, t15, t3, t1, 1);
    t7 = (t15 + 12U);
    t16 = *((unsigned int *)t7);
    t17 = (1U * t16);
    t2 = (16U != t17);
    if (t2 == 1)
        goto LAB39;

LAB40:    t8 = (t0 + 9896);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t4, 16U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(119, ng0);
    t1 = (t0 + 4552U);
    t3 = *((char **)t1);
    t1 = (t0 + 15728U);
    t4 = (t0 + 4872U);
    t7 = *((char **)t4);
    t4 = (t0 + 15728U);
    t2 = ieee_p_1242562249_sub_3044629854722631167_1035706684(IEEE_P_1242562249, t3, t1, t7, t4);
    if (t2 != 0)
        goto LAB41;

LAB43:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 4552U);
    t3 = *((char **)t1);
    t1 = (t0 + 15728U);
    t4 = (t0 + 1512U);
    t7 = *((char **)t4);
    t4 = (t0 + 15552U);
    t8 = ieee_p_1242562249_sub_3525738511873186323_1035706684(IEEE_P_1242562249, t15, t3, t1, t7, t4);
    t9 = (t15 + 12U);
    t16 = *((unsigned int *)t9);
    t17 = (1U * t16);
    t2 = (16U != t17);
    if (t2 == 1)
        goto LAB46;

LAB47:    t10 = (t0 + 9576);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t8, 16U);
    xsi_driver_first_trans_fast(t10);

LAB42:    goto LAB35;

LAB37:    xsi_size_not_matching(16U, t17, 0);
    goto LAB38;

LAB39:    xsi_size_not_matching(16U, t17, 0);
    goto LAB40;

LAB41:    xsi_set_current_line(120, ng0);
    t8 = (t0 + 4552U);
    t9 = *((char **)t8);
    t8 = (t0 + 15728U);
    t10 = (t0 + 5032U);
    t13 = *((char **)t10);
    t10 = (t0 + 15728U);
    t14 = ieee_p_1242562249_sub_3525738511873258197_1035706684(IEEE_P_1242562249, t15, t9, t8, t13, t10);
    t18 = (t15 + 12U);
    t16 = *((unsigned int *)t18);
    t17 = (1U * t16);
    t5 = (16U != t17);
    if (t5 == 1)
        goto LAB44;

LAB45:    t19 = (t0 + 9576);
    t20 = (t19 + 56U);
    t23 = *((char **)t20);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t14, 16U);
    xsi_driver_first_trans_fast(t19);
    goto LAB42;

LAB44:    xsi_size_not_matching(16U, t17, 0);
    goto LAB45;

LAB46:    xsi_size_not_matching(16U, t17, 0);
    goto LAB47;

LAB48:    xsi_size_not_matching(5U, t17, 0);
    goto LAB49;

}

static void work_a_4108797985_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(142, ng0);

LAB3:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 9960);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 14U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 8968);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4108797985_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(143, ng0);

LAB3:    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t1 = (t0 + 10024);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 14U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 8984);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4108797985_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(144, ng0);

LAB3:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t1 = (t0 + 10088);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 15U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 9000);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4108797985_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(145, ng0);

LAB3:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t3 = (15 - 14);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 10152);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 15U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 9016);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4108797985_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(146, ng0);

LAB3:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 10216);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 1U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 9032);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4108797985_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(147, ng0);

LAB3:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 10280);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 9048);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_4108797985_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4108797985_3212880686_p_0,(void *)work_a_4108797985_3212880686_p_1,(void *)work_a_4108797985_3212880686_p_2,(void *)work_a_4108797985_3212880686_p_3,(void *)work_a_4108797985_3212880686_p_4,(void *)work_a_4108797985_3212880686_p_5,(void *)work_a_4108797985_3212880686_p_6};
	xsi_register_didat("work_a_4108797985_3212880686", "isim/MAIN_TOP_TB_isim_beh.exe.sim/work/a_4108797985_3212880686.didat");
	xsi_register_executes(pe);
}
