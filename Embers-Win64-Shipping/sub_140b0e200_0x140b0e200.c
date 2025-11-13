// 函数: sub_140b0e200
// 地址: 0x140b0e200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x41) != 0)
    sub_140a74f90(arg1[1])
    arg1[1] = 0

if (arg1 == 0)
    return 

jump(*(*arg1 + 0x10))
