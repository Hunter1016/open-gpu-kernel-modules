/*
 * SPDX-FileCopyrightText: Copyright (c) 2003-2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the Software),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef __ls10_dev_minion_ip_addendum_h__
#define __ls10_dev_minion_ip_addendum_h__

// ALARM Timings needed for EMU
#define NV_MINION_DL_CMD_DATA_RXCAL_EN_ALARM 0x50
#define NV_MINION_DL_CMD_DATA_INIT_CAL_DONE  0x26

// filtering dev_minion_dlstat.ref for pattern (CMINION|MINION|NVLSTAT|PMINION|SWMINION)
#define NV_NVLSTAT                                                    0x00000103:0x00000000 /* RW--D */
#define NV_NVLSTAT_UC01                                                          0x00000001 /* R--4R */
#define NV_NVLSTAT_UC01_PM_STATE                                                      31:31 /* R---F */
#define NV_NVLSTAT_UC01_ACMODE_STATE                                                  30:30 /* R---F */
#define NV_NVLSTAT_UC01_LANES_ENABLED                                                 29:29 /* R---F */
#define NV_NVLSTAT_UC01_LANES_ENABLED_TRUE                                              0x1 /* R---V */
#define NV_NVLSTAT_UC01_LANES_ENABLED_FALSE                                             0x0 /* R---V */
#define NV_NVLSTAT_UC01_INBAND_BUFFER_FAIL                                            26:26 /* R---F */
#define NV_NVLSTAT_UC01_INBAND_BUFFER_FAIL_TRUE                                         0x1 /* R---F */
#define NV_NVLSTAT_UC01_INBAND_BUFFER_FAIL_FALSE                                        0x0 /* R---F */
#define NV_NVLSTAT_UC01_INBAND_BUFFER_COMPLETE                                        25:25 /* R---F */
#define NV_NVLSTAT_UC01_INBAND_BUFFER_COMPLETE_TRUE                                     0x1 /* R---F */
#define NV_NVLSTAT_UC01_INBAND_BUFFER_COMPLETE_FALSE                                    0x0 /* R---F */
#define NV_NVLSTAT_UC01_L2EXIT_DONE                                                   24:24 /* R---F */
#define NV_NVLSTAT_UC01_L2EXIT_DONE_SUCCESS                                             0x1 /* R---V */
#define NV_NVLSTAT_UC01_L2EXIT_DONE_UNKNOWN                                             0x0 /* R---V */
#define NV_NVLSTAT_UC01_TRAINING_BUFFER_STATUS                                        23:20 /* R---F */
#define NV_NVLSTAT_UC01_SEARCH_ERROR                                                  19:19 /* R---F */
#define NV_NVLSTAT_UC01_TRAINING_GOOD                                                 18:18 /* R---F */
#define NV_NVLSTAT_UC01_TRAINING_GOOD_SUCCESS                                           0x1 /* R---V */
#define NV_NVLSTAT_UC01_TRAINING_GOOD_UNKNOWN                                           0x0 /* R---V */
#define NV_NVLSTAT_UC01_AUTOINIT_DONE                                                 17:17 /* R---F */
#define NV_NVLSTAT_UC01_AUTOINIT_DONE_SUCCESS                                           0x1 /* R---V */
#define NV_NVLSTAT_UC01_AUTOINIT_DONE_UNKNOWN                                           0x0 /* R---V */
#define NV_NVLSTAT_UC01_CONFIG_GOOD                                                   16:16 /* R---F */
#define NV_NVLSTAT_UC01_CONFIG_GOOD_SUCCESS                                             0x1 /* R---V */
#define NV_NVLSTAT_UC01_CONFIG_GOOD_UNKNOWN                                             0x0 /* R---V */
#define NV_NVLSTAT_UC01_LINK_STATE                                                     15:0 /* R---F */
#define NV_NVLSTAT_LNK0                                                          0x00000010 /* R--4R */
#define NV_NVLSTAT_LNK0_INTR_TX_FAULT_RAM                                               4:4 /* R---F */
#define NV_NVLSTAT_LNK0_INTR_TX_FAULT_INTERFACE                                         5:5 /* R---F */
#define NV_NVLSTAT_LNK0_INTR_TX_FAULT_SUBLINK_CHANGE                                    8:8 /* R---F */
#define NV_NVLSTAT_LNK0_INTR_RX_FAULT_SUBLINK_CHANGE                                  16:16 /* R---F */
#define NV_NVLSTAT_LNK0_INTR_RX_FAULT_DL_PROTOCOL                                     20:20 /* R---F */
#define NV_NVLSTAT_LNK0_INTR_RX_FAULT_SHORT_ERROR_RATE                                21:21 /* R---F */
#define NV_NVLSTAT_LNK0_INTR_RX_FAULT_LONG_ERROR_RATE                                 22:22 /* R---F */
#define NV_NVLSTAT_LNK0_INTR_LTSSM_PROTOCOL                                           29:29 /* R---F */
#define NV_NVLSTAT_LNK1                                                          0x00000011 /* R--4R */
#define NV_NVLSTAT_LNK1_ERROR_COUNT1_RECOVERY_EVENTS_VALUE                             30:0 /* R---F */
#define NV_NVLSTAT_LNK1_ERROR_COUNT1_RECOVERY_EVENTS_VALUE_SRCOVF                0x000003ff /* R---V */
#define NV_NVLSTAT_LNK1_ERROR_COUNT1_RECOVERY_EVENTS_OVER                             31:31 /* R---F */
#define NV_NVLSTAT_LNK1_ERROR_COUNT1_RECOVERY_EVENTS_OVER_OVER                          0x1 /* R---V */
#define NV_NVLSTAT_LNK1_ERROR_COUNT1_RECOVERY_EVENTS_OVER_OKAY                          0x0 /* R---V */
#define NV_NVLSTAT_LNK2                                                          0x00000012 /* R--4R */
#define NV_NVLSTAT_LNK2_RXDET_LINK_STATUS                                               9:8 /* R---F */
#define NV_NVLSTAT_LNK2_RXDET_LINK_STATUS_UNINITIALIZED                                 0x0 /* R---V */
#define NV_NVLSTAT_LNK2_RXDET_LINK_STATUS_SEARCH                                        0x1 /* R---V */
#define NV_NVLSTAT_LNK2_RXDET_LINK_STATUS_FOUND                                         0x2 /* R---V */
#define NV_NVLSTAT_LNK2_RXDET_LINK_STATUS_TIMEOUT                                       0x3 /* R---V */
#define NV_NVLSTAT_LNK2_RXDET_LANE_STATUS                                               7:0 /* R---F */
#define NV_NVLSTAT_LNK2_RXDET_LANE_STATUS_FOUND                                        0x0f /* R---V */
#define NV_NVLSTAT_LNK3                                                          0x00000013 /* R--4R */
#define NV_NVLSTAT_LNK3_LINERATE                                                       23:0 /* R---F */
#define NV_NVLSTAT_LNK4                                                          0x00000014 /* R--4R */
#define NV_NVLSTAT_LNK4_LINKCLOCK                                                      15:0 /* R---F */
#define NV_NVLSTAT_LNK5                                                          0x00000015 /* R--4R */
#define NV_NVLSTAT_LNK5_DATARATE                                                       31:0 /* R---F */
#define NV_NVLSTAT_TX01                                                          0x00000021 /* R--4R */
#define NV_NVLSTAT_TX01_COUNT_TX_STATE_NVHS_VALUE                                      30:0 /* R---F */
#define NV_NVLSTAT_TX01_COUNT_TX_STATE_NVHS_VALUE_SRCOVF                         0x0000ffff /* R---V */
#define NV_NVLSTAT_TX01_COUNT_TX_STATE_NVHS_OVER                                      31:31 /* R---F */
#define NV_NVLSTAT_TX01_COUNT_TX_STATE_NVHS_OVER_OVER                                   0x1 /* R---V */
#define NV_NVLSTAT_TX01_COUNT_TX_STATE_NVHS_OVER_OKAY                                   0x0 /* R---V */
#define NV_NVLSTAT_TX02                                                          0x00000022 /* R--4R */
#define NV_NVLSTAT_TX02_COUNT_TX_STATE_OTHER_VALUE                                     30:0 /* R---F */
#define NV_NVLSTAT_TX02_COUNT_TX_STATE_OTHER_VALUE_SRCOVF                        0x0000ffff /* R---V */
#define NV_NVLSTAT_TX02_COUNT_TX_STATE_OTHER_OVER                                     31:31 /* R---F */
#define NV_NVLSTAT_TX02_COUNT_TX_STATE_OTHER_OVER_OVER                                  0x1 /* R---V */
#define NV_NVLSTAT_TX02_COUNT_TX_STATE_OTHER_OVER_OKAY                                  0x0 /* R---V */
#define NV_NVLSTAT_TX03                                                          0x00000023 /* R--4R */
#define NV_NVLSTAT_TX03_DELAY_LCL_LP_ENTER_VALUE                                       30:0 /* R---F */
#define NV_NVLSTAT_TX03_DELAY_LCL_LP_ENTER_VALUE_SRCOVF                          0x000000ff /* R---V */
#define NV_NVLSTAT_TX03_DELAY_LCL_LP_ENTER_OVER                                       31:31 /* R---F */
#define NV_NVLSTAT_TX03_DELAY_LCL_LP_ENTER_OVER_OVER                                    0x1 /* R---V */
#define NV_NVLSTAT_TX03_DELAY_LCL_LP_ENTER_OVER_OKAY                                    0x0 /* R---V */
#define NV_NVLSTAT_TX04                                                          0x00000024 /* R--4R */
#define NV_NVLSTAT_TX04_DELAY_LCL_LP_EXIT_VALUE                                        30:0 /* R---F */
#define NV_NVLSTAT_TX04_DELAY_LCL_LP_EXIT_VALUE_SRCOVF                           0x000000ff /* R---V */
#define NV_NVLSTAT_TX04_DELAY_LCL_LP_EXIT_OVER                                        31:31 /* R---F */
#define NV_NVLSTAT_TX04_DELAY_LCL_LP_EXIT_OVER_OVER                                     0x1 /* R---V */
#define NV_NVLSTAT_TX04_DELAY_LCL_LP_EXIT_OVER_OKAY                                     0x0 /* R---V */
#define NV_NVLSTAT_TX05                                                          0x00000025 /* R--4R */
#define NV_NVLSTAT_TX05_NUM_LCL_LP_EXIT_VALUE                                          30:0 /* R---F */
#define NV_NVLSTAT_TX05_NUM_LCL_LP_EXIT_VALUE_SRCOVF                             0x0000ffff /* R---V */
#define NV_NVLSTAT_TX05_NUM_LCL_LP_EXIT_OVER                                          31:31 /* R---F */
#define NV_NVLSTAT_TX05_NUM_LCL_LP_EXIT_OVER_OVER                                       0x1 /* R---V */
#define NV_NVLSTAT_TX05_NUM_LCL_LP_EXIT_OVER_OKAY                                       0x0 /* R---V */
#define NV_NVLSTAT_TX06                                                          0x00000026 /* R--4R */
#define NV_NVLSTAT_TX06_NUM_LCL_LP_ENTER_VALUE                                         30:0 /* R---F */
#define NV_NVLSTAT_TX06_NUM_LCL_LP_ENTER_VALUE_SRCOVF                            0x0000ffff /* R---V */
#define NV_NVLSTAT_TX06_NUM_LCL_LP_ENTER_OVER                                         31:31 /* R---F */
#define NV_NVLSTAT_TX06_NUM_LCL_LP_ENTER_OVER_OVER                                      0x1 /* R---V */
#define NV_NVLSTAT_TX06_NUM_LCL_LP_ENTER_OVER_OKAY                                      0x0 /* R---V */
#define NV_NVLSTAT_TX07                                                          0x00000027 /* R--4R */
#define NV_NVLSTAT_TX07_DELAY_LCL_FB_EXIT_OTHER_VALUE                                  30:0 /* R---F */
#define NV_NVLSTAT_TX07_DELAY_LCL_FB_EXIT_OTHER_VALUE_SRCOVF                     0x000000ff /* R---V */
#define NV_NVLSTAT_TX07_DELAY_LCL_FB_EXIT_OTHER_OVER                                  31:31 /* R---F */
#define NV_NVLSTAT_TX07_DELAY_LCL_FB_EXIT_OTHER_OVER_OVER                               0x1 /* R---V */
#define NV_NVLSTAT_TX07_DELAY_LCL_FB_EXIT_OTHER_OVER_OKAY                               0x0 /* R---V */
#define NV_NVLSTAT_TX08                                                          0x00000028 /* R--4R */
#define NV_NVLSTAT_TX08_DELAY_LCL_FB_ENTER_OTHER_VALUE                                 30:0 /* R---F */
#define NV_NVLSTAT_TX08_DELAY_LCL_FB_ENTER_OTHER_VALUE_SRCOVF                    0x000000ff /* R---V */
#define NV_NVLSTAT_TX08_DELAY_LCL_FB_ENTER_OTHER_OVER                                 31:31 /* R---F */
#define NV_NVLSTAT_TX08_DELAY_LCL_FB_ENTER_OTHER_OVER_OVER                              0x1 /* R---V */
#define NV_NVLSTAT_TX08_DELAY_LCL_FB_ENTER_OTHER_OVER_OKAY                              0x0 /* R---V */
#define NV_NVLSTAT_TX09                                                          0x00000029 /* R--4R */
#define NV_NVLSTAT_TX09_REPLAY_EVENTS_VALUE                                            30:0 /* R---F */
#define NV_NVLSTAT_TX09_REPLAY_EVENTS_VALUE_SRCOVF                               0x000000ff /* R---V */
#define NV_NVLSTAT_TX09_REPLAY_EVENTS_OVER                                            31:31 /* R---F */
#define NV_NVLSTAT_TX09_REPLAY_EVENTS_OVER_OVER                                         0x1 /* R---V */
#define NV_NVLSTAT_TX09_REPLAY_EVENTS_OVER_OKAY                                         0x0 /* R---V */
#define NV_NVLSTAT_TX10                                                          0x0000002a /* R--4R */
#define NV_NVLSTAT_TX10_COUNT_TX_STATE_SLEEP_VALUE                                     30:0 /* R---F */
#define NV_NVLSTAT_TX10_COUNT_TX_STATE_SLEEP_VALUE_SRCOVF                        0x0000ffff /* R---V */
#define NV_NVLSTAT_TX10_COUNT_TX_STATE_SLEEP_OVER                                     31:31 /* R---F */
#define NV_NVLSTAT_TX10_COUNT_TX_STATE_SLEEP_OVER_OVER                                  0x1 /* R---V */
#define NV_NVLSTAT_TX10_COUNT_TX_STATE_SLEEP_OVER_OKAY                                  0x0 /* R---V */
#define NV_NVLSTAT_TX11                                                          0x0000002b /* R--4R */
#define NV_NVLSTAT_TX11_NUM_RMT_LP_EXIT_VALUE                                          30:0 /* R---F */
#define NV_NVLSTAT_TX11_NUM_RMT_LP_EXIT_VALUE_SRCOVF                             0x0000ffff /* R---V */
#define NV_NVLSTAT_TX11_NUM_RMT_LP_EXIT_OVER                                          31:31 /* R---F */
#define NV_NVLSTAT_TX11_NUM_RMT_LP_EXIT_OVER_OVER                                       0x1 /* R---V */
#define NV_NVLSTAT_TX11_NUM_RMT_LP_EXIT_OVER_OKAY                                       0x0 /* R---V */
#define NV_NVLSTAT_TX12                                                          0x0000002c /* R--4R */
#define NV_NVLSTAT_TX12_TX_LPOCC_HIST                                                  31:0 /* R---F */
#define NV_NVLSTAT_TX13                                                          0x0000002d /* R--4R */
#define NV_NVLSTAT_TX13_TX_LPOCC_HIST                                                  31:0 /* R---F */
#define NV_NVLSTAT_TX14                                                          0x0000002e /* R--4R */
#define NV_NVLSTAT_TX14_TX_LPEXIT_HIST                                                 31:0 /* R---F */
#define NV_NVLSTAT_TX15                                                          0x0000002f /* R--4R */
#define NV_NVLSTAT_TX15_TX_LPEXIT_HIST                                                 31:0 /* R---F */
#define NV_NVLSTAT_RX00                                                          0x00000040 /* R--4R */
#define NV_NVLSTAT_RX00_REPLAY_EVENTS_VALUE                                            30:0 /* R---F */
#define NV_NVLSTAT_RX00_REPLAY_EVENTS_VALUE_SRCOVF                               0x0000ffff /* R---V */
#define NV_NVLSTAT_RX00_REPLAY_EVENTS_OVER                                            31:31 /* R---F */
#define NV_NVLSTAT_RX00_REPLAY_EVENTS_OVER_OVER                                         0x1 /* R---V */
#define NV_NVLSTAT_RX00_REPLAY_EVENTS_OVER_OKAY                                         0x0 /* R---V */
#define NV_NVLSTAT_RX01                                                          0x00000041 /* R--4R */
#define NV_NVLSTAT_RX01_FLIT_CRC_ERRORS_VALUE                                          30:0 /* R---F */
#define NV_NVLSTAT_RX01_FLIT_CRC_ERRORS_VALUE_SRCOVF                             0x7fffffff /* R---V */
#define NV_NVLSTAT_RX01_FLIT_CRC_ERRORS_OVER                                          31:31 /* R---F */
#define NV_NVLSTAT_RX01_FLIT_CRC_ERRORS_OVER_OVER                                       0x1 /* R---V */
#define NV_NVLSTAT_RX01_FLIT_CRC_ERRORS_OVER_OKAY                                       0x0 /* R---V */
#define NV_NVLSTAT_RX02                                                          0x00000042 /* R--4R */
#define NV_NVLSTAT_RX02_MASKED_CRC_ERRORS_VALUE                                        30:0 /* R---F */
#define NV_NVLSTAT_RX02_MASKED_CRC_ERRORS_VALUE_SRCOVF                           0x7fffffff /* R---V */
#define NV_NVLSTAT_RX02_MASKED_CRC_ERRORS_OVER                                        31:31 /* R---F */
#define NV_NVLSTAT_RX02_MASKED_CRC_ERRORS_OVER_OVER                                     0x1 /* R---V */
#define NV_NVLSTAT_RX02_MASKED_CRC_ERRORS_OVER_OKAY                                     0x0 /* R---V */
#define NV_NVLSTAT_RX03                                                          0x00000043 /* R--4R */
#define NV_NVLSTAT_RX03_DELAY_RMT_LP_ENTER_VALUE                                       30:0 /* R---F */
#define NV_NVLSTAT_RX03_DELAY_RMT_LP_ENTER_VALUE_SRCOVF                          0x000000ff /* R---V */
#define NV_NVLSTAT_RX03_DELAY_RMT_LP_ENTER_OVER                                       31:31 /* R---F */
#define NV_NVLSTAT_RX03_DELAY_RMT_LP_ENTER_OVER_OVER                                    0x1 /* R---V */
#define NV_NVLSTAT_RX03_DELAY_RMT_LP_ENTER_OVER_OKAY                                    0x0 /* R---V */
#define NV_NVLSTAT_RX04                                                          0x00000044 /* R--4R */
#define NV_NVLSTAT_RX04_DELAY_RMT_LP_EXIT_VALUE                                        30:0 /* R---F */
#define NV_NVLSTAT_RX04_DELAY_RMT_LP_EXIT_VALUE_SRCOVF                           0x000000ff /* R---V */
#define NV_NVLSTAT_RX04_DELAY_RMT_LP_EXIT_OVER                                        31:31 /* R---F */
#define NV_NVLSTAT_RX04_DELAY_RMT_LP_EXIT_OVER_OVER                                     0x1 /* R---V */
#define NV_NVLSTAT_RX04_DELAY_RMT_LP_EXIT_OVER_OKAY                                     0x0 /* R---V */
#define NV_NVLSTAT_RX05                                                          0x00000045 /* R--4R */
#define NV_NVLSTAT_RX05_DELAY_RMT_FB_ENTER_VALUE                                       30:0 /* R---F */
#define NV_NVLSTAT_RX05_DELAY_RMT_FB_ENTER_VALUE_SRCOVF                          0x000000ff /* R---V */
#define NV_NVLSTAT_RX05_DELAY_RMT_FB_ENTER_OVER                                       31:31 /* R---F */
#define NV_NVLSTAT_RX05_DELAY_RMT_FB_ENTER_OVER_OVER                                    0x1 /* R---V */
#define NV_NVLSTAT_RX05_DELAY_RMT_FB_ENTER_OVER_OKAY                                    0x0 /* R---V */
#define NV_NVLSTAT_RX06                                                          0x00000046 /* R--4R */
#define NV_NVLSTAT_RX06_DELAY_RMT_FB_EXIT_VALUE                                        30:0 /* R---F */
#define NV_NVLSTAT_RX06_DELAY_RMT_FB_EXIT_VALUE_SRCOVF                           0x000000ff /* R---V */
#define NV_NVLSTAT_RX06_DELAY_RMT_FB_EXIT_OVER                                        31:31 /* R---F */
#define NV_NVLSTAT_RX06_DELAY_RMT_FB_EXIT_OVER_OVER                                     0x1 /* R---V */
#define NV_NVLSTAT_RX06_DELAY_RMT_FB_EXIT_OVER_OKAY                                     0x0 /* R---V */
#define NV_NVLSTAT_RX08                                                          0x00000048 /* R--4R */
#define NV_NVLSTAT_RX08_ERRORLOG_ERR_CNT_MULTI                                          7:0 /* R---F */
#define NV_NVLSTAT_RX09                                                          0x00000049 /* R--4R */
#define NV_NVLSTAT_RX09_ERRORLOG_ERR_CNT_7                                            31:24 /* R---F */
#define NV_NVLSTAT_RX09_ERRORLOG_ERR_CNT_6                                            23:16 /* R---F */
#define NV_NVLSTAT_RX09_ERRORLOG_ERR_CNT_5                                             15:8 /* R---F */
#define NV_NVLSTAT_RX09_ERRORLOG_ERR_CNT_4                                              7:0 /* R---F */
#define NV_NVLSTAT_RX10                                                          0x0000004a /* R--4R */
#define NV_NVLSTAT_RX10_ERRORLOG_ERR_CNT_3                                            31:24 /* R---F */
#define NV_NVLSTAT_RX10_ERRORLOG_ERR_CNT_2                                            23:16 /* R---F */
#define NV_NVLSTAT_RX10_ERRORLOG_ERR_CNT_1                                             15:8 /* R---F */
#define NV_NVLSTAT_RX10_ERRORLOG_ERR_CNT_0                                              7:0 /* R---F */
#define NV_NVLSTAT_RX11                                                          0x0000004b /* R--4R */
#define NV_NVLSTAT_RX11_ECC_DEC_FAILED_VALUE                                           30:0 /* R---F */
#define NV_NVLSTAT_RX11_ECC_DEC_FAILED_VALUE_SRCOVF                              0x00ffffff /* R---V */
#define NV_NVLSTAT_RX11_ECC_DEC_FAILED_OVER                                           31:31 /* R---F */
#define NV_NVLSTAT_RX11_ECC_DEC_FAILED_OVER_OVER                                        0x1 /* R---V */
#define NV_NVLSTAT_RX11_ECC_DEC_FAILED_OVER_OKAY                                        0x0 /* R---V */
#define NV_NVLSTAT_RX12                                                          0x0000004c /* R--4R */
#define NV_NVLSTAT_RX12_ECC_CORRECTED_ERR_L0_VALUE                                     30:0 /* R---F */
#define NV_NVLSTAT_RX12_ECC_CORRECTED_ERR_L0_VALUE_SRCOVF                        0x7fffffff /* R---V */
#define NV_NVLSTAT_RX12_ECC_CORRECTED_ERR_L0_OVER                                     31:31 /* R---F */
#define NV_NVLSTAT_RX12_ECC_CORRECTED_ERR_L0_OVER_OVER                                  0x1 /* R---V */
#define NV_NVLSTAT_RX12_ECC_CORRECTED_ERR_L0_OVER_OKAY                                  0x0 /* R---V */
#define NV_NVLSTAT_RX13                                                          0x0000004d /* R--4R */
#define NV_NVLSTAT_RX13_ECC_CORRECTED_ERR_L1_VALUE                                     30:0 /* R---F */
#define NV_NVLSTAT_RX13_ECC_CORRECTED_ERR_L1_VALUE_SRCOVF                        0x7fffffff /* R---V */
#define NV_NVLSTAT_RX13_ECC_CORRECTED_ERR_L1_OVER                                     31:31 /* R---F */
#define NV_NVLSTAT_RX13_ECC_CORRECTED_ERR_L1_OVER_OVER                                  0x1 /* R---V */
#define NV_NVLSTAT_RX13_ECC_CORRECTED_ERR_L1_OVER_OKAY                                  0x0 /* R---V */
#define NV_NVLSTAT_TR00                                                          0x00000090 /* R--4R */
#define NV_NVLSTAT_TR00_DATA                                                           31:0 /* R---F */
#define NV_NVLSTAT_TR01                                                          0x00000091 /* R--4R */
#define NV_NVLSTAT_TR01_DATA                                                           31:0 /* R---F */
#define NV_NVLSTAT_TR02                                                          0x00000092 /* R--4R */
#define NV_NVLSTAT_TR02_DATA                                                           31:0 /* R---F */
#define NV_NVLSTAT_TR03                                                          0x00000093 /* R--4R */
#define NV_NVLSTAT_TR03_DATA                                                           31:0 /* R---F */
#define NV_NVLSTAT_TR04                                                          0x00000094 /* R--4R */
#define NV_NVLSTAT_TR04_DATA                                                           31:0 /* R---F */
#define NV_NVLSTAT_TR05                                                          0x00000095 /* R--4R */
#define NV_NVLSTAT_TR05_DATA                                                           31:0 /* R---F */
#define NV_NVLSTAT_TR06                                                          0x00000096 /* R--4R */
#define NV_NVLSTAT_TR06_DATA                                                           31:0 /* R---F */
#define NV_NVLSTAT_TR07                                                          0x00000097 /* R--4R */
#define NV_NVLSTAT_TR07_DATA                                                           31:0 /* R---F */
#define NV_NVLSTAT_TR08                                                          0x00000098 /* R--4R */
#define NV_NVLSTAT_TR08_DATA                                                           31:0 /* R---F */
#define NV_NVLSTAT_TR09                                                          0x00000099 /* R--4R */
#define NV_NVLSTAT_TR09_DATA                                                           31:0 /* R---F */
#define NV_NVLSTAT_TR10                                                          0x0000009a /* R--4R */
#define NV_NVLSTAT_TR10_DATA                                                           31:0 /* R---F */
#define NV_NVLSTAT_TR11                                                          0x0000009b /* R--4R */
#define NV_NVLSTAT_TR11_DATA                                                           31:0 /* R---F */
#define NV_NVLSTAT_TR12                                                          0x0000009c /* R--4R */
#define NV_NVLSTAT_TR12_DATA                                                           31:0 /* R---F */
#define NV_NVLSTAT_TR13                                                          0x0000009d /* R--4R */
#define NV_NVLSTAT_TR13_DATA                                                           31:0 /* R---F */
#define NV_NVLSTAT_TR14                                                          0x0000009e /* R--4R */
#define NV_NVLSTAT_TR14_DATA                                                           31:0 /* R---F */
#define NV_NVLSTAT_TR15                                                          0x0000009f /* R--4R */
#define NV_NVLSTAT_TR15_DATA                                                           31:0 /* R---F */
#define NV_NVLSTAT_TR16                                                          0x000000a0 /* R--4R */
#define NV_NVLSTAT_TR16_L0FOM                                                          15:0 /* R---F */
#define NV_NVLSTAT_TR16_L1FOM                                                         31:16 /* R---F */
#define NV_NVLSTAT_TR17                                                          0x000000a1 /* R--4R */
#define NV_NVLSTAT_TR17_L2FOM                                                          15:0 /* R---F */
#define NV_NVLSTAT_TR17_L3FOM                                                         31:16 /* R---F */
#define NV_NVLSTAT_DB00                                                          0x00000080 /* R--4R */
#define NV_NVLSTAT_DB00_ERRORS_INJECTED_VALUE                                          30:0 /* R---F */
#define NV_NVLSTAT_DB00_ERRORS_INJECTED_VALUE_SRCOVF                             0x7fffffff /* R---V */
#define NV_NVLSTAT_DB00_ERRORS_INJECTED_OVER                                          31:31 /* R---F */
#define NV_NVLSTAT_DB00_ERRORS_INJECTED_OVER_OVER                                       0x1 /* R---V */
#define NV_NVLSTAT_DB00_ERRORS_INJECTED_OVER_OKAY                                       0x0 /* R---V */
#define NV_NVLSTAT_DB01                                                          0x00000081 /* R--4R */
#define NV_NVLSTAT_DB01_ERROR_COUNT_ERR_LANECRC_L3                                    31:24 /* R---F */
#define NV_NVLSTAT_DB01_ERROR_COUNT_ERR_LANECRC_L2                                    23:16 /* R---F */
#define NV_NVLSTAT_DB01_ERROR_COUNT_ERR_LANECRC_L1                                     15:8 /* R---F */
#define NV_NVLSTAT_DB01_ERROR_COUNT_ERR_LANECRC_L0                                      7:0 /* R---F */
#define NV_NVLSTAT_DB02                                                          0x00000082 /* R--4R */
#define NV_NVLSTAT_DB02_ERROR_COUNT_ERR_LANECRC_L7                                    31:24 /* R---F */
#define NV_NVLSTAT_DB02_ERROR_COUNT_ERR_LANECRC_L6                                    23:16 /* R---F */
#define NV_NVLSTAT_DB02_ERROR_COUNT_ERR_LANECRC_L5                                     15:8 /* R---F */
#define NV_NVLSTAT_DB02_ERROR_COUNT_ERR_LANECRC_L4                                      7:0 /* R---F */
#define NV_NVLSTAT_DB03                                                          0x00000083 /* R--4R */
#define NV_NVLSTAT_DB03_RXSLSM_ERR_CNTL_CLK_SWITCH_ERR                                31:31 /* R---F */
#define NV_NVLSTAT_DB03_RXSLSM_ERR_CNTL_OFF2SAFE_LINK_DET_ERR                           2:2 /* R---F */
#define NV_NVLSTAT_DB03_RXSLSM_ERR_CNTL_CONST_DET_ERR                                   1:1 /* R---F */
#define NV_NVLSTAT_DB04                                                          0x00000084 /* R--4R */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_E2S_STROBE_NO_LD_ERR                          23:23 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_H2S_STROBE_NO_LD_ERR                          22:22 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_02S_STROBE_NO_LD_ERR                          21:21 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_E2S_SD_NO_LD_ERR                              20:20 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_H2S_SD_NO_LD_ERR                              19:19 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_O2S_SD_NO_LD_ERR                              18:18 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_RC_DEADLINE_ERR                               15:15 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_RC_TXPWR_ERR                                  14:14 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_RC_RXPWR_ERR                                  13:13 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_E2SAFE_LD_ERR                                 12:12 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_SAFE_NO_LD_ERR                                11:11 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_FENCE_ERR                                     10:10 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_HS2SAFE_LINK_DET_ERR                            9:9 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_TRAIN2SAFE_LINK_DET_ERR                         8:8 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_FIFO_SKEW_ERR                                   7:7 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_SYM_ALIGN_END_ERR                               6:6 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_SYM_LOCK_ERR                                    5:5 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_SCRAM_LOCK_ERR                                  4:4 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_SAFE2NO_LINK_DET_ERR                            3:3 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_OFF2SAFE_LINK_DET_ERR                           2:2 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_CONST_DET_ERR                                   1:1 /* R---F */
#define NV_NVLSTAT_DB04_RXSLSM_ERR_CNTL_FIFO_DRAIN_ERR                                  0:0 /* R---F */
#define NV_NVLSTAT_DB05                                                          0x00000085 /* R--4R */
#define NV_NVLSTAT_DB05_TIMEOUT_LOG_SYM_LOCK_LANE                                     31:24 /* R---F */
#define NV_NVLSTAT_DB05_TIMEOUT_LOG_SCRAM_LOCK_LANE                                   23:16 /* R---F */
#define NV_NVLSTAT_DB05_TIMEOUT_LOG_CONST_DET_LANE                                     15:8 /* R---F */
#define NV_NVLSTAT_DB05_TIMEOUT_LOG_FIFO_DRAIN_LANE                                     7:0 /* R---F */
#define NV_NVLSTAT_DB06                                                          0x00000086 /* R--4R */
#define NV_NVLSTAT_DB06_TIMEOUT_LOG_SYM_ALIGN_END_LANE                                31:24 /* R---F */
#define NV_NVLSTAT_DB06_TIMEOUT_LOG_FIFO_SKEW_LANE                                    23:16 /* R---F */
#define NV_NVLSTAT_DB07                                                          0x00000087 /* R--4R */
#define NV_NVLSTAT_DB07_FIFO_STATUS_RX_0_ENTRIES_USED_3                               29:24 /* R---F */
#define NV_NVLSTAT_DB07_FIFO_STATUS_RX_0_ENTRIES_USED_2                               21:16 /* R---F */
#define NV_NVLSTAT_DB07_FIFO_STATUS_RX_0_ENTRIES_USED_1                                13:8 /* R---F */
#define NV_NVLSTAT_DB07_FIFO_STATUS_RX_0_ENTRIES_USED_0                                 5:0 /* R---F */
#define NV_NVLSTAT_DB08                                                          0x00000088 /* R--4R */
#define NV_NVLSTAT_DB08_FIFO_STATUS_RX_0_ENTRIES_USED_7                               29:24 /* R---F */
#define NV_NVLSTAT_DB08_FIFO_STATUS_RX_0_ENTRIES_USED_6                               21:16 /* R---F */
#define NV_NVLSTAT_DB08_FIFO_STATUS_RX_0_ENTRIES_USED_5                                13:8 /* R---F */
#define NV_NVLSTAT_DB08_FIFO_STATUS_RX_0_ENTRIES_USED_4                                 5:0 /* R---F */
#define NV_NVLSTAT_DB09                                                          0x00000089 /* R--4R */
#define NV_NVLSTAT_DB09_SLSM_STATUS_RX_SURPRISE_LD_CNT_VALUE                           30:0 /* R---F */
#define NV_NVLSTAT_DB09_SLSM_STATUS_RX_SURPRISE_LD_CNT_VALUE_SRCOVF              0x000000ff /* R---V */
#define NV_NVLSTAT_DB09_SLSM_STATUS_RX_SURPRISE_LD_CNT_OVER                           31:31 /* R---F */
#define NV_NVLSTAT_DB09_SLSM_STATUS_RX_SURPRISE_LD_CNT_OVER_OVER                        0x1 /* R---V */
#define NV_NVLSTAT_DB09_SLSM_STATUS_RX_SURPRISE_LD_CNT_OVER_OKAY                        0x0 /* R---V */
#define NV_NVLSTAT_DB10                                                          0x0000008a /* R--4R */
#define NV_NVLSTAT_DB10_DATA                                                           31:0 /* R---F */
#define NV_NVLSTAT_DB11                                                          0x0000008b /* R--4R */
#define NV_NVLSTAT_DB11_COUNT_PHY_REFRESH_PASS                                         15:0 /* R---F */
#define NV_NVLSTAT_DB11_COUNT_PHY_REFRESH_FAIL                                        31:16 /* R---F */
#define NV_NVLSTAT_MN00                                                          0x000000ff /* R--4R */
#define NV_NVLSTAT_MN00_LINK_INTR_SUBCODE                                              15:8 /* R---F */
#define NV_NVLSTAT_MN00_LINK_INTR_CODE                                                  7:0 /* R---F */

#define NV_MINION_INBAND_SEND_DATA_BUFFER_SIZE                                           7:0
#define NV_MINION_INBAND_SEND_DATA_FLAGS                                               23:16

#endif // __ls10_dev_minion_ip_addendum_h__
