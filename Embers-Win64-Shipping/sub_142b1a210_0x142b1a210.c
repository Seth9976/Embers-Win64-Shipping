// 函数: sub_142b1a210
// 地址: 0x142b1a210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9

if (arg2 s>= 0x3400)
    r9.w = arg2.w << 6
    
    while (true)
        uint32_t rdx_1 = zx.d(*arg1)
        
        if (((arg2 s>> 9).w & 0xfffe) + 0x3400 u<= rdx_1.w)
            if (((arg2 s>> 9).w & 0xfffe) + 0x3400 != (rdx_1.w & 0x7ffe))
                break
            
            int16_t r8_1 = arg1[1]
            
            if (r9.w u<= r8_1)
                if (r9.w == (r8_1 & 0xffc0))
                    return zx.q((zx.d(r8_1) & 0x3f) << 0x10) | zx.q(arg1[2])
                
                break
            
            if (rdx_1.w s< 0)
                break
            
            arg1 = &arg1[3]
        else
            arg1 = &arg1[(zx.q(rdx_1) & 1) + 2]
else
    int16_t i = *arg1
    r9.w = arg2.w * 2
    
    for (; r9.w u> i; i = *arg1)
        arg1 = &arg1[(zx.q(i) & 1) + 2]
    
    if (r9.w == (i & 0x7ffe))
        uint32_t result = zx.d(arg1[1])
        
        if ((i.b & 1) == 0)
            return result
        
        return zx.q(result << 0x10) | zx.q(arg1[2])
return -1
