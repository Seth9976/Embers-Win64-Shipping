// 函数: sub_142ab4810
// 地址: 0x142ab4810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x40) != 0)
    sub_142a7dcd0(*(arg1 + 0x30))
    *(arg1 + 0x30) = 0
    *(arg1 + 0x40) = 0

*(arg1 + 0x30) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0

if (*arg3 s<= 0)
    if (sub_142ab5ca0(arg2) != 0)
        *(arg1 + 0x14) |= data_143ccaf50
    
    if (sub_142ab5cb0(arg2) == 0)
        sub_142ab3be0(arg1, arg2)
        sub_142ab3280(arg1)

return arg1
