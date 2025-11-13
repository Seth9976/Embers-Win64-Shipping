// 函数: sub_142b77560
// 地址: 0x142b77560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg1 + 8)
int32_t rdx_1

if (rax s< 0)
    rdx_1 = *(arg1 + 0xc)
else
    rdx_1 = sx.d(rax) s>> 5

void* rcx

if ((rax.b & 0x11) != 0)
    rcx = nullptr
else if ((rax.b & 2) == 0)
    rcx = *(arg1 + 0x18)
else
    rcx = arg1 + 0xa

if (sub_142b13680(rcx, rdx_1) == 0)
    return 0xfffffffe

int16_t rax_3 = *(arg1 + 8)

if (rax_3 s< 0)
    return sub_142b76090(arg1, 0, *(arg1 + 0xc)) __tailcall

return sub_142b76090(arg1, 0, sx.d(rax_3) s>> 5) __tailcall
