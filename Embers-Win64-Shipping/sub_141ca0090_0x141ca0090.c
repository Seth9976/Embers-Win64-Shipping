// 函数: sub_141ca0090
// 地址: 0x141ca0090
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
            int64_t rdx = sx.q(i) * 5
            
            if (*(r8 + (rdx << 3)) == *arg3 && *(r8 + (rdx << 3) + 0x10) == arg3[2]
                    && *(r8 + (rdx << 3) + 0x18) == arg3[3])
                *arg2 = i
                return arg2
            
            i = *(r8 + (rdx << 3) + 0x20)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
