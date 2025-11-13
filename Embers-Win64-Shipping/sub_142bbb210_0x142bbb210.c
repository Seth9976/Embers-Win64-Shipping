// 函数: sub_142bbb210
// 地址: 0x142bbb210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *arg1 << 0x10 | arg1[1]
int32_t rcx_2 = *arg2 << 0x10 | arg2[1]
bool c = rax_1 u< rcx_2

if (rax_1 == rcx_2 || c)
    return zx.q(sbb.d(rax_1, rax_1, c))

return 1
