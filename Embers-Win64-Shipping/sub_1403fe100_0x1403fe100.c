// 函数: sub_1403fe100
// 地址: 0x1403fe100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0x14)
uint32_t r10 = arg1[2].d

if (i + arg3 u> 0x20)
    do
        int32_t r11_1 = *(arg1 + 0xc)
        int32_t r8 = arg1[1].d
        int32_t rcx_1
        
        if (*(arg1 + 0x1c) + r11_1 u< r8)
            *(arg1 + 0xc) = r11_1 + 1
            zx.q(r8 - (r11_1 + 1))[*arg1] = r10.b
            rcx_1 = 0
        else
            rcx_1 = -1
        
        arg1[6].d |= rcx_1
        i -= 8
        r10 u>>= 8
    while (i s>= 8)

arg1[3].d += arg3
*(arg1 + 0x14) = i + arg3
arg1[2].d = arg2 << i.b | r10
return arg1
