// 函数: sub_141e7e7b0
// 地址: 0x141e7e7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*(arg1 + 0x98))
*(arg1 + 0xd4)
int32_t result

if (*(arg1 + 0xa8) != *(arg1 + 0xd4))
    void* r9_1 = arg1 + 0xd8
    void* rdx_1 = *(r9_1 + 8)
    
    if (rdx_1 != 0)
        r9_1 = rdx_1
    
    result = *(r9_1 + (((sx.q(*(arg1 + 0xe8)) - 1) & r10) << 2))
    int32_t i = result
    
    if (result != 0xffffffff)
        int64_t r8_4 = *(arg1 + 0xa0)
        
        do
            int64_t rdx_3 = sx.q(i) << 6
            
            if (*(rdx_3 + r8_4) == r10.d)
                if (i == 0xffffffff)
                    break
                
                int32_t* rdx_6
                
                if (result == 0xffffffff)
                    rdx_6 = nullptr
                else
                    while (true)
                        rdx_6 = (sx.q(result) << 6) + r8_4
                        
                        if (*rdx_6 == r10.d)
                            break
                        
                        result = rdx_6[0xe]
                        
                        if (result == 0xffffffff)
                            return zx.q(*0x20)
                    
                    if (result == 0xffffffff)
                        rdx_6 = nullptr
                
                return zx.q(rdx_6[8].b)
            
            i = *(rdx_3 + r8_4 + 0x38)
        while (i != 0xffffffff)

result.b = 0
return result
