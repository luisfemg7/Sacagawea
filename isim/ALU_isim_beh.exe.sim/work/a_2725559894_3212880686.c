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
static const char *ng0 = "/home/tony/Sacagawea/ALU.vhd";
extern char *IEEE_P_3499444699;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_12303121079769504865_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_16439767405979520975_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989832805790689_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_207919886985903570_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_24166140421859237_503743352(char *, char *, char *, char *);
char *ieee_p_3499444699_sub_16710491788449183727_3536714472(char *, char *, char *, char *, char *, char *);
char *ieee_p_3499444699_sub_17137600329833919805_3536714472(char *, char *, char *, char *, char *, char *);
char *ieee_p_3499444699_sub_17348025400699484986_3536714472(char *, char *, char *, char *, char *, char *);
char *ieee_p_3499444699_sub_17348025400699556860_3536714472(char *, char *, char *, char *, char *, char *);
char *ieee_p_3499444699_sub_17566845831527943093_3536714472(char *, char *, char *, char *, int );
char *ieee_p_3499444699_sub_17566845831528014967_3536714472(char *, char *, char *, char *, int );
unsigned char ieee_p_3499444699_sub_451701196464510292_3536714472(char *, char *, char *, char *, char *);


static void work_a_2725559894_3212880686_p_0(char *t0)
{
    char t44[16];
    char t49[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    int t19;
    char *t20;
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
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned char t47;
    unsigned int t48;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;

LAB0:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5236);
    t4 = xsi_mem_cmp(t1, t2, 4U);
    if (t4 == 1)
        goto LAB3;

LAB16:    t5 = (t0 + 5240);
    t7 = xsi_mem_cmp(t5, t2, 4U);
    if (t7 == 1)
        goto LAB4;

LAB17:    t8 = (t0 + 5244);
    t10 = xsi_mem_cmp(t8, t2, 4U);
    if (t10 == 1)
        goto LAB5;

LAB18:    t11 = (t0 + 5248);
    t13 = xsi_mem_cmp(t11, t2, 4U);
    if (t13 == 1)
        goto LAB6;

LAB19:    t14 = (t0 + 5252);
    t16 = xsi_mem_cmp(t14, t2, 4U);
    if (t16 == 1)
        goto LAB7;

LAB20:    t17 = (t0 + 5256);
    t19 = xsi_mem_cmp(t17, t2, 4U);
    if (t19 == 1)
        goto LAB8;

LAB21:    t20 = (t0 + 5260);
    t22 = xsi_mem_cmp(t20, t2, 4U);
    if (t22 == 1)
        goto LAB9;

LAB22:    t23 = (t0 + 5264);
    t25 = xsi_mem_cmp(t23, t2, 4U);
    if (t25 == 1)
        goto LAB10;

LAB23:    t26 = (t0 + 5268);
    t28 = xsi_mem_cmp(t26, t2, 4U);
    if (t28 == 1)
        goto LAB11;

LAB24:    t29 = (t0 + 5272);
    t31 = xsi_mem_cmp(t29, t2, 4U);
    if (t31 == 1)
        goto LAB12;

LAB25:    t32 = (t0 + 5276);
    t34 = xsi_mem_cmp(t32, t2, 4U);
    if (t34 == 1)
        goto LAB13;

LAB26:    t35 = (t0 + 5280);
    t37 = xsi_mem_cmp(t35, t2, 4U);
    if (t37 == 1)
        goto LAB14;

LAB27:
LAB15:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 5300);
    t3 = (t0 + 3424);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:    t1 = (t0 + 3344);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(39, ng0);
    t38 = (t0 + 1192U);
    t39 = *((char **)t38);
    t38 = (t0 + 3424);
    t40 = (t38 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memcpy(t43, t39, 8U);
    xsi_driver_first_trans_fast_port(t38);
    goto LAB2;

LAB4:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5096U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5096U);
    t6 = ieee_p_3499444699_sub_17348025400699484986_3536714472(IEEE_P_3499444699, t44, t2, t1, t5, t3);
    t8 = (t44 + 12U);
    t45 = *((unsigned int *)t8);
    t46 = (1U * t45);
    t47 = (8U != t46);
    if (t47 == 1)
        goto LAB29;

LAB30:    t9 = (t0 + 3424);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 8U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB5:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5096U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5096U);
    t6 = ieee_p_3499444699_sub_17348025400699556860_3536714472(IEEE_P_3499444699, t44, t2, t1, t5, t3);
    t8 = (t44 + 12U);
    t45 = *((unsigned int *)t8);
    t46 = (1U * t45);
    t47 = (8U != t46);
    if (t47 == 1)
        goto LAB31;

LAB32:    t9 = (t0 + 3424);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 8U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5096U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5096U);
    t6 = ieee_p_3499444699_sub_17137600329833919805_3536714472(IEEE_P_3499444699, t44, t2, t1, t5, t3);
    t8 = (t0 + 1808U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    t11 = (t44 + 12U);
    t45 = *((unsigned int *)t11);
    t46 = (1U * t45);
    memcpy(t8, t6, t46);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    t45 = (15 - 7);
    t46 = (t45 * 1U);
    t48 = (0 + t46);
    t1 = (t2 + t48);
    t3 = (t0 + 3424);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB7:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 5284);
    t3 = (t0 + 1928U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    memcpy(t3, t1, 8U);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 2048U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 8U);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 5292);
    *((int *)t1) = 0;
    t2 = (t0 + 5296);
    *((int *)t2) = 7;
    t4 = 0;
    t7 = 7;

LAB33:    if (t4 <= t7)
        goto LAB34;

LAB36:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    t1 = (t0 + 3424);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5096U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5096U);
    t6 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t44, t2, t1, t5, t3);
    t8 = (t44 + 12U);
    t45 = *((unsigned int *)t8);
    t46 = (1U * t45);
    t47 = (8U != t46);
    if (t47 == 1)
        goto LAB41;

LAB42:    t9 = (t0 + 3424);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 8U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB9:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5096U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5096U);
    t6 = ieee_p_2592010699_sub_16439767405979520975_503743352(IEEE_P_2592010699, t44, t2, t1, t5, t3);
    t8 = (t44 + 12U);
    t45 = *((unsigned int *)t8);
    t46 = (1U * t45);
    t47 = (8U != t46);
    if (t47 == 1)
        goto LAB43;

LAB44:    t9 = (t0 + 3424);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 8U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB10:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5096U);
    t3 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t44, t2, t1);
    t5 = (t44 + 12U);
    t45 = *((unsigned int *)t5);
    t46 = (1U * t45);
    t47 = (8U != t46);
    if (t47 == 1)
        goto LAB45;

LAB46:    t6 = (t0 + 3424);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 8U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB11:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5096U);
    t3 = ieee_p_2592010699_sub_12303121079769504865_503743352(IEEE_P_2592010699, t49, t2, t1, (unsigned char)0);
    t5 = (t49 + 12U);
    t45 = *((unsigned int *)t5);
    t45 = (t45 * 1U);
    t6 = xsi_vhdl_bitvec_srl(t6, t3, t45, 1);
    t8 = ieee_p_2592010699_sub_24166140421859237_503743352(IEEE_P_2592010699, t44, t6, t49);
    t9 = (t44 + 12U);
    t46 = *((unsigned int *)t9);
    t46 = (t46 * 1U);
    t47 = (8U != t46);
    if (t47 == 1)
        goto LAB47;

LAB48:    t11 = (t0 + 3424);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t8, 8U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB2;

LAB12:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5096U);
    t3 = ieee_p_2592010699_sub_12303121079769504865_503743352(IEEE_P_2592010699, t49, t2, t1, (unsigned char)0);
    t5 = (t49 + 12U);
    t45 = *((unsigned int *)t5);
    t45 = (t45 * 1U);
    t6 = xsi_vhdl_bitvec_sll(t6, t3, t45, 1);
    t8 = ieee_p_2592010699_sub_24166140421859237_503743352(IEEE_P_2592010699, t44, t6, t49);
    t9 = (t44 + 12U);
    t46 = *((unsigned int *)t9);
    t46 = (t46 * 1U);
    t47 = (8U != t46);
    if (t47 == 1)
        goto LAB49;

LAB50:    t11 = (t0 + 3424);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t8, 8U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB2;

LAB13:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5096U);
    t3 = ieee_p_3499444699_sub_17566845831527943093_3536714472(IEEE_P_3499444699, t44, t2, t1, 1);
    t5 = (t44 + 12U);
    t45 = *((unsigned int *)t5);
    t46 = (1U * t45);
    t47 = (8U != t46);
    if (t47 == 1)
        goto LAB51;

LAB52:    t6 = (t0 + 3424);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 8U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB14:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5096U);
    t3 = ieee_p_3499444699_sub_17566845831528014967_3536714472(IEEE_P_3499444699, t44, t2, t1, 1);
    t5 = (t44 + 12U);
    t45 = *((unsigned int *)t5);
    t46 = (1U * t45);
    t47 = (8U != t46);
    if (t47 == 1)
        goto LAB53;

LAB54:    t6 = (t0 + 3424);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 8U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB28:;
LAB29:    xsi_size_not_matching(8U, t46, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(8U, t46, 0);
    goto LAB32;

LAB34:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1928U);
    t5 = *((char **)t3);
    t3 = (t0 + 5160U);
    t6 = ieee_p_2592010699_sub_12303121079769504865_503743352(IEEE_P_2592010699, t49, t5, t3, (unsigned char)0);
    t8 = (t49 + 12U);
    t45 = *((unsigned int *)t8);
    t45 = (t45 * 1U);
    t9 = xsi_vhdl_bitvec_sll(t9, t6, t45, 1);
    t11 = ieee_p_2592010699_sub_24166140421859237_503743352(IEEE_P_2592010699, t44, t9, t49);
    t12 = (t0 + 1928U);
    t14 = *((char **)t12);
    t12 = (t14 + 0);
    t15 = (t44 + 12U);
    t46 = *((unsigned int *)t15);
    t46 = (t46 * 1U);
    memcpy(t12, t11, t46);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    t10 = (7 - 7);
    t45 = (t10 * -1);
    t46 = (1U * t45);
    t48 = (0 + t46);
    t1 = (t2 + t48);
    t47 = *((unsigned char *)t1);
    t3 = (t0 + 1928U);
    t5 = *((char **)t3);
    t13 = (0 - 7);
    t50 = (t13 * -1);
    t51 = (1U * t50);
    t52 = (0 + t51);
    t3 = (t5 + t52);
    *((unsigned char *)t3) = t47;
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    t1 = (t0 + 5160U);
    t3 = ieee_p_2592010699_sub_12303121079769504865_503743352(IEEE_P_2592010699, t49, t2, t1, (unsigned char)0);
    t5 = (t49 + 12U);
    t45 = *((unsigned int *)t5);
    t45 = (t45 * 1U);
    t6 = xsi_vhdl_bitvec_sll(t6, t3, t45, 1);
    t8 = ieee_p_2592010699_sub_24166140421859237_503743352(IEEE_P_2592010699, t44, t6, t49);
    t9 = (t0 + 2048U);
    t11 = *((char **)t9);
    t9 = (t11 + 0);
    t12 = (t44 + 12U);
    t46 = *((unsigned int *)t12);
    t46 = (t46 * 1U);
    memcpy(t9, t8, t46);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    t1 = (t0 + 5160U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5096U);
    t6 = ieee_p_3499444699_sub_16710491788449183727_3536714472(IEEE_P_3499444699, t44, t2, t1, t5, t3);
    t8 = (t0 + 1928U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    t11 = (t44 + 12U);
    t45 = *((unsigned int *)t11);
    t46 = (1U * t45);
    memcpy(t8, t6, t46);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    t1 = (t0 + 5160U);
    t3 = ieee_std_logic_arith_conv_signed_integer(IEEE_P_3499444699, t44, 0, 7);
    t47 = ieee_p_3499444699_sub_451701196464510292_3536714472(IEEE_P_3499444699, t2, t1, t3, t44);
    if (t47 != 0)
        goto LAB37;

LAB39:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    t10 = (0 - 7);
    t45 = (t10 * -1);
    t46 = (1U * t45);
    t48 = (0 + t46);
    t1 = (t2 + t48);
    *((unsigned char *)t1) = (unsigned char)3;

LAB38:
LAB35:    t1 = (t0 + 5292);
    t4 = *((int *)t1);
    t2 = (t0 + 5296);
    t7 = *((int *)t2);
    if (t4 == t7)
        goto LAB36;

LAB40:    t10 = (t4 + 1);
    t4 = t10;
    t3 = (t0 + 5292);
    *((int *)t3) = t4;
    goto LAB33;

LAB37:    xsi_set_current_line(52, ng0);
    t5 = (t0 + 2048U);
    t6 = *((char **)t5);
    t10 = (0 - 7);
    t45 = (t10 * -1);
    t46 = (1U * t45);
    t48 = (0 + t46);
    t5 = (t6 + t48);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    t1 = (t0 + 5160U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5096U);
    t6 = ieee_p_3499444699_sub_17348025400699484986_3536714472(IEEE_P_3499444699, t44, t2, t1, t5, t3);
    t8 = (t0 + 1928U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    t11 = (t44 + 12U);
    t45 = *((unsigned int *)t11);
    t46 = (1U * t45);
    memcpy(t8, t6, t46);
    goto LAB38;

LAB41:    xsi_size_not_matching(8U, t46, 0);
    goto LAB42;

LAB43:    xsi_size_not_matching(8U, t46, 0);
    goto LAB44;

LAB45:    xsi_size_not_matching(8U, t46, 0);
    goto LAB46;

LAB47:    xsi_size_not_matching(8U, t46, 0);
    goto LAB48;

LAB49:    xsi_size_not_matching(8U, t46, 0);
    goto LAB50;

LAB51:    xsi_size_not_matching(8U, t46, 0);
    goto LAB52;

LAB53:    xsi_size_not_matching(8U, t46, 0);
    goto LAB54;

}


extern void work_a_2725559894_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2725559894_3212880686_p_0};
	xsi_register_didat("work_a_2725559894_3212880686", "isim/ALU_isim_beh.exe.sim/work/a_2725559894_3212880686.didat");
	xsi_register_executes(pe);
}
