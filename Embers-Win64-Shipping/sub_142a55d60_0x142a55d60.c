// 函数: sub_142a55d60
// 地址: 0x142a55d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = (*(arg1 + 0x48))()
int32_t rdx_1 = result & 0xfffffc00

if (rdx_1 != 0xd800)
    return result

int32_t rax = (*(arg1 + 0x48))(arg1, rdx_1)

if ((rax & 0xfffffc00) == 0xdc00)
    return zx.q(((result - 0xd7f7) << 0xa) + rax)

if (rax s>= 0)
    (*(arg1 + 0x28))(arg1, 0xffffffff, 1)

return result
