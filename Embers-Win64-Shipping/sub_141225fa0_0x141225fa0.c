// 函数: sub_141225fa0
// 地址: 0x141225fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x128) != *(arg1 + 0x154))
    void* r10_1 = arg1 + 0x158
    void* r8_1 = *(r10_1 + 8)
    
    if (r8_1 != 0)
        r10_1 = r8_1
    
    int32_t i = *(r10_1 + (((sx.q(*(arg1 + 0x168)) - 1) & sx.q(arg2)) << 2))
    
    if (i != 0xffffffff)
        int64_t r9_4 = *(arg1 + 0x120)
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rcx = i_1 * 3
            
            if (*(r9_4 + (rcx << 3)) == arg2)
                if (i != 0xffffffff)
                    void* rax_3 = r9_4 + i_1 * 0x18
                    
                    if (rax_3 != 0)
                        return *(rax_3 + 8)
                
                break
            
            i = *(r9_4 + (rcx << 3) + 0x10)
        while (i != 0xffffffff)

return 0
