// 函数: sub_1417dab00
// 地址: 0x1417dab00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t result

if (*(arg1 + 0x100) != *(arg1 + 0x12c))
    void* r10_1 = arg1 + 0x130
    void* r8_1 = *(r10_1 + 8)
    
    if (r8_1 != 0)
        r10_1 = r8_1
    
    int32_t i_1 = *(r10_1 + (((sx.q(*(arg1 + 0x140)) - 1) & zx.q(arg2)) << 2))
    int32_t i = i_1
    
    if (i_1 != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0xf8)
        
        do
            int64_t rdx_2 = sx.q(i) * 2
            
            if (*(r8_2 + (rdx_2 << 3)) == arg2)
                if (i == 0xffffffff)
                    break
                
                char* rdx_5
                
                if (i_1 == 0xffffffff)
                    rdx_5 = nullptr
                else
                    while (true)
                        rdx_5 = (sx.q(i_1) << 4) + r8_2
                        
                        if (*rdx_5 == arg2)
                            break
                        
                        i_1 = *(rdx_5 + 8)
                        
                        if (i_1 == 0xffffffff)
                            result.o = *4
                            return result
                    
                    if (i_1 == 0xffffffff)
                        rdx_5 = nullptr
                
                result.o = *(rdx_5 + 4)
                return result
            
            i = *(r8_2 + (rdx_2 << 3) + 8)
        while (i != 0xffffffff)

result.o = zx.o(0)
return result
