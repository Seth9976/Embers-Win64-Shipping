// 函数: sub_141d435b0
// 地址: 0x141d435b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)

if (*(arg1 + 0x98) != *(arg1 + 0xc4))
    void* r10_1 = arg1 + 0xc8
    void* r8_1 = *(r10_1 + 8)
    
    if (r8_1 != 0)
        r10_1 = r8_1
    
    int32_t i = *(r10_1 + (((sx.q(*(arg1 + 0xd8)) - 1) & r11) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x90)
        
        do
            int64_t rdx = sx.q(i) * 3
            void* rcx_1 = r8_2 + (rdx << 3)
            
            if (*(r8_2 + (rdx << 3)) == r11.d)
                if (i != 0xffffffff)
                    return *(rcx_1 + 8)
                
                break
            
            i = *(rcx_1 + 0x10)
        while (i != 0xffffffff)

return *8
