// 函数: sub_140fbba20
// 地址: 0x140fbba20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != arg1 + 0x220)
    if (*(arg1 + 0x224) != 0)
        *(arg1 + 0x224) = 0
    
    if (arg2[1].b != 0)
        *(arg1 + 0x220) = *arg2
        *(arg1 + 0x224) = 1

*(arg1 + 0x228) = arg2[2].b
sub_1407473e0(arg1 + 0x230, &arg2[4])
return arg1
