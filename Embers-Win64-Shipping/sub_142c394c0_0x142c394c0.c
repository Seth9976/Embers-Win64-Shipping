// 函数: sub_142c394c0
// 地址: 0x142c394c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(*(arg1 + 0x70) + zx.q(*(arg1 + 0x5c)) * 0x14 + 0xc) = arg3
sub_142c22760(arg1, arg2)
int32_t rax_2 = *(arg1 + 0x64)
uint64_t rax_3

if (rax_2 == 0)
    rax_3 = 0
else
    rax_3 = zx.q(rax_2 - 1)

return sub_142c069e0(*(arg1 + 0x78) + rax_3 * 0x14, arg1) __tailcall
