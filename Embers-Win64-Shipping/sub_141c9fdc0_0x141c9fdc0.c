// 函数: sub_141c9fdc0
// 地址: 0x141c9fdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int32_t rax_1 = sub_141ca4480(arg3)
    void* r9_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8 = *arg1
        
        do
            int64_t* rdx = sx.q(i) * 0x2c
            
            if (*(rdx + r8) == *arg3 && *(rdx + r8 + 0x10) == arg3[2]
                    && *(rdx + r8 + 0x18) == arg3[3])
                *arg2 = i
                return arg2
            
            i = *(rdx + r8 + 0x24)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
