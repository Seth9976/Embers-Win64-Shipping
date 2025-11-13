// 函数: sub_140daa8e0
// 地址: 0x140daa8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_9 = *arg1
uint32_t r10 = zx.d(arg1[1].b)
int32_t r8_2 = r9_9 u>> 0xd ^ neg.d(r9_9)
int32_t rdx_2 = (0x9e3779b9 - r8_2 - r9_9) ^ r8_2 << 8
int32_t r9_2 = (r9_9 - rdx_2 - r8_2) ^ rdx_2 u>> 0xd
int32_t r8_5 = (r8_2 - rdx_2 - r9_2) ^ r9_2 u>> 0xc
int32_t rdx_5 = (rdx_2 - r8_5 - r9_2) ^ r8_5 << 0x10
int32_t r9_5 = (r9_2 - rdx_5 - r8_5) ^ rdx_5 u>> 5
int32_t r8_8 = (r8_5 - rdx_5 - r9_5) ^ r9_5 u>> 3
int32_t rdx_8 = (rdx_5 - r8_8 - r9_5) ^ r8_8 << 0xa
int32_t r9_8 = (r9_5 - rdx_8 - r8_8) ^ rdx_8 u>> 0xf
int32_t rdx_11 = r9_8 - r10
int32_t r8_13 = (0 - r9_8 - 0x61c88647) ^ rdx_11 << 8
int32_t r10_3 = (r10 - r8_13 - rdx_11) ^ r8_13 u>> 0xd
int32_t rdx_14 = (rdx_11 - r8_13 - r10_3) ^ r10_3 u>> 0xc
int32_t r8_16 = (r8_13 - rdx_14 - r10_3) ^ rdx_14 << 0x10
int32_t r10_6 = (r10_3 - r8_16 - rdx_14) ^ r8_16 u>> 5
int32_t rdx_17 = (rdx_14 - r8_16 - r10_6) ^ r10_6 u>> 3
int32_t r8_19 = (r8_16 - rdx_17 - r10_6) ^ rdx_17 << 0xa
return zx.q(r10_6 - r8_19 - rdx_17) ^ zx.q(r8_19 u>> 0xf)
