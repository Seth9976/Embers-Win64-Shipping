// 函数: sub_141b1fa60
// 地址: 0x141b1fa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int32_t rax_1 = sub_1405be5b0(arg3)
    void* r9_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r9_2 = *arg1
        
        do
            int64_t rdx_1 = sx.q(i) * 6
            
            if (*(r9_2 + (rdx_1 << 3) + 0x10) == arg3[2].d)
                int32_t r8_3 = (*(r9_2 + (rdx_1 << 3) + 0xc) ^ *(arg3 + 0xc))
                    | (*(r9_2 + (rdx_1 << 3) + 8) ^ arg3[1].d)
                    | (*(r9_2 + (rdx_1 << 3) + 4) ^ *(arg3 + 4))
                
                if ((r8_3 | (*(r9_2 + (rdx_1 << 3)) ^ *arg3)) == 0)
                    *arg2 = i
                    return arg2
            
            i = *(r9_2 + (rdx_1 << 3) + 0x28)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
