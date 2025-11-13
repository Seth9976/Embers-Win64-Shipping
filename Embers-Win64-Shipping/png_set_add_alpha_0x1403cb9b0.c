// 函数: png_set_add_alpha
// 地址: 0x1403cb9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int32_t r10_1 = *(arg1 + 0x158)
int32_t r9_1 = *(arg1 + 0x15c)
*(arg1 + 0x15c) = r9_1 | 0x8000
int32_t r10_2 = r10_1 | 0x80

if (arg3 != 1)
    r10_2 = r10_1 & 0xffffff7f

*(arg1 + 0x266) = arg2
*(arg1 + 0x158) = r10_2
arg2.b = *(arg1 + 0x25e)

if (arg2.b == 0)
    if (*(arg1 + 0x25f) u>= 8)
        *(arg1 + 0x263) = 2
else if (arg2.b == 2)
    *(arg1 + 0x263) = 4

*(arg1 + 0x15c) = r9_1 | 0x1008000
