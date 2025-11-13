// 函数: sub_1421244c0
// 地址: 0x1421244c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    void* r11_1 = &arg1[7]
    void* r9_1 = *(r11_1 + 8)
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & sx.q(*arg3)) << 2))
    
    if (i != 0xffffffff)
        int64_t r9_2 = *arg1
        
        do
            int64_t* rdx = sx.q(i) * 0x38
            
            if (*(rdx + r9_2) == *arg3 && *(rdx + r9_2 + 8) == *(arg3 + 8)
                    && *(rdx + r9_2 + 0x10) == arg3[4] && *(rdx + r9_2 + 0x14) == arg3[5]
                    && *(rdx + r9_2 + 0x18) == arg3[6] && *(rdx + r9_2 + 0x20) == arg3[8]
                    && *(rdx + r9_2 + 0x1c) == arg3[7])
                *arg2 = i
                return arg2
            
            i = *(rdx + r9_2 + 0x30)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
