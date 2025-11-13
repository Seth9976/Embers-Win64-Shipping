// 函数: sub_1407e51f0
// 地址: 0x1407e51f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2

if (&arg1[2] != &arg2[2])
    int64_t rcx = *(arg1 + 8)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *(arg1 + 8) = *(arg2 + 8)
    *(arg2 + 8) = 0
    arg1[4] = arg2[4]
    arg1[5] = arg2[5]
    *(arg2 + 0x10) = 0

arg1[6] = arg2[6]
arg1[7].b = arg2[7].b
return arg1
