// 函数: png_set_filler
// 地址: 0x1403cb950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

*(arg1 + 0x15d) |= 0x80
*(arg1 + 0x266) = arg2
int32_t rax_1 = *(arg1 + 0x158)
int32_t rax = rax_1 | 0x80

if (arg3 != 1)
    rax = rax_1 & 0xffffff7f

*(arg1 + 0x158) = rax
rax.b = *(arg1 + 0x25e)

if (rax.b == 0)
    if (*(arg1 + 0x25f) u>= 8)
        *(arg1 + 0x263) = 2
else if (rax.b == 2)
    *(arg1 + 0x263) = 4
