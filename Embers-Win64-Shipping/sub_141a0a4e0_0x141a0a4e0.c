// 函数: sub_141a0a4e0
// 地址: 0x141a0a4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int32_t rax_1 = sub_141a0f5f0(arg3)
    void* r9_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r9_2 = *arg1
        
        do
            int64_t* rdx = sx.q(i) * 0x70
            
            if (*(rdx + r9_2) == *arg3)
                int32_t r8_3 = (*(rdx + r9_2 + 0x14) ^ *(arg3 + 0x14))
                    | (*(rdx + r9_2 + 0x10) ^ arg3[2].d) | (*(rdx + r9_2 + 0xc) ^ *(arg3 + 0xc))
                
                if ((r8_3 | (*(rdx + r9_2 + 8) ^ arg3[1].d)) == 0)
                    *arg2 = i
                    return arg2
            
            i = *(rdx + r9_2 + 0x68)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
