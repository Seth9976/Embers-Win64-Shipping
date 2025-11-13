// 函数: sub_141f4a650
// 地址: 0x141f4a650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x88) & 1) != 0 || arg2 == arg1)
    return 

int64_t i

if (arg2 != 0)
    for (i = *(arg2 + 0xc0); i != 0; i = *(i + 0xc0))
        if (arg1 == i)
            return 

i = *(arg1 + 0xc0)

if (i != 0)
    int64_t* i_1 = *(i + 0xd0)
    i = sx.q(*(i + 0xd8))
    
    for (; i_1 != &i_1[i]; i_1 = &i_1[1])
        if (*i_1 == arg1)
            return 

*(arg1 + 0x14c) &= 0xbf
*(arg1 + 0xc0) = arg2
*(arg1 + 0xc8) = arg3
i.b = sbb.b(i.b, i.b, arg2 != 0)
i.b &= 0x40
*(arg1 + 0x14c) |= i.b
