// 函数: sub_142aa7d40
// 地址: 0x142aa7d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t result

while (*arg2 s<= 0)
    int32_t r8_1 = *(arg1 + 0x28)
    
    if (r8_1 == 1)
        result.o = zx.o(*(arg1 + 8))
        return result
    
    if (r8_1 == 2 || r8_1 == 5)
        result.o = zx.o(0)
        result.q = float.d(*(arg1 + 8))
        return result
    
    if (r8_1 != 6)
    label_142aa7dea:
        *arg2 = 3
        result.o = zx.o(0)
        return result
    
    int64_t inptr = *(arg1 + 8)
    
    if (inptr == 0)
        *arg2 = 7
        result.o = zx.o(0)
        return result
    
    int64_t rax_1
    rax_1, result = __RTDynamicCast(inptr, 0, &class icu_64::UObject `RTTI Type Descriptor', 
        &class icu_64::Measure `RTTI Type Descriptor', 0)
    
    if (rax_1 == 0)
        goto label_142aa7dea
    
    arg1 = *(arg1 + 8) + 8

result.o = zx.o(0)
return result
