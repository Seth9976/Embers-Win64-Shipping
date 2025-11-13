// 函数: sub_14282066c
// 地址: 0x14282066c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg1.d s> 0x5d)
    int32_t rdx_1 = arg1.d
    
    if (rdx_1 != 0x7b && rdx_1 != 0x7d)
        if (rdx_1 == 0x85)
            result.b = 1
            return result
        
        if (rdx_1 != 0xfeff)
            if (arg1.d s< 0x7e)
                result.b = 1
                return result
            
            if (arg1.d s>= 0xa0 && (arg1 - 0xd800).d u> 0x7ff && (arg1.d & 0xfffe) != 0xfffe
                    && (arg1 - 0xfdd0).d u> 0x1f && arg1.d s<= 0x10ffff)
                result.b = 1
                return result
else if (arg1.d != 0x5d && (arg1.d u> 0x2c || not(test_bit(0x100100002600, arg1))) && arg1.d != 0x5b
        && arg1.d s>= 0x20)
    result.b = 1
    return result

result.b = 0
return result
