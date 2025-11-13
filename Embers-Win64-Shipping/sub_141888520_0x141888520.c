// 函数: sub_141888520
// 地址: 0x141888520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x110) != *(arg1 + 0x13c))
    void* r11_1 = arg1 + 0x140
    void* r9_1 = *(r11_1 + 8)
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t i = *(r11_1 + (((sx.q(*(arg1 + 0x150)) - 1) & sx.q(*arg3)) << 2))
    
    if (i != 0xffffffff)
        int64_t r9_2 = *(arg1 + 0x108)
        
        do
            int64_t* rdx = sx.q(i) * 0x1c
            
            if (*(rdx + r9_2) == *arg3 && *(rdx + r9_2 + 8) == *(arg3 + 8)
                    && *(rdx + r9_2 + 0x10) == arg3[4])
                *arg2 = i
                return arg2
            
            i = *(rdx + r9_2 + 0x14)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
