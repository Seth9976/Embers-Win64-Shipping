// 函数: sub_141e7ec90
// 地址: 0x141e7ec90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)

if (*(arg1 + 0x18) != *(arg1 + 0x44))
    void* r8_1 = *(arg1 + 0x50)
    void* r10_1 = arg1 + 0x48
    
    if (r8_1 != 0)
        r10_1 = r8_1
    
    int32_t i = *(r10_1 + (((sx.q(*(arg1 + 0x58)) - 1) & r11) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x10)
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rcx = i_1 * 3
            
            if (*(r8_2 + (rcx << 3)) == r11.d)
                if (i != 0xffffffff)
                    void* rax_2 = r8_2 + i_1 * 0x18
                    
                    if (rax_2 != 0)
                        return *(rax_2 + 8)
                
                break
            
            i = *(r8_2 + (rcx << 3) + 0x10)
        while (i != 0xffffffff)

return 0
