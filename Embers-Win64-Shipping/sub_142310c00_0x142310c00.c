// 函数: sub_142310c00
// 地址: 0x142310c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x58) - *(arg1 + 0x84) s<= 0)
    int64_t* rax_9 = *(arg1 + 0x38)
    void* r8_2 = &rax_9[sx.q(*(arg1 + 0x40))]
    
    if (rax_9 != r8_2)
        do
            void* result = *rax_9
            
            if (result != 0)
                if (*(result + 0xd0) == arg2)
                    return result
                
                void* rdx_3 = *(result + 0x30)
                
                if (rdx_3 != 0 && *(rdx_3 + 0x18) == arg2)
                    return result
            
            rax_9 = &rax_9[1]
        while (rax_9 != r8_2)
else
    int32_t rax_3 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8 = arg1 + 0x88
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t i = *(r8 + (((sx.q(*(arg1 + 0x98)) - 1) & sx.q(rax_3)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_1 = *(arg1 + 0x50)
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rcx_2 = i_1 * 3
            
            if (*(r8_1 + (rcx_2 << 3)) == arg2)
                if (i != 0xffffffff)
                    void* rax_7 = r8_1 + i_1 * 0x18
                    
                    if (rax_7 != 0)
                        return *(rax_7 + 8)
                
                break
            
            i = *(r8_1 + (rcx_2 << 3) + 0x10)
        while (i != 0xffffffff)

return 0
