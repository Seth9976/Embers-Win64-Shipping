// 函数: sub_141a34710
// 地址: 0x141a34710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d

if (&arg1[2] != &arg2[2])
    int64_t rcx = arg1[2]
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    arg1[2] = arg2[2]
    arg2[2] = 0
    arg1[3].d = arg2[3].d
    *(arg1 + 0x1c) = *(arg2 + 0x1c)
    arg2[3] = 0

return arg1
