// 函数: sub_142930f60
// 地址: 0x142930f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    char r8_1 = *arg2
    
    if (r8_1 u> 0x7f)
        break
    
    int64_t r9_1 = *(arg1 + 8)
    
    if ((*(r9_1 + (zx.q(r8_1) << 1)) & 0x20) == 0)
        if (r8_1 u> 0x7f)
            break
        
        if ((*(*(arg1 + 8) + (zx.q(r8_1) << 1)) & 0x307) == 0)
            break
        
        arg2 = &arg2[1]
    else
        char rax_2 = arg2[1]
        
        if (rax_2 u<= 0x7f)
            arg2 = &arg2[1 + ((zx.q(zx.d(*(r9_1 + (zx.q(rax_2) << 1))) u>> 3) & 1) ^ 1)]
        else
            arg2 = &arg2[2]

return arg2
