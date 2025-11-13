// 函数: sub_142c296a0
// 地址: 0x142c296a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r11_2 = (zx.d(*arg1) << 8) + zx.d(arg1[1])
int32_t r10_2 = r11_2 u>> 1 & 0x5b6db6db
int32_t r11_4 = r11_2 - (r10_2 u>> 1 & 0x5b6db6db) - r10_2
char rax_10 = sub_142bf7510(arg2, arg4, (((r11_4 u>> 3) + r11_4) & 0xc71c71c7) u% 0x3f * 2)

if (rax_10 != 0)
    if ((arg1[1] & 0xf0) != 0)
        rax_10 = sub_142c29760(arg1, arg2, arg3, arg4)
    
    if ((arg1[1] & 0xf0) == 0 || rax_10 != 0)
        return 1

return 0
