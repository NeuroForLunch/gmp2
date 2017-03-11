/* Broadwell gmp-mparam.h -- Compiler/machine parameter header file.

Copyright 1991, 1993, 1994, 2000-2015 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of either:

  * the GNU Lesser General Public License as published by the Free
    Software Foundation; either version 3 of the License, or (at your
    option) any later version.

or

  * the GNU General Public License as published by the Free Software
    Foundation; either version 2 of the License, or (at your option) any
    later version.

or both in parallel, as here.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received copies of the GNU General Public License and the
GNU Lesser General Public License along with the GNU MP Library.  If not,
see https://www.gnu.org/licenses/.  */

#define GMP_LIMB_BITS 64
#define GMP_LIMB_BYTES 8

/* Disable use of slow functions.  FIXME: We should disable lib inclusion.  */
#undef HAVE_NATIVE_mpn_mul_2
#undef HAVE_NATIVE_mpn_addmul_2

/* 3400 MHz Intel Xeon Broadwell E3-1285Lv4 */
/* FFT tuning limit = 0.5 M */
/* Generated by tuneup.c, 2017-03-07, gcc 6.3 */

#define MOD_1_NORM_THRESHOLD                 0  /* always */
#define MOD_1_UNNORM_THRESHOLD               0  /* always */
#define MOD_1N_TO_MOD_1_1_THRESHOLD          4
#define MOD_1U_TO_MOD_1_1_THRESHOLD          3
#define MOD_1_1_TO_MOD_1_2_THRESHOLD        14
#define MOD_1_2_TO_MOD_1_4_THRESHOLD        24
#define PREINV_MOD_1_TO_MOD_1_THRESHOLD      8
#define USE_PREINV_DIVREM_1                  1  /* native */
#define DIV_QR_1_NORM_THRESHOLD              1
#define DIV_QR_1_UNNORM_THRESHOLD        MP_SIZE_T_MAX  /* never */
#define DIV_QR_2_PI2_THRESHOLD           MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD                 0  /* always (native) */
#define BMOD_1_TO_MOD_1_THRESHOLD           20

#define DIV_1_VS_MUL_1_PERCENT             456

#define MUL_TOOM22_THRESHOLD                27
#define MUL_TOOM33_THRESHOLD                75
#define MUL_TOOM44_THRESHOLD               218
#define MUL_TOOM6H_THRESHOLD               309
#define MUL_TOOM8H_THRESHOLD               430

#define MUL_TOOM32_TO_TOOM43_THRESHOLD      73
#define MUL_TOOM32_TO_TOOM53_THRESHOLD     155
#define MUL_TOOM42_TO_TOOM53_THRESHOLD     141
#define MUL_TOOM42_TO_TOOM63_THRESHOLD     149
#define MUL_TOOM43_TO_TOOM54_THRESHOLD     218

#define SQR_BASECASE_THRESHOLD               0  /* always (native) */
#define SQR_TOOM2_THRESHOLD                 39
#define SQR_TOOM3_THRESHOLD                117
#define SQR_TOOM4_THRESHOLD                406
#define SQR_TOOM6_THRESHOLD                502
#define SQR_TOOM8_THRESHOLD                  0  /* always */

#define MULMID_TOOM42_THRESHOLD             48

#define MULMOD_BNM1_THRESHOLD               15
#define SQRMOD_BNM1_THRESHOLD               15

#define MUL_FFT_MODF_THRESHOLD             408  /* k = 5 */
#define MUL_FFT_TABLE3                                      \
  { {    408, 5}, {     21, 6}, {     11, 5}, {     23, 6}, \
    {     12, 5}, {     25, 6}, {     25, 7}, {     13, 6}, \
    {     27, 7}, {     14, 6}, {     29, 7}, {     15, 6}, \
    {     31, 7}, {     17, 6}, {     35, 7}, {     24, 8}, \
    {     13, 7}, {     29, 8}, {     15, 7}, {     32, 8}, \
    {     17, 7}, {     35, 8}, {     19, 7}, {     39, 8}, \
    {     21, 9}, {     11, 8}, {     29, 9}, {     15, 8}, \
    {     35, 9}, {     19, 8}, {     41, 9}, {     23, 8}, \
    {     49, 9}, {     27,10}, {     15, 9}, {     39, 8}, \
    {     81, 9}, {     43,10}, {     23, 9}, {     55,11}, \
    {     15,10}, {     31, 9}, {     71,10}, {     39, 9}, \
    {     87,10}, {     47, 9}, {     99,10}, {     55,11}, \
    {     31,10}, {     63, 9}, {    135,10}, {     87,11}, \
    {     47,10}, {    111,12}, {     31,11}, {     63,10}, \
    {    143,11}, {     95,10}, {    191,11}, {    111,12}, \
    {     63,11}, {    127,10}, {    255, 9}, {    543,11}, \
    {    143,10}, {    287, 9}, {    607,11}, {    159,10}, \
    {    319, 9}, {    639,12}, {     95,10}, {    383,13}, \
    {   8192,14}, {  16384,15}, {  32768,16}, {  65536,17}, \
    { 131072,18}, { 262144,19}, { 524288,20}, {1048576,21}, \
    {2097152,22}, {4194304,23}, {8388608,24} }
#define MUL_FFT_TABLE3_SIZE 83
#define MUL_FFT_THRESHOLD                 4736

#define SQR_FFT_MODF_THRESHOLD             372  /* k = 5 */
#define SQR_FFT_TABLE3                                      \
  { {    372, 5}, {     21, 6}, {     11, 5}, {     23, 6}, \
    {     25, 7}, {     13, 6}, {     27, 7}, {     14, 6}, \
    {     29, 7}, {     21, 8}, {     11, 7}, {     25, 8}, \
    {     13, 7}, {     28, 8}, {     15, 7}, {     32, 8}, \
    {     21, 9}, {     11, 8}, {     27, 9}, {     15, 8}, \
    {     35, 9}, {     19, 8}, {     41, 9}, {     23, 8}, \
    {     47, 9}, {     27,10}, {     15, 9}, {     39,10}, \
    {     23, 9}, {     51,11}, {     15,10}, {     31, 9}, \
    {     67,10}, {     39, 9}, {     79,10}, {     55,11}, \
    {     31,10}, {     79,11}, {     47,10}, {     95,12}, \
    {     31,11}, {     63,10}, {    127, 9}, {    255,10}, \
    {    135,11}, {     79,10}, {    159,11}, {     95,10}, \
    {    191,12}, {     63, 9}, {    511, 8}, {   1023, 9}, \
    {    607,11}, {    159,10}, {    319, 9}, {    671,12}, \
    {     95,11}, {    191,10}, {    383, 9}, {    767,11}, \
    {    207,13}, {   8192,14}, {  16384,15}, {  32768,16}, \
    {  65536,17}, { 131072,18}, { 262144,19}, { 524288,20}, \
    {1048576,21}, {2097152,22}, {4194304,23}, {8388608,24} }
#define SQR_FFT_TABLE3_SIZE 72
#define SQR_FFT_THRESHOLD                 3648

#define MULLO_BASECASE_THRESHOLD             0  /* always */
#define MULLO_DC_THRESHOLD                  33
#define MULLO_MUL_N_THRESHOLD             8648
#define SQRLO_BASECASE_THRESHOLD             8
#define SQRLO_DC_THRESHOLD                 174
#define SQRLO_SQR_THRESHOLD               7159

#define DC_DIV_QR_THRESHOLD                 56
#define DC_DIVAPPR_Q_THRESHOLD             183
#define DC_BDIV_QR_THRESHOLD                96
#define DC_BDIV_Q_THRESHOLD                194

#define INV_MULMOD_BNM1_THRESHOLD           54
#define INV_NEWTON_THRESHOLD               179
#define INV_APPR_THRESHOLD                 179

#define BINV_NEWTON_THRESHOLD              300
#define REDC_1_TO_REDC_2_THRESHOLD          32
#define REDC_2_TO_REDC_N_THRESHOLD          84

#define MU_DIV_QR_THRESHOLD               1589
#define MU_DIVAPPR_Q_THRESHOLD            1589
#define MUPI_DIV_QR_THRESHOLD               81
#define MU_BDIV_QR_THRESHOLD              1470
#define MU_BDIV_Q_THRESHOLD               1713

#define POWM_SEC_TABLE  1,19,191,386,1167,1603

#define GET_STR_DC_THRESHOLD                12
#define GET_STR_PRECOMPUTE_THRESHOLD        20
#define SET_STR_DC_THRESHOLD               874
#define SET_STR_PRECOMPUTE_THRESHOLD      1690

#define FAC_DSC_THRESHOLD                  662
#define FAC_ODD_THRESHOLD                   44

#define MATRIX22_STRASSEN_THRESHOLD         19
#define HGCD_THRESHOLD                      71
#define HGCD_APPR_THRESHOLD                 55
#define HGCD_REDUCE_THRESHOLD             3014
#define GCD_DC_THRESHOLD                   630
#define GCDEXT_DC_THRESHOLD                393
#define JACOBI_BASE_METHOD                   1
