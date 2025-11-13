// 函数: sub_141370e60
// 地址: 0x141370e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx_1 = sbb.d(arg1.d, arg1.d, arg1[4] != 0) & 8
int32_t rcx_3 = sbb.d(rcx_1, rcx_1, arg1[3] != 0) & 4
int32_t rcx_5 = sbb.d(rcx_3, rcx_3, arg1[2] != 0) & 2
int32_t rax_3
rax_3.b = arg1[1] != 0
int32_t rcx_7 = sbb.d(rcx_5, rcx_5, arg1[0xc] != 0) & 0x80
int32_t rcx_9 = sbb.d(rcx_7, rcx_7, arg1[0x10] != 0) & 0x100
int32_t rcx_11 = sbb.d(rcx_9, rcx_9, arg1[6] != 0) & 0x20
uint64_t r8_10 = zx.q((sbb.d(arg3, arg3, arg1[7] != 0) & 0x40) + rcx_1 + rcx_3 + rcx_5 + rax_3
    + rcx_7 + rcx_9 + rcx_11 + (*(arg1 + 0x14) << 9)
    + (sbb.d(rcx_11, rcx_11, arg1[5] != 0) & 0x10))
int32_t rdx
rdx.b = *arg1 != 0
return zx.q(rdx + (r8_10 << 1).d)
