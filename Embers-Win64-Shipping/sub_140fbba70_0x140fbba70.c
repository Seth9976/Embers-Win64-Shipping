// 函数: sub_140fbba70
// 地址: 0x140fbba70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != arg1 + 0x1e0)
    if (*(arg1 + 0x1e4) != 0)
        *(arg1 + 0x1e4) = 0
    
    if (arg2[1].b != 0)
        *(arg1 + 0x1e0) = *arg2
        *(arg1 + 0x1e4) = 1

*(arg1 + 0x1e8) = arg2[2].b
sub_1407473e0(arg1 + 0x1f0, &arg2[4])
return arg1
