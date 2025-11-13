// 函数: sub_142ab4d40
// 地址: 0x142ab4d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)

if (*(arg1 + 0x40) == 0)
    *(arg1 + 0x30) u>>= (r11 << 2).b
else
    int32_t i = 0
    
    if (*(arg1 + 0x10) - r11.d s> 0)
        int64_t r10_1 = 0
        
        do
            int64_t r8_1 = *(arg1 + 0x30)
            r10_1 += 1
            i += 1
            *(r8_1 + r10_1 - 1) = *(r8_1 + r11 + r10_1 - 1)
        while (i s< *(arg1 + 0x10) - r11.d)
    
    if (i s< *(arg1 + 0x10))
        int64_t i_1 = sx.q(i)
        
        do
            i_1 += 1
            i += 1
            *(i_1 + *(arg1 + 0x30) - 1) = 0
        while (i s< *(arg1 + 0x10))
        
        *(arg1 + 0xc) += r11.d
        *(arg1 + 0x10) -= r11.d
        return arg1

*(arg1 + 0xc) += r11.d
*(arg1 + 0x10) -= r11.d
return arg1
