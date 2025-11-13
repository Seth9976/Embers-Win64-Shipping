// 函数: sub_142a55dd0
// 地址: 0x142a55dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = (*(arg1 + 0x50))()
int32_t rdx_1 = result & 0xfffffc00

if (rdx_1 != 0xdc00)
    return result

int32_t rax = (*(arg1 + 0x50))(arg1, rdx_1)

if ((rax & 0xfffffc00) == 0xd800)
    return zx.q(((rax - 0xd7f7) << 0xa) + result)

if (rax s>= 0)
    (*(arg1 + 0x28))(arg1, 1, 1)

return result
