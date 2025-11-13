// 函数: sub_142a56050
// 地址: 0x142a56050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_6 = arg1[2].d

if (rax_6 s<= *(arg1 + 0xc))
    return 0xffffffff

int64_t r8 = *arg1
arg1[2].d = rax_6 - 1
int32_t rcx = (rax_6 - 1) * 2
return zx.q(zx.d(*(sx.q(rcx) + r8)) << 8) | zx.q(*(sx.q(rcx + 1) + r8))
