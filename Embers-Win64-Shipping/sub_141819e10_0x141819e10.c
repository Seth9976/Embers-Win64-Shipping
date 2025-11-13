// 函数: sub_141819e10
// 地址: 0x141819e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    void* r9_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & sx.q(arg2)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8 = *arg1
        
        do
            int64_t rdx = sx.q(i) * 3
            void* result = r8 + (rdx << 3)
            
            if (*(r8 + (rdx << 3)) == *arg3)
                if (i != 0xffffffff)
                    return result
                
                break
            
            i = *(result + 0x10)
        while (i != 0xffffffff)

return 0
