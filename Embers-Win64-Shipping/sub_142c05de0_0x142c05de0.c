// 函数: sub_142c05de0
// 地址: 0x142c05de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142bf7510(arg2, arg1, 0x4e)

if (rax == 0)
    return rax

uint16_t rax_2

if (zx.w(*arg1) * 0x100 + zx.w(arg1[1]) u>= 1)
    rax_2 = sub_142bf7510(arg2, &arg1[0x4e], 8)

if (zx.w(*arg1) * 0x100 + zx.w(arg1[1]) u< 1 || rax_2.b != 0)
    if (zx.w(*arg1) * 0x100 + zx.w(arg1[1]) u>= 2)
        rax_2 = sub_142bf7510(arg2, &arg1[0x56], 0xa)
    
    if (zx.w(*arg1) * 0x100 + zx.w(arg1[1]) u< 2 || rax_2.b != 0)
        if (zx.w(*arg1) * 0x100 + zx.w(arg1[1]) u>= 5)
            rax_2 = sub_142bf7510(arg2, &arg1[0x60], 4)
        
        if (zx.w(*arg1) * 0x100 + zx.w(arg1[1]) u< 5 || rax_2.b != 0)
            rax_2.b = 1
            return rax_2

rax_2.b = 0
return rax_2
