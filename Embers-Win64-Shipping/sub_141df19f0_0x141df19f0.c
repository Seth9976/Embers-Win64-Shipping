// 函数: sub_141df19f0
// 地址: 0x141df19f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1

if (*(arg1 + 0x108) != *(arg1 + 0x12c))
    void* r11_1 = arg1 + 0x130
    void* r9_1 = *(r11_1 + 8)
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t i = *(r11_1 + (((sx.q(*(arg1 + 0x140)) - 1) & sx.q(arg2)) << 2))
    
    if (i != 0xffffffff)
        void* rcx = *(arg1 + 0x100)
        
        if (rcx != 0)
            rbx = rcx
        
        do
            void* result = (sx.q(i) << 6) + rbx
            
            if (*result == *arg3)
                if (i != 0xffffffff)
                    return result
                
                break
            
            i = *(result + 0x38)
        while (i != 0xffffffff)

return 0
