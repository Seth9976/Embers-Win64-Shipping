// 函数: sub_141a72b90
// 地址: 0x141a72b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10_18 = *arg1
int32_t r8_3 = ((r10_18 u>> 0x20).d - r10_18.d) ^ r10_18.d u>> 0xd
int32_t rdx_2 = (0x9e3779b9 - r10_18.d - r8_3) ^ r8_3 << 8
int32_t r10_2 = (r10_18.d - rdx_2 - r8_3) ^ rdx_2 u>> 0xd
int32_t r8_6 = (r8_3 - rdx_2 - r10_2) ^ r10_2 u>> 0xc
int32_t rdx_5 = (rdx_2 - r8_6 - r10_2) ^ r8_6 << 0x10
int32_t r10_5 = (r10_2 - rdx_5 - r8_6) ^ rdx_5 u>> 5
int32_t r8_9 = (r8_6 - rdx_5 - r10_5) ^ r10_5 u>> 3
int32_t rdx_8 = (rdx_5 - r8_9 - r10_5) ^ r8_9 << 0xa
int32_t r10_8 = (r10_5 - rdx_8 - r8_9) ^ rdx_8 u>> 0xf
int32_t rdx_12 = (arg1[1].d - r10_8) ^ r10_8 u>> 0xd
int32_t r9_2 = (0x9e3779b9 - rdx_12 - r10_8) ^ rdx_12 << 8
int32_t r10_11 = (r10_8 - r9_2 - rdx_12) ^ r9_2 u>> 0xd
int32_t rdx_15 = (rdx_12 - r9_2 - r10_11) ^ r10_11 u>> 0xc
int32_t r9_5 = (r9_2 - rdx_15 - r10_11) ^ rdx_15 << 0x10
int32_t r10_14 = (r10_11 - r9_5 - rdx_15) ^ r9_5 u>> 5
int32_t rdx_18 = (rdx_15 - r9_5 - r10_14) ^ r10_14 u>> 3
int32_t r9_8 = (r9_5 - rdx_18 - r10_14) ^ rdx_18 << 0xa
return zx.q(r10_14 - r9_8 - rdx_18) ^ zx.q(r9_8 u>> 0xf)
