// 函数: sub_142aa3dd0
// 地址: 0x142aa3dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg2 + 8)
uint64_t r8_1

if (rax s< 0)
    r8_1 = zx.q(*(arg2 + 0xc))
else
    r8_1 = zx.q(sx.d(rax) s>> 5)

if ((rax.b & 0x11) != 0)
    return (*(*arg1 + 0x68))(arg1, 0, r8_1, arg3, arg4)

if ((rax.b & 2) == 0)
    return (*(*arg1 + 0x68))(arg1, *(arg2 + 0x18), r8_1, arg3, arg4)

return (*(*arg1 + 0x68))(arg1, arg2 + 0xa, r8_1, arg3, arg4)
