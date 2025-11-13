// 函数: sub_142b71e50
// 地址: 0x142b71e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg5 - 1
int16_t* r9 = arg3 + (sx.q(arg4) << 1)

if (i s> 0)
    int32_t r11_1 = arg2 - i
    
    do
        int32_t i_1 = i
        int16_t* rcx = r9
        
        if (i s> 0)
            while (*(sx.q(r11_1) * 2 - r9 + arg1 + rcx) == *rcx)
                rcx = &rcx[1]
                i_1 -= 1
                
                if (i_1 s<= 0)
                    break
        
        if (i_1 == 0)
            break
        
        i -= 1
        r11_1 += 1
    while (i s> 0)

return zx.q(i)
