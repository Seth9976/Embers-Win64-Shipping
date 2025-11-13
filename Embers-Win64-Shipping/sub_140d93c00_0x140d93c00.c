// 函数: sub_140d93c00
// 地址: 0x140d93c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x20) = *(arg2 + 0x20)
arg1[6] = arg2[6]
void* rax_3 = arg2[7]
arg1[7] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg1[8] = arg2[8]
arg1[9].d = arg2[9].d
*(arg1 + 0x4c) = *(arg2 + 0x4c)
*(arg1 + 0x50) = *arg3
int128_t zmm1 = arg3[1]
*(arg1 + 0x74) = 0
arg1[0xe].d = arg4
*(arg1 + 0x60) = zmm1
int32_t rax_7 = sub_140daac60(arg1)
int32_t r8_2 = (*(arg1 + 0x74) - rax_7) ^ rax_7 u>> 0xd
int32_t rdx_2 = (0x9e3779b9 - r8_2 - rax_7) ^ r8_2 << 8
int32_t rdi_3 = (rax_7 - rdx_2 - r8_2) ^ rdx_2 u>> 0xd
int32_t r8_5 = (r8_2 - rdx_2 - rdi_3) ^ rdi_3 u>> 0xc
int32_t rdx_5 = (rdx_2 - r8_5 - rdi_3) ^ r8_5 << 0x10
int32_t rdi_6 = (rdi_3 - rdx_5 - r8_5) ^ rdx_5 u>> 5
int32_t r8_8 = (r8_5 - rdx_5 - rdi_6) ^ rdi_6 u>> 3
int32_t rdx_8 = (rdx_5 - r8_8 - rdi_6) ^ r8_8 << 0xa
int32_t rdi_9 = (rdi_6 - rdx_8 - r8_8) ^ rdx_8 u>> 0xf
*(arg1 + 0x74) = rdi_9
int32_t rax_20 = sub_140daa8e0(&arg1[0xa])
int32_t rdi_11 = (rdi_9 - rax_20) ^ rax_20 u>> 0xd
int32_t rdx_12 = (0x9e3779b9 - rdi_11 - rax_20) ^ rdi_11 << 8
int32_t r8_12 = (rax_20 - rdx_12 - rdi_11) ^ rdx_12 u>> 0xd
int32_t rdi_14 = (rdi_11 - rdx_12 - r8_12) ^ r8_12 u>> 0xc
int32_t arg_20 = arg1[0xe].d.d
int32_t rdx_15 = (rdx_12 - rdi_14 - r8_12) ^ rdi_14 << 0x10
int32_t r8_15 = (r8_12 - rdx_15 - rdi_14) ^ rdx_15 u>> 5
int32_t rdi_17 = (rdi_14 - rdx_15 - r8_15) ^ r8_15 u>> 3
int32_t rdx_18 = (rdx_15 - rdi_17 - r8_15) ^ rdi_17 << 0xa
int32_t r8_20 = (((r8_15 - rdx_18 - rdi_17) ^ rdx_18 u>> 0xf) - arg_20) ^ arg_20 u>> 0xd
int32_t rsi_2 = (0x9e3779b9 - r8_20 - arg_20) ^ r8_20 << 8
int32_t rcx_12 = (arg_20 - rsi_2 - r8_20) ^ rsi_2 u>> 0xd
int32_t r8_23 = (r8_20 - rcx_12 - rsi_2) ^ rcx_12 u>> 0xc
int32_t rsi_5 = (rsi_2 - rcx_12 - r8_23) ^ r8_23 << 0x10
int32_t rcx_15 = (rcx_12 - rsi_5 - r8_23) ^ rsi_5 u>> 5
int32_t r8_26 = (r8_23 - rcx_15 - rsi_5) ^ rcx_15 u>> 3
int32_t rsi_8 = (rsi_5 - rcx_15 - r8_26) ^ r8_26 << 0xa
*(arg1 + 0x74) = (rcx_15 - rsi_8 - r8_26) ^ rsi_8 u>> 0xf
return arg1
