// 函数: sub_142ab36d0
// 地址: 0x142ab36d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(*(arg1 + 0x10))
int64_t result

if (r11.d != 0)
    result = sx.q(*(arg1 + 0xc))
    
    if (result.d s< 0 && arg2 == 0)
        result.b = 0
        return result
    
    int32_t rcx_1 = (r11 - 1).d + result.d
    
    if (rcx_1 s>= 0x12)
        if (rcx_1 s> 0x12)
            result.b = 0
            return result
        
        if (r11.d s> 0)
            int64_t r9_1 = 0
            uint64_t r8_1 = zx.q(0x12 - result.d)
            uint32_t rcx_2 = (r8_1 << 2).d
            
            do
                if (*(arg1 + 0x40) == 0)
                    if (r8_1.d u> 0xf)
                        arg2 = 0
                    else
                        arg2 = (*(arg1 + 0x30) u>> rcx_2.b).b & 0xf
                else if (r8_1.d s< 0 || r8_1.d s>= r11.d)
                    arg2 = 0
                else
                    arg2 = *(*(arg1 + 0x30) - result - r9_1 + 0x12)
                
                bool rax_3 = *(r9_1 + &data_143ccb010)
                
                if (arg2 s< rax_3)
                    return true
                
                if (arg2 s> rax_3)
                    return false
                
                r8_1 = zx.q(r8_1.d - 1)
                rcx_2 -= 4
                r9_1 += 1
            while (r9_1 s< r11)
        
        return (data_143ccaf50 & *(arg1 + 0x14)) != 0

result.b = 1
return result
