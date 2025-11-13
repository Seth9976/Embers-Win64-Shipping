// 函数: sub_14278ff80
// 地址: 0x14278ff80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)

if (*(arg1 + 0x38) != *(arg1 + 0x64))
    void* r8_1 = *(arg1 + 0x70)
    void* r10_1 = arg1 + 0x68
    
    if (r8_1 != 0)
        r10_1 = r8_1
    
    int32_t i = *(r10_1 + (((sx.q(*(arg1 + 0x78)) - 1) & r11) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x30)
        
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
