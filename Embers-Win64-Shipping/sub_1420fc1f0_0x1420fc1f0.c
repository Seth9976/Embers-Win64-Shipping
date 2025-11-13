// 函数: sub_1420fc1f0
// 地址: 0x1420fc1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx = (arg1[5] u>> 4).d
int32_t r8_1 = (0x9e3779b9 - rdx) ^ rdx << 8
int32_t r10_2 = neg.d(r8_1 + rdx) ^ r8_1 u>> 0xd
int32_t rdx_3 = (rdx - r8_1 - r10_2) ^ r10_2 u>> 0xc
int32_t r8_4 = (r8_1 - rdx_3 - r10_2) ^ rdx_3 << 0x10
int32_t r10_5 = (r10_2 - r8_4 - rdx_3) ^ r8_4 u>> 5
int32_t rdx_6 = (rdx_3 - r8_4 - r10_5) ^ r10_5 u>> 3
int32_t r8_7 = (r8_4 - rdx_6 - r10_5) ^ rdx_6 << 0xa
int32_t r10_8 = (r10_5 - r8_7 - rdx_6) ^ r8_7 u>> 0xf
int32_t rdx_10 = ((arg1[4] u>> 4).d - r10_8) ^ r10_8 u>> 0xd
int32_t rcx_2 = (0x9e3779b9 - rdx_10 - r10_8) ^ rdx_10 << 8
int32_t r10_11 = (r10_8 - rcx_2 - rdx_10) ^ rcx_2 u>> 0xd
int32_t rdx_13 = (rdx_10 - rcx_2 - r10_11) ^ r10_11 u>> 0xc
int32_t rcx_5 = (rcx_2 - rdx_13 - r10_11) ^ rdx_13 << 0x10
int32_t r10_14 = (r10_11 - rcx_5 - rdx_13) ^ rcx_5 u>> 5
int32_t rdx_16 = (rdx_13 - rcx_5 - r10_14) ^ r10_14 u>> 3
int32_t rcx_8 = (rcx_5 - rdx_16 - r10_14) ^ rdx_16 << 0xa
int32_t r10_17 = (r10_14 - rcx_8 - rdx_16) ^ rcx_8 u>> 0xf
int32_t rdx_20 = ((arg1[1] u>> 4).d - r10_17) ^ r10_17 u>> 0xd
int32_t rcx_12 = (0x9e3779b9 - rdx_20 - r10_17) ^ rdx_20 << 8
int32_t r10_20 = (r10_17 - rcx_12 - rdx_20) ^ rcx_12 u>> 0xd
int32_t rdx_23 = (rdx_20 - rcx_12 - r10_20) ^ r10_20 u>> 0xc
int32_t rcx_15 = (rcx_12 - rdx_23 - r10_20) ^ rdx_23 << 0x10
int32_t r10_23 = (r10_20 - rcx_15 - rdx_23) ^ rcx_15 u>> 5
int32_t rdx_26 = (rdx_23 - rcx_15 - r10_23) ^ r10_23 u>> 3
int32_t rcx_18 = (rcx_15 - rdx_26 - r10_23) ^ rdx_26 << 0xa
int32_t r10_26 = (r10_23 - rcx_18 - rdx_26) ^ rcx_18 u>> 0xf
int32_t rdx_30 = ((*arg1 u>> 4).d - r10_26) ^ r10_26 u>> 0xd
int32_t r11_2 = (0x9e3779b9 - rdx_30 - r10_26) ^ rdx_30 << 8
int32_t r10_29 = (r10_26 - r11_2 - rdx_30) ^ r11_2 u>> 0xd
int32_t rdx_33 = (rdx_30 - r11_2 - r10_29) ^ r10_29 u>> 0xc
int32_t r11_5 = (r11_2 - rdx_33 - r10_29) ^ rdx_33 << 0x10
int32_t r10_32 = (r10_29 - r11_5 - rdx_33) ^ r11_5 u>> 5
int32_t rdx_36 = (rdx_33 - r11_5 - r10_32) ^ r10_32 u>> 3
int32_t r11_8 = (r11_5 - rdx_36 - r10_32) ^ rdx_36 << 0xa
return zx.q(r10_32 - r11_8 - rdx_36) ^ zx.q(r11_8 u>> 0xf)
