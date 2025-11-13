// 函数: sub_141afdb20
// 地址: 0x141afdb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 8)
*arg1 = *arg2
arg1[1].b = arg2[1].b
arg1[6] = arg2[6]
arg1[7] = arg2[7]

if (&arg2[8] != &arg1[8])
    if (*(arg1 + 0x21) != 0)
        *(arg1 + 0x21) = 0
    
    if (*(arg2 + 0x21) != 0)
        arg1[8].b = arg2[8].b
        *(arg1 + 0x21) = 1

arg1[9] = arg2[9]

if (&arg2[0xa] != &arg1[0xa])
    if (*(arg1 + 0x29) != 0)
        *(arg1 + 0x29) = 0
    
    if (*(arg2 + 0x29) != 0)
        arg1[0xa].b = arg2[0xa].b
        *(arg1 + 0x29) = 1

arg1[0xb].b = arg2[0xb].b
*(arg1 + 0x38) = *(arg2 + 0x38)
arg1[0xc] = arg2[0xc]
arg1[0xd].b = arg2[0xd].b
arg1[0x12] = arg2[0x12]
arg1[0x13] = arg2[0x13]
return arg1
