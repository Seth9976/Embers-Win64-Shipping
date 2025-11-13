// 函数: sub_140fbc0e0
// 地址: 0x140fbc0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != arg1 + 0x1c0)
    if (*(arg1 + 0x1c4) != 0)
        *(arg1 + 0x1c4) = 0
    
    if (arg2[1].b != 0)
        *(arg1 + 0x1c0) = *arg2
        *(arg1 + 0x1c4) = 1

*(arg1 + 0x1c8) = arg2[2].b
sub_1407473e0(arg1 + 0x1d0, &arg2[4])
return arg1
