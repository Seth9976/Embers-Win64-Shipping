// 函数: sub_142a8cd50
// 地址: 0x142a8cd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax_3 = *(arg2 + 8)
int32_t r8_1

if (rax_3 s< 0)
    r8_1 = *(arg2 + 0xc)
else
    r8_1 = sx.d(rax_3) s>> 5

if ((rax_3.b & 0x11) != 0)
    return sub_142a8cd90(arg1, nullptr, r8_1, arg3) __tailcall

if ((rax_3.b & 2) == 0)
    return sub_142a8cd90(arg1, *(arg2 + 0x18), r8_1, arg3) __tailcall

return sub_142a8cd90(arg1, arg2 + 0xa, r8_1, arg3) __tailcall
