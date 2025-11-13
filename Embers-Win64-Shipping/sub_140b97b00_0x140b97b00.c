// 函数: sub_140b97b00
// 地址: 0x140b97b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2

if (&arg1[1] != &arg2[1])
    int64_t rcx = arg1[1]
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    arg1[1] = arg2[1]
    arg2[1] = 0
    arg1[2].d = arg2[2].d
    *(arg1 + 0x14) = *(arg2 + 0x14)
    arg2[2] = 0

return arg1
