// 函数: sub_1417adf70
// 地址: 0x1417adf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    void* r9_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & sx.q(arg3)) << 2))
    
    if (i != 0xffffffff)
        int64_t r9_2 = *arg1
        
        do
            int64_t rdx = sx.q(i) * 3
            
            if (*(r9_2 + (rdx << 2)) == arg3)
                *arg2 = i
                return arg2
            
            i = *(r9_2 + (rdx << 2) + 4)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
