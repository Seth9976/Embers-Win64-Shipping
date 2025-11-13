// 函数: sub_140da07e0
// 地址: 0x140da07e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    void* r11_1 = &arg1[7]
    void* r9_1 = *(r11_1 + 8)
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t i = *(r11_1 + (((sx.q(arg1[9].d) - 1) & sx.q(*(arg3 + 0x74))) << 2))
    
    if (i != 0xffffffff)
        int64_t r8 = *arg1
        
        do
            int64_t rdx_1 = sx.q(i) * 0x12
            
            if (*(r8 + (rdx_1 << 3)) == *arg3 && *(r8 + (rdx_1 << 3) + 0x10) == arg3[2].d
                    && *(r8 + (rdx_1 << 3) + 0x14) == *(arg3 + 0x14)
                    && *(r8 + (rdx_1 << 3) + 0x30) == arg3[6]
                    && *(r8 + (rdx_1 << 3) + 0x40) == arg3[8]
                    && *(r8 + (rdx_1 << 3) + 0x48) == arg3[9].d
                    && *(r8 + (rdx_1 << 3) + 0x50) == arg3[0xa].d
                    && *(r8 + (rdx_1 << 3) + 0x54) == *(arg3 + 0x54)
                    && arg3[0xe].d f== *(r8 + (rdx_1 << 3) + 0x70))
                *arg2 = i
                return arg2
            
            i = *(r8 + (rdx_1 << 3) + 0x88)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
