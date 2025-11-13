// 函数: sub_141d3c610
// 地址: 0x141d3c610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)
*(arg1 + 0x44)
int32_t result

if (*(arg1 + 0x18) != *(arg1 + 0x44))
    void* r10_1 = arg1 + 0x48
    void* r8_1 = *(r10_1 + 8)
    
    if (r8_1 != 0)
        r10_1 = r8_1
    
    result = *(r10_1 + (((sx.q(*(arg1 + 0x58)) - 1) & r11) << 2))
    int32_t i = result
    
    if (result != 0xffffffff)
        int64_t r9_4 = *(arg1 + 0x10)
        
        do
            int64_t r8_2 = sx.q(i) * 3
            
            if (*(r9_4 + (r8_2 << 3)) == r11.d)
                if (i != 0xffffffff)
                    void* const rcx_1
                    
                    if (result == 0xffffffff)
                    label_141d3c6a0:
                        rcx_1 = nullptr
                    else
                        while (true)
                            int64_t rdx_2 = sx.q(result) * 3
                            rcx_1 = r9_4 + (rdx_2 << 3)
                            
                            if (*(r9_4 + (rdx_2 << 3)) == r11.d)
                                break
                            
                            result = *(rcx_1 + 0x10)
                            
                            if (result == 0xffffffff)
                                goto label_141d3c6a0_1
                        
                        if (result == 0xffffffff)
                        label_141d3c6a0_1:
                            rcx_1 = nullptr
                    
                    if (*(rcx_1 + 8) != 0)
                        result.b = 1
                        return result
                
                break
            
            i = *(r9_4 + (r8_2 << 3) + 0x10)
        while (i != 0xffffffff)

result.b = 0
return result
