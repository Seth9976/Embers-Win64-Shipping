// 函数: sub_141a72a90
// 地址: 0x141a72a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x110))()
int64_t r9 = *arg2
int32_t r8_3 = ((r9 u>> 0x20).d - r9.d) ^ r9.d u>> 0xd
int32_t rdx_2 = (0x9e3779b9 - r9.d - r8_3) ^ r8_3 << 8
int32_t r9_3 = (r9.d - rdx_2 - r8_3) ^ rdx_2 u>> 0xd
int32_t r8_6 = (r8_3 - rdx_2 - r9_3) ^ r9_3 u>> 0xc
int32_t rdx_5 = (rdx_2 - r8_6 - r9_3) ^ r8_6 << 0x10
int32_t r9_6 = (r9_3 - rdx_5 - r8_6) ^ rdx_5 u>> 5
int32_t r8_9 = (r8_6 - rdx_5 - r9_6) ^ r9_6 u>> 3
int32_t rdx_8 = (rdx_5 - r8_9 - r9_6) ^ r8_9 << 0xa
return zx.q(r9_6 - rdx_8 - r8_9) ^ zx.q(rdx_8 u>> 0xf)
