// 函数: sub_142a8d8a0
// 地址: 0x142a8d8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg2
int32_t result

while (true)
    char r8_1
    
    if (r9 s>= 0)
        if (r9 == 0)
            result.b = 1
            return result
        
        r8_1 = *arg1
        r9 -= 1
        arg1 = &arg1[1]
        
        if (r8_1 == 0)
            continue
    else
        r8_1 = *arg1
        arg1 = &arg1[1]
        
        if (r8_1 == 0)
            result.b = 1
            return result
    
    if (r8_1 u> 0x7f)
        break
    
    if (not(test_bit(*(&data_1436424d0 + (zx.q(r8_1) u>> 5 << 2)), zx.d(r8_1) & 0x1f)))
        break

result.b = 0
return result
