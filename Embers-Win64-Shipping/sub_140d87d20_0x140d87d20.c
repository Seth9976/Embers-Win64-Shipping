// 函数: sub_140d87d20
// 地址: 0x140d87d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_2 = sx.q(arg2)
*(arg1 + 8) = arg2
HCURSOR rax = *(arg1 + (r8_2 << 3) + 0x88)

if (rax == 0)
    return SetCursor(*(arg1 + (r8_2 << 3) + 0x10)) __tailcall

return SetCursor(rax) __tailcall
