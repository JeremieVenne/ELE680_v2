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
static const char *ng0 = "/home/f3nr1r/Documents/Workspace/Xilinx/ELE680_v2/ELE680_TOP/DAC_Block.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3018251451_3212880686_p_0(char *t0)
{
    char t51[16];
    char t52[16];
    char t54[16];
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
    char *t11;
    char *t12;
    int t13;
    int t14;
    int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    int t25;
    char *t26;
    int t28;
    char *t29;
    int t31;
    char *t32;
    int t34;
    char *t35;
    int t37;
    char *t38;
    int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t53;

LAB0:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1632U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3552);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 5896);
    t13 = xsi_mem_cmp(t1, t3, 4U);
    if (t13 == 1)
        goto LAB9;

LAB22:    t7 = (t0 + 5900);
    t14 = xsi_mem_cmp(t7, t3, 4U);
    if (t14 == 1)
        goto LAB10;

LAB23:    t9 = (t0 + 5904);
    t15 = xsi_mem_cmp(t9, t3, 4U);
    if (t15 == 1)
        goto LAB11;

LAB24:    t11 = (t0 + 5908);
    t16 = xsi_mem_cmp(t11, t3, 4U);
    if (t16 == 1)
        goto LAB12;

LAB25:    t17 = (t0 + 5912);
    t19 = xsi_mem_cmp(t17, t3, 4U);
    if (t19 == 1)
        goto LAB13;

LAB26:    t20 = (t0 + 5916);
    t22 = xsi_mem_cmp(t20, t3, 4U);
    if (t22 == 1)
        goto LAB14;

LAB27:    t23 = (t0 + 5920);
    t25 = xsi_mem_cmp(t23, t3, 4U);
    if (t25 == 1)
        goto LAB15;

LAB28:    t26 = (t0 + 5924);
    t28 = xsi_mem_cmp(t26, t3, 4U);
    if (t28 == 1)
        goto LAB16;

LAB29:    t29 = (t0 + 5928);
    t31 = xsi_mem_cmp(t29, t3, 4U);
    if (t31 == 1)
        goto LAB17;

LAB30:    t32 = (t0 + 5932);
    t34 = xsi_mem_cmp(t32, t3, 4U);
    if (t34 == 1)
        goto LAB18;

LAB31:    t35 = (t0 + 5936);
    t37 = xsi_mem_cmp(t35, t3, 4U);
    if (t37 == 1)
        goto LAB19;

LAB32:    t38 = (t0 + 5940);
    t40 = xsi_mem_cmp(t38, t3, 4U);
    if (t40 == 1)
        goto LAB20;

LAB33:
LAB21:    xsi_set_current_line(75, ng0);
    t1 = xsi_get_transient_memory(12U);
    memset(t1, 0, 12U);
    t3 = t1;
    memset(t3, (unsigned char)2, 12U);
    t4 = (t0 + 3648);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 12U);
    xsi_driver_first_trans_fast(t4);

LAB8:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(47, ng0);
    t3 = xsi_get_transient_memory(12U);
    memset(t3, 0, 12U);
    t7 = t3;
    memset(t7, (unsigned char)2, 12U);
    t8 = (t0 + 3648);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 12U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB9:    xsi_set_current_line(51, ng0);
    t41 = (t0 + 1032U);
    t42 = *((char **)t41);
    t43 = (13 - 13);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t41 = (t42 + t45);
    t46 = (t0 + 3648);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memcpy(t50, t41, 12U);
    xsi_driver_first_trans_fast(t46);
    goto LAB8;

LAB10:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 5944);
    t4 = (t0 + 1032U);
    t7 = *((char **)t4);
    t43 = (13 - 13);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t4 = (t7 + t45);
    t9 = ((IEEE_P_2592010699) + 4000);
    t10 = (t52 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 0;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t13 = (0 - 0);
    t53 = (t13 * 1);
    t53 = (t53 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t53;
    t11 = (t54 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 13;
    t12 = (t11 + 4U);
    *((int *)t12) = 3;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t14 = (3 - 13);
    t53 = (t14 * -1);
    t53 = (t53 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t53;
    t8 = xsi_base_array_concat(t8, t51, t9, (char)97, t1, t52, (char)97, t4, t54, (char)101);
    t53 = (1U + 11U);
    t2 = (12U != t53);
    if (t2 == 1)
        goto LAB35;

LAB36:    t12 = (t0 + 3648);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 12U);
    xsi_driver_first_trans_fast(t12);
    goto LAB8;

LAB11:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 5945);
    t4 = (t0 + 1032U);
    t7 = *((char **)t4);
    t43 = (13 - 13);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t4 = (t7 + t45);
    t9 = ((IEEE_P_2592010699) + 4000);
    t10 = (t52 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 1;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t13 = (1 - 0);
    t53 = (t13 * 1);
    t53 = (t53 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t53;
    t11 = (t54 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 13;
    t12 = (t11 + 4U);
    *((int *)t12) = 4;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t14 = (4 - 13);
    t53 = (t14 * -1);
    t53 = (t53 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t53;
    t8 = xsi_base_array_concat(t8, t51, t9, (char)97, t1, t52, (char)97, t4, t54, (char)101);
    t53 = (2U + 10U);
    t2 = (12U != t53);
    if (t2 == 1)
        goto LAB37;

LAB38:    t12 = (t0 + 3648);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 12U);
    xsi_driver_first_trans_fast(t12);
    goto LAB8;

LAB12:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 5947);
    t4 = (t0 + 1032U);
    t7 = *((char **)t4);
    t43 = (13 - 13);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t4 = (t7 + t45);
    t9 = ((IEEE_P_2592010699) + 4000);
    t10 = (t52 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 2;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t13 = (2 - 0);
    t53 = (t13 * 1);
    t53 = (t53 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t53;
    t11 = (t54 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 13;
    t12 = (t11 + 4U);
    *((int *)t12) = 5;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t14 = (5 - 13);
    t53 = (t14 * -1);
    t53 = (t53 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t53;
    t8 = xsi_base_array_concat(t8, t51, t9, (char)97, t1, t52, (char)97, t4, t54, (char)101);
    t53 = (3U + 9U);
    t2 = (12U != t53);
    if (t2 == 1)
        goto LAB39;

LAB40:    t12 = (t0 + 3648);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 12U);
    xsi_driver_first_trans_fast(t12);
    goto LAB8;

LAB13:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 5950);
    t4 = (t0 + 1032U);
    t7 = *((char **)t4);
    t43 = (13 - 13);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t4 = (t7 + t45);
    t9 = ((IEEE_P_2592010699) + 4000);
    t10 = (t52 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 3;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t13 = (3 - 0);
    t53 = (t13 * 1);
    t53 = (t53 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t53;
    t11 = (t54 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 13;
    t12 = (t11 + 4U);
    *((int *)t12) = 6;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t14 = (6 - 13);
    t53 = (t14 * -1);
    t53 = (t53 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t53;
    t8 = xsi_base_array_concat(t8, t51, t9, (char)97, t1, t52, (char)97, t4, t54, (char)101);
    t53 = (4U + 8U);
    t2 = (12U != t53);
    if (t2 == 1)
        goto LAB41;

LAB42:    t12 = (t0 + 3648);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 12U);
    xsi_driver_first_trans_fast(t12);
    goto LAB8;

LAB14:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 5954);
    t4 = (t0 + 1032U);
    t7 = *((char **)t4);
    t43 = (13 - 13);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t4 = (t7 + t45);
    t9 = ((IEEE_P_2592010699) + 4000);
    t10 = (t52 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 4;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t13 = (4 - 0);
    t53 = (t13 * 1);
    t53 = (t53 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t53;
    t11 = (t54 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 13;
    t12 = (t11 + 4U);
    *((int *)t12) = 7;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t14 = (7 - 13);
    t53 = (t14 * -1);
    t53 = (t53 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t53;
    t8 = xsi_base_array_concat(t8, t51, t9, (char)97, t1, t52, (char)97, t4, t54, (char)101);
    t53 = (5U + 7U);
    t2 = (12U != t53);
    if (t2 == 1)
        goto LAB43;

LAB44:    t12 = (t0 + 3648);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 12U);
    xsi_driver_first_trans_fast(t12);
    goto LAB8;

LAB15:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 5959);
    t4 = (t0 + 1032U);
    t7 = *((char **)t4);
    t43 = (13 - 13);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t4 = (t7 + t45);
    t9 = ((IEEE_P_2592010699) + 4000);
    t10 = (t52 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 5;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t13 = (5 - 0);
    t53 = (t13 * 1);
    t53 = (t53 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t53;
    t11 = (t54 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 13;
    t12 = (t11 + 4U);
    *((int *)t12) = 8;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t14 = (8 - 13);
    t53 = (t14 * -1);
    t53 = (t53 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t53;
    t8 = xsi_base_array_concat(t8, t51, t9, (char)97, t1, t52, (char)97, t4, t54, (char)101);
    t53 = (6U + 6U);
    t2 = (12U != t53);
    if (t2 == 1)
        goto LAB45;

LAB46:    t12 = (t0 + 3648);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 12U);
    xsi_driver_first_trans_fast(t12);
    goto LAB8;

LAB16:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 5965);
    t4 = (t0 + 1032U);
    t7 = *((char **)t4);
    t43 = (13 - 13);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t4 = (t7 + t45);
    t9 = ((IEEE_P_2592010699) + 4000);
    t10 = (t52 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 6;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t13 = (6 - 0);
    t53 = (t13 * 1);
    t53 = (t53 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t53;
    t11 = (t54 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 13;
    t12 = (t11 + 4U);
    *((int *)t12) = 9;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t14 = (9 - 13);
    t53 = (t14 * -1);
    t53 = (t53 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t53;
    t8 = xsi_base_array_concat(t8, t51, t9, (char)97, t1, t52, (char)97, t4, t54, (char)101);
    t53 = (7U + 5U);
    t2 = (12U != t53);
    if (t2 == 1)
        goto LAB47;

LAB48:    t12 = (t0 + 3648);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 12U);
    xsi_driver_first_trans_fast(t12);
    goto LAB8;

LAB17:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 5972);
    t4 = (t0 + 1032U);
    t7 = *((char **)t4);
    t43 = (13 - 13);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t4 = (t7 + t45);
    t9 = ((IEEE_P_2592010699) + 4000);
    t10 = (t52 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 7;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t13 = (7 - 0);
    t53 = (t13 * 1);
    t53 = (t53 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t53;
    t11 = (t54 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 13;
    t12 = (t11 + 4U);
    *((int *)t12) = 10;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t14 = (10 - 13);
    t53 = (t14 * -1);
    t53 = (t53 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t53;
    t8 = xsi_base_array_concat(t8, t51, t9, (char)97, t1, t52, (char)97, t4, t54, (char)101);
    t53 = (8U + 4U);
    t2 = (12U != t53);
    if (t2 == 1)
        goto LAB49;

LAB50:    t12 = (t0 + 3648);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 12U);
    xsi_driver_first_trans_fast(t12);
    goto LAB8;

LAB18:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 5980);
    t4 = (t0 + 1032U);
    t7 = *((char **)t4);
    t43 = (13 - 13);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t4 = (t7 + t45);
    t9 = ((IEEE_P_2592010699) + 4000);
    t10 = (t52 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 8;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t13 = (8 - 0);
    t53 = (t13 * 1);
    t53 = (t53 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t53;
    t11 = (t54 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 13;
    t12 = (t11 + 4U);
    *((int *)t12) = 11;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t14 = (11 - 13);
    t53 = (t14 * -1);
    t53 = (t53 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t53;
    t8 = xsi_base_array_concat(t8, t51, t9, (char)97, t1, t52, (char)97, t4, t54, (char)101);
    t53 = (9U + 3U);
    t2 = (12U != t53);
    if (t2 == 1)
        goto LAB51;

LAB52:    t12 = (t0 + 3648);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 12U);
    xsi_driver_first_trans_fast(t12);
    goto LAB8;

LAB19:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 5989);
    t4 = (t0 + 1032U);
    t7 = *((char **)t4);
    t43 = (13 - 13);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t4 = (t7 + t45);
    t9 = ((IEEE_P_2592010699) + 4000);
    t10 = (t52 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 9;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t13 = (9 - 0);
    t53 = (t13 * 1);
    t53 = (t53 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t53;
    t11 = (t54 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 13;
    t12 = (t11 + 4U);
    *((int *)t12) = 12;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t14 = (12 - 13);
    t53 = (t14 * -1);
    t53 = (t53 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t53;
    t8 = xsi_base_array_concat(t8, t51, t9, (char)97, t1, t52, (char)97, t4, t54, (char)101);
    t53 = (10U + 2U);
    t2 = (12U != t53);
    if (t2 == 1)
        goto LAB53;

LAB54:    t12 = (t0 + 3648);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 12U);
    xsi_driver_first_trans_fast(t12);
    goto LAB8;

LAB20:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 5999);
    t4 = (t0 + 1032U);
    t7 = *((char **)t4);
    t43 = (13 - 13);
    t44 = (t43 * 1U);
    t45 = (0 + t44);
    t4 = (t7 + t45);
    t9 = ((IEEE_P_2592010699) + 4000);
    t10 = (t52 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 10;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t13 = (10 - 0);
    t53 = (t13 * 1);
    t53 = (t53 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t53;
    t11 = (t54 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 13;
    t12 = (t11 + 4U);
    *((int *)t12) = 13;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t14 = (13 - 13);
    t53 = (t14 * -1);
    t53 = (t53 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t53;
    t8 = xsi_base_array_concat(t8, t51, t9, (char)97, t1, t52, (char)97, t4, t54, (char)101);
    t53 = (11U + 1U);
    t2 = (12U != t53);
    if (t2 == 1)
        goto LAB55;

LAB56:    t12 = (t0 + 3648);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 12U);
    xsi_driver_first_trans_fast(t12);
    goto LAB8;

LAB34:;
LAB35:    xsi_size_not_matching(12U, t53, 0);
    goto LAB36;

LAB37:    xsi_size_not_matching(12U, t53, 0);
    goto LAB38;

LAB39:    xsi_size_not_matching(12U, t53, 0);
    goto LAB40;

LAB41:    xsi_size_not_matching(12U, t53, 0);
    goto LAB42;

LAB43:    xsi_size_not_matching(12U, t53, 0);
    goto LAB44;

LAB45:    xsi_size_not_matching(12U, t53, 0);
    goto LAB46;

LAB47:    xsi_size_not_matching(12U, t53, 0);
    goto LAB48;

LAB49:    xsi_size_not_matching(12U, t53, 0);
    goto LAB50;

LAB51:    xsi_size_not_matching(12U, t53, 0);
    goto LAB52;

LAB53:    xsi_size_not_matching(12U, t53, 0);
    goto LAB54;

LAB55:    xsi_size_not_matching(12U, t53, 0);
    goto LAB56;

}

static void work_a_3018251451_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(80, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 3712);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 12U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3568);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3018251451_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3018251451_3212880686_p_0,(void *)work_a_3018251451_3212880686_p_1};
	xsi_register_didat("work_a_3018251451_3212880686", "isim/MAIN_TOP_TB_isim_beh.exe.sim/work/a_3018251451_3212880686.didat");
	xsi_register_executes(pe);
}
