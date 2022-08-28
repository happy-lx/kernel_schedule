/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * SM8450 interconnect IDs
 *
 * Copyright (c) 2020-2021, The Linux Foundation. All rights reserved.
 * Copyright (c) 2021, Linaro Limited
 */

#ifndef __DRIVERS_INTERCONNECT_QCOM_SM8450_H
#define __DRIVERS_INTERCONNECT_QCOM_SM8450_H

#define SM8450_MASTER_GPU_TCU				0
#define SM8450_MASTER_SYS_TCU				1
#define SM8450_MASTER_APPSS_PROC			2
#define SM8450_MASTER_LLCC				3
#define SM8450_MASTER_CNOC_LPASS_AG_NOC			4
#define SM8450_MASTER_GIC_AHB				5
#define SM8450_MASTER_CDSP_NOC_CFG			6
#define SM8450_MASTER_QDSS_BAM				7
#define SM8450_MASTER_QSPI_0				8
#define SM8450_MASTER_QUP_0				9
#define SM8450_MASTER_QUP_1				10
#define SM8450_MASTER_QUP_2				11
#define SM8450_MASTER_A1NOC_CFG				12
#define SM8450_MASTER_A2NOC_CFG				13
#define SM8450_MASTER_A1NOC_SNOC			14
#define SM8450_MASTER_A2NOC_SNOC			15
#define SM8450_MASTER_CAMNOC_HF				16
#define SM8450_MASTER_CAMNOC_ICP			17
#define SM8450_MASTER_CAMNOC_SF				18
#define SM8450_MASTER_GEM_NOC_CNOC			19
#define SM8450_MASTER_GEM_NOC_PCIE_SNOC			20
#define SM8450_MASTER_GFX3D				21
#define SM8450_MASTER_LPASS_ANOC			22
#define SM8450_MASTER_MDP				23
#define SM8450_MASTER_MDP0				SM8450_MASTER_MDP
#define SM8450_MASTER_MDP1				SM8450_MASTER_MDP
#define SM8450_MASTER_MSS_PROC				24
#define SM8450_MASTER_CNOC_MNOC_CFG			25
#define SM8450_MASTER_MNOC_HF_MEM_NOC			26
#define SM8450_MASTER_MNOC_SF_MEM_NOC			27
#define SM8450_MASTER_COMPUTE_NOC			28
#define SM8450_MASTER_ANOC_PCIE_GEM_NOC			29
#define SM8450_MASTER_PCIE_ANOC_CFG			30
#define SM8450_MASTER_ROTATOR				31
#define SM8450_MASTER_SNOC_CFG				32
#define SM8450_MASTER_SNOC_GC_MEM_NOC			33
#define SM8450_MASTER_SNOC_SF_MEM_NOC			34
#define SM8450_MASTER_CDSP_HCP				35
#define SM8450_MASTER_VIDEO				36
#define SM8450_MASTER_VIDEO_P0				SM8450_MASTER_VIDEO
#define SM8450_MASTER_VIDEO_P1				SM8450_MASTER_VIDEO
#define SM8450_MASTER_VIDEO_CV_PROC			37
#define SM8450_MASTER_VIDEO_PROC			38
#define SM8450_MASTER_VIDEO_V_PROC			39
#define SM8450_MASTER_QUP_CORE_0			40
#define SM8450_MASTER_QUP_CORE_1			41
#define SM8450_MASTER_QUP_CORE_2			42
#define SM8450_MASTER_CRYPTO				43
#define SM8450_MASTER_IPA				44
#define SM8450_MASTER_LPASS_PROC			45
#define SM8450_MASTER_CDSP_PROC				46
#define SM8450_MASTER_PIMEM				47
#define SM8450_MASTER_SENSORS_PROC			48
#define SM8450_MASTER_SP				49
#define SM8450_MASTER_GIC				50
#define SM8450_MASTER_PCIE_0				51
#define SM8450_MASTER_PCIE_1				52
#define SM8450_MASTER_QDSS_ETR				53
#define SM8450_MASTER_QDSS_ETR_1			54
#define SM8450_MASTER_SDCC_2				55
#define SM8450_MASTER_SDCC_4				56
#define SM8450_MASTER_UFS_MEM				57
#define SM8450_MASTER_USB3_0				58
#define SM8450_SLAVE_EBI1				512
#define SM8450_SLAVE_AHB2PHY_SOUTH			513
#define SM8450_SLAVE_AHB2PHY_NORTH			514
#define SM8450_SLAVE_AOSS				515
#define SM8450_SLAVE_CAMERA_CFG				516
#define SM8450_SLAVE_CLK_CTL				517
#define SM8450_SLAVE_CDSP_CFG				518
#define SM8450_SLAVE_RBCPR_CX_CFG			519
#define SM8450_SLAVE_RBCPR_MMCX_CFG			520
#define SM8450_SLAVE_RBCPR_MXA_CFG			521
#define SM8450_SLAVE_RBCPR_MXC_CFG			522
#define SM8450_SLAVE_CRYPTO_0_CFG			523
#define SM8450_SLAVE_CX_RDPM				524
#define SM8450_SLAVE_DISPLAY_CFG			525
#define SM8450_SLAVE_GFX3D_CFG				526
#define SM8450_SLAVE_IMEM_CFG				527
#define SM8450_SLAVE_IPA_CFG				528
#define SM8450_SLAVE_IPC_ROUTER_CFG			529
#define SM8450_SLAVE_LPASS				530
#define SM8450_SLAVE_LPASS_CORE_CFG			531
#define SM8450_SLAVE_LPASS_LPI_CFG			532
#define SM8450_SLAVE_LPASS_MPU_CFG			533
#define SM8450_SLAVE_LPASS_TOP_CFG			534
#define SM8450_SLAVE_CNOC_MSS				535
#define SM8450_SLAVE_MX_RDPM				536
#define SM8450_SLAVE_PCIE_0_CFG				537
#define SM8450_SLAVE_PCIE_1_CFG				538
#define SM8450_SLAVE_PDM				539
#define SM8450_SLAVE_PIMEM_CFG				540
#define SM8450_SLAVE_PRNG				541
#define SM8450_SLAVE_QDSS_CFG				542
#define SM8450_SLAVE_QSPI_0				543
#define SM8450_SLAVE_QUP_0				544
#define SM8450_SLAVE_QUP_1				545
#define SM8450_SLAVE_QUP_2				546
#define SM8450_SLAVE_SDCC_2				547
#define SM8450_SLAVE_SDCC_4				548
#define SM8450_SLAVE_SPSS_CFG				549
#define SM8450_SLAVE_TCSR				550
#define SM8450_SLAVE_TLMM				551
#define SM8450_SLAVE_TME_CFG				552
#define SM8450_SLAVE_UFS_MEM_CFG			553
#define SM8450_SLAVE_USB3_0				554
#define SM8450_SLAVE_VENUS_CFG				555
#define SM8450_SLAVE_VSENSE_CTRL_CFG			556
#define SM8450_SLAVE_A1NOC_CFG				557
#define SM8450_SLAVE_A1NOC_SNOC				558
#define SM8450_SLAVE_A2NOC_CFG				559
#define SM8450_SLAVE_A2NOC_SNOC				560
#define SM8450_SLAVE_DDRSS_CFG				561
#define SM8450_SLAVE_GEM_NOC_CNOC			562
#define SM8450_SLAVE_SNOC_GEM_NOC_GC			563
#define SM8450_SLAVE_SNOC_GEM_NOC_SF			564
#define SM8450_SLAVE_LLCC				565
#define SM8450_SLAVE_MNOC_HF_MEM_NOC			566
#define SM8450_SLAVE_MNOC_SF_MEM_NOC			567
#define SM8450_SLAVE_CNOC_MNOC_CFG			568
#define SM8450_SLAVE_CDSP_MEM_NOC			569
#define SM8450_SLAVE_MEM_NOC_PCIE_SNOC			570
#define SM8450_SLAVE_PCIE_ANOC_CFG			571
#define SM8450_SLAVE_ANOC_PCIE_GEM_NOC			572
#define SM8450_SLAVE_SNOC_CFG				573
#define SM8450_SLAVE_LPASS_SNOC				574
#define SM8450_SLAVE_QUP_CORE_0				575
#define SM8450_SLAVE_QUP_CORE_1				576
#define SM8450_SLAVE_QUP_CORE_2				577
#define SM8450_SLAVE_IMEM				578
#define SM8450_SLAVE_PIMEM				579
#define SM8450_SLAVE_SERVICE_NSP_NOC			580
#define SM8450_SLAVE_SERVICE_A1NOC			581
#define SM8450_SLAVE_SERVICE_A2NOC			582
#define SM8450_SLAVE_SERVICE_CNOC			583
#define SM8450_SLAVE_SERVICE_MNOC			584
#define SM8450_SLAVE_SERVICES_LPASS_AML_NOC		585
#define SM8450_SLAVE_SERVICE_LPASS_AG_NOC		586
#define SM8450_SLAVE_SERVICE_PCIE_ANOC			587
#define SM8450_SLAVE_SERVICE_SNOC			588
#define SM8450_SLAVE_PCIE_0				589
#define SM8450_SLAVE_PCIE_1				590
#define SM8450_SLAVE_QDSS_STM				591
#define SM8450_SLAVE_TCU				592
#define SM8450_MASTER_LLCC_DISP				1000
#define SM8450_MASTER_MDP_DISP				1001
#define SM8450_MASTER_MDP0_DISP				SM8450_MASTER_MDP_DISP
#define SM8450_MASTER_MDP1_DISP				SM8450_MASTER_MDP_DISP
#define SM8450_MASTER_MNOC_HF_MEM_NOC_DISP		1002
#define SM8450_MASTER_MNOC_SF_MEM_NOC_DISP		1003
#define SM8450_MASTER_ANOC_PCIE_GEM_NOC_DISP		1004
#define SM8450_MASTER_ROTATOR_DISP			1005
#define SM8450_SLAVE_EBI1_DISP				1512
#define SM8450_SLAVE_LLCC_DISP				1513
#define SM8450_SLAVE_MNOC_HF_MEM_NOC_DISP		1514
#define SM8450_SLAVE_MNOC_SF_MEM_NOC_DISP		1515

#endif