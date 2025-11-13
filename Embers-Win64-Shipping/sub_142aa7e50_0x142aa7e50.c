// 函数: sub_142aa7e50
// 地址: 0x142aa7e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (*arg2 s<= 0)
    int32_t r8_1 = *(arg1 + 0x28)
    
    if (r8_1 == 1)
        int64_t zmm1 = *(arg1 + 8)
        
        if (zmm1 f> 2147483647.0)
            *arg2 = 3
            return 0x7fffffff
        
        if (not(-0x3e20000000000000 f> zmm1))
            return zx.q(int.d(zmm1))
        
        *arg2 = 3
        return 0x80000000
    
    if (r8_1 == 2)
        return zx.q(*(arg1 + 8))
    
    if (r8_1 == 5)
        int64_t result = *(arg1 + 8)
        
        if (result s> 0x7fffffff)
            *arg2 = 3
            return 0x7fffffff
        
        if (result s>= -0x80000000)
            return result
        
        *arg2 = 3
        return 0x80000000
    
    if (r8_1 != 6)
        *arg2 = 3
        return 0
    
    int64_t inptr = *(arg1 + 8)
    
    if (inptr == 0)
        *arg2 = 7
        return 0
    
    if (__RTDynamicCast(inptr, 0, &class icu_64::UObject `RTTI Type Descriptor', 
            &class icu_64::Measure `RTTI Type Descriptor', 0) == 0)
        *arg2 = 3
        return 0
    
    arg1 = *(arg1 + 8) + 8

return 0
