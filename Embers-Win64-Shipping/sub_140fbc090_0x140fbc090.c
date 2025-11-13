// 函数: sub_140fbc090
// 地址: 0x140fbc090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != arg1 + 0x200)
    if (*(arg1 + 0x204) != 0)
        *(arg1 + 0x204) = 0
    
    if (arg2[1].b != 0)
        *(arg1 + 0x200) = *arg2
        *(arg1 + 0x204) = 1

*(arg1 + 0x208) = arg2[2].b
sub_1407473e0(arg1 + 0x210, &arg2[4])
return arg1
