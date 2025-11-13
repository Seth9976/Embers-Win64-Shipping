// 函数: sub_142b40440
// 地址: 0x142b40440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    int32_t rax_1 = *(arg1 + 0x80)
    int32_t result = rax_1 - arg3
    
    if (rax_1 - arg3 s>= 0)
        *(arg1 + 0x80) = result
        *(arg1 + 0x84) += arg3
        return result

int32_t rdx = *(arg1 + 0x84)

if (arg2 == rdx)
    int32_t r9
    
    if (*arg1 == 0)
        r9 = 0x28
    else
        r9 = *(arg1 + 0x10)
    
    int32_t r11_1 = *(arg1 + 0x80)
    
    if (rdx + r11_1 + arg3 s< r9)
        int32_t rax_4 = rdx + arg3
        *(arg1 + 0x84) = rax_4
        return zx.q(rax_4 - arg3 + r11_1)

return sub_142b404c0(arg1, arg2, arg3, arg4) __tailcall
