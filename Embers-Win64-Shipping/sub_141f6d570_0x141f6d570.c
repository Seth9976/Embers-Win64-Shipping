// 函数: sub_141f6d570
// 地址: 0x141f6d570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d3e110(arg1 + 0x438)

if (result.b == 0)
    result = *(arg1 + 0x430)
    int64_t r8_3 = (sx.q(*(arg1 + 0x490)) + 0x58) * 2
    int32_t rcx_1 = *(arg1 + (r8_3 << 3) + 8)
    
    if (rcx_1 == *(result + 0x1b0))
        int32_t i = 0
        
        if (rcx_1 s> 0)
            int64_t r9_1 = 0
            int64_t r10_1 = 0
            
            do
                char* r11_1 = *(arg1 + (r8_3 << 3))
                
                if (r11_1[r9_1] != 2)
                    result = sx.q(*(*(*(arg1 + 0x430) + 0x1a8) + r10_1 + 8))
                    
                    if (result.d == 0xffffffff || r11_1[result] == 1)
                        r11_1[r9_1] = 1
                    else
                        r11_1[r9_1] = 0
                
                i += 1
                r9_1 += 1
                r10_1 += 0xc
            while (i s< *(arg1 + (r8_3 << 3) + 8))
        
        *(arg1 + 0x5a9) |= 1

return result
