// 函数: sub_140ab2260
// 地址: 0x140ab2260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx_10 = arg1[1]
int64_t r8 = *arg1
int32_t r10_1 = (rdx_10 u>> 0x20).d * 0x17 + rdx_10.d
int32_t r9_3 = ((r8 u>> 0x20).d * 0x17 - r10_1 + r8.d) ^ r10_1 u>> 0xd
int32_t rdx_2 = (0x9e3779b9 - r9_3 - r10_1) ^ r9_3 << 8
int32_t r10_4 = (r10_1 - rdx_2 - r9_3) ^ rdx_2 u>> 0xd
int32_t r9_6 = (r9_3 - rdx_2 - r10_4) ^ r10_4 u>> 0xc
int32_t rdx_5 = (rdx_2 - r9_6 - r10_4) ^ r9_6 << 0x10
int32_t r10_7 = (r10_4 - rdx_5 - r9_6) ^ rdx_5 u>> 5
int32_t r9_9 = (r9_6 - rdx_5 - r10_7) ^ r10_7 u>> 3
int32_t rdx_8 = (rdx_5 - r9_9 - r10_7) ^ r9_9 << 0xa
return zx.q(r10_7 - rdx_8 - r9_9) ^ zx.q(rdx_8 u>> 0xf)
