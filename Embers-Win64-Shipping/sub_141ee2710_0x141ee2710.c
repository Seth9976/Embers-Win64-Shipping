// 函数: sub_141ee2710
// 地址: 0x141ee2710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x18)
int32_t rcx_1 = r8 & 1
r8.b &= 2

if (r8.b == 0)
    return zx.q(rcx_1)

return zx.q(rcx_1.b) | 2
