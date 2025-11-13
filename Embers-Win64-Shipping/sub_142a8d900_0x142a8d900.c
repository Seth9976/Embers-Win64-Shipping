// 函数: sub_142a8d900
// 地址: 0x142a8d900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg2
int16_t* r8 = arg1
uint32_t result

while (true)
    if (r9 s>= 0)
        if (r9 == 0)
            result.b = 1
            return result
        
        result = zx.d(*r8)
        r9 -= 1
    else
        result = zx.d(*r8)
        
        if (result.w == 0)
            result.b = 1
            return result
    
    if (result.w u> 0x7f)
        break
    
    if (not(test_bit(*(&data_1436424d0 + (zx.q(result.w) u>> 5 << 2)), zx.d(result.w) & 0x1f)))
        break
    
    r8 = &r8[1]

result.b = 0
return result
