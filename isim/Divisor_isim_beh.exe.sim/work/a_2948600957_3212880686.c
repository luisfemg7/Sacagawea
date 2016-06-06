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
static const char *ng0 = "/home/tony/Sacagawea/Divisor.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3499444699;

char *ieee_p_2592010699_sub_12303121079769504865_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_24166140421859237_503743352(char *, char *, char *, char *);
char *ieee_p_3499444699_sub_17348025400699484986_3536714472(char *, char *, char *, char *, char *, char *);
char *ieee_p_3499444699_sub_17348025400699556860_3536714472(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_3499444699_sub_451701196464510292_3536714472(char *, char *, char *, char *, char *);


static void work_a_2948600957_3212880686_p_0(char *t0)
{
    char t5[16];
    char t6[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    unsigned int t19;
    unsigned char t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 4408);
    *((int *)t1) = 1;
    t2 = (t0 + 4412);
    *((int *)t2) = 8;
    t3 = 1;
    t4 = 8;

LAB2:    if (t3 <= t4)
        goto LAB3;

LAB5:    t1 = (t0 + 2784);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(43, ng0);
    t7 = (t0 + 1488U);
    t8 = *((char **)t7);
    t7 = (t0 + 4368U);
    t9 = ieee_p_2592010699_sub_12303121079769504865_503743352(IEEE_P_2592010699, t6, t8, t7, (unsigned char)0);
    t10 = (t6 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t12 = xsi_vhdl_bitvec_sll(t12, t9, t11, 1);
    t13 = ieee_p_2592010699_sub_24166140421859237_503743352(IEEE_P_2592010699, t5, t12, t6);
    t14 = (t0 + 1488U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    t16 = (t5 + 12U);
    t17 = *((unsigned int *)t16);
    t17 = (t17 * 1U);
    memcpy(t14, t13, t17);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t18 = (0 - 7);
    t11 = (t18 * -1);
    t17 = (1U * t11);
    t19 = (0 + t17);
    t1 = (t2 + t19);
    t20 = *((unsigned char *)t1);
    t7 = (t0 + 1488U);
    t8 = *((char **)t7);
    t21 = (0 - 7);
    t22 = (t21 * -1);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t7 = (t8 + t24);
    *((unsigned char *)t7) = t20;
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 4352U);
    t7 = ieee_p_2592010699_sub_12303121079769504865_503743352(IEEE_P_2592010699, t6, t2, t1, (unsigned char)0);
    t8 = (t6 + 12U);
    t11 = *((unsigned int *)t8);
    t11 = (t11 * 1U);
    t9 = xsi_vhdl_bitvec_sll(t9, t7, t11, 1);
    t10 = ieee_p_2592010699_sub_24166140421859237_503743352(IEEE_P_2592010699, t5, t9, t6);
    t12 = (t5 + 12U);
    t17 = *((unsigned int *)t12);
    t17 = (t17 * 1U);
    t20 = (8U != t17);
    if (t20 == 1)
        goto LAB6;

LAB7:    t13 = (t0 + 2864);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t25 = *((char **)t16);
    memcpy(t25, t10, 8U);
    xsi_driver_first_trans_fast_port(t13);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1488U);
    t2 = *((char **)t1);
    t1 = (t0 + 4368U);
    t7 = (t0 + 1032U);
    t8 = *((char **)t7);
    t7 = (t0 + 4336U);
    t9 = ieee_p_3499444699_sub_17348025400699556860_3536714472(IEEE_P_3499444699, t5, t2, t1, t8, t7);
    t10 = (t0 + 1488U);
    t12 = *((char **)t10);
    t10 = (t12 + 0);
    t13 = (t5 + 12U);
    t11 = *((unsigned int *)t13);
    t17 = (1U * t11);
    memcpy(t10, t9, t17);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1488U);
    t2 = *((char **)t1);
    t1 = (t0 + 4368U);
    t7 = ieee_std_logic_arith_conv_signed_integer(IEEE_P_3499444699, t5, 0, 8);
    t20 = ieee_p_3499444699_sub_451701196464510292_3536714472(IEEE_P_3499444699, t2, t1, t7, t5);
    if (t20 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2864);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 7U, 1, 0LL);

LAB9:
LAB4:    t1 = (t0 + 4408);
    t3 = *((int *)t1);
    t2 = (t0 + 4412);
    t4 = *((int *)t2);
    if (t3 == t4)
        goto LAB5;

LAB11:    t18 = (t3 + 1);
    t3 = t18;
    t7 = (t0 + 4408);
    *((int *)t7) = t3;
    goto LAB2;

LAB6:    xsi_size_not_matching(8U, t17, 0);
    goto LAB7;

LAB8:    xsi_set_current_line(48, ng0);
    t8 = (t0 + 2864);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_delta(t8, 7U, 1, 0LL);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1488U);
    t2 = *((char **)t1);
    t1 = (t0 + 4368U);
    t7 = (t0 + 1032U);
    t8 = *((char **)t7);
    t7 = (t0 + 4336U);
    t9 = ieee_p_3499444699_sub_17348025400699484986_3536714472(IEEE_P_3499444699, t5, t2, t1, t8, t7);
    t10 = (t0 + 1488U);
    t12 = *((char **)t10);
    t10 = (t12 + 0);
    t13 = (t5 + 12U);
    t11 = *((unsigned int *)t13);
    t17 = (1U * t11);
    memcpy(t10, t9, t17);
    goto LAB9;

}


extern void work_a_2948600957_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2948600957_3212880686_p_0};
	xsi_register_didat("work_a_2948600957_3212880686", "isim/Divisor_isim_beh.exe.sim/work/a_2948600957_3212880686.didat");
	xsi_register_executes(pe);
}
