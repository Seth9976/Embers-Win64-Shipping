// 函数: sub_142b1e310
// 地址: 0x142b1e310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_2

if (arg2 u<= 0xffff)
    rax_2 = zx.d(*(**(arg1 + 0x20) + (sx.q(arg2) s>> 6 << 1))) + (arg2 & 0x3f)
else if (arg2 u> 0x10ffff)
    rax_2 = *(*(arg1 + 0x20) + 0x14) - 1
else
    int64_t* rcx = *(arg1 + 0x20)
    
    if (arg2 s< rcx[3].d)
        rax_2 = sub_142b6a760(rcx, arg2)
    else
        rax_2 = *(rcx + 0x14) - 2

return zx.q(*(*(*(arg1 + 0x20) + 8) + (sx.q(rax_2) << 1)))
