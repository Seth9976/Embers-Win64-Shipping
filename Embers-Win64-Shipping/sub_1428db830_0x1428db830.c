// 函数: sub_1428db830
// 地址: 0x1428db830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = 0x28
__chkstk(0x28)

if (arg2 != 0)
    rax = *(arg2 + 0x18)
    
    if (rax != 0)
        int64_t r8_1 = *(rax + 0x20)
        
        if (r8_1 != 0)
            jump(r8_1)
    else if (*arg2 != 5 && *(arg2 + 4) == 1)
        int32_t rax_1 = *(arg2 + 0x20)
        *arg1 = rax_1
        return rax_1

*arg1 = 0
return rax
