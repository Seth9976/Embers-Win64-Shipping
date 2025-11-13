// 函数: sub_1403782f8
// 地址: 0x1403782f8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 1

if (arg1[7] != 0x10)
    rdx = 0

if (*arg1 == 0xfffe && arg1[9] != 0x10)
    rdx = 0

int32_t rax_1 = *(arg1 + 8)
int32_t rax_2 = neg.d(rax_1)
return zx.q(sbb.d(rax_2, rax_2, rax_1 != 0)) & zx.q(sbb.d(0, 0, arg1[6] != 0)) & zx.q(rdx)
