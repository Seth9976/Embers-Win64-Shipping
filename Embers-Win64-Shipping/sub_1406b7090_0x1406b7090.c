// 函数: sub_1406b7090
// 地址: 0x1406b7090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]

if (&arg1[2] != &arg2[2])
    int64_t rcx = *(arg1 + 8)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *(arg1 + 8) = *(arg2 + 8)
    *(arg2 + 8) = 0
    arg1[4] = arg2[4]
    arg1[5] = arg2[5]
    *(arg2 + 0x10) = 0

*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x28) = *(arg2 + 0x28)
*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x40) = *(arg2 + 0x40)
arg1[0x12] = arg2[0x12]
arg1[0x13] = arg2[0x13]
arg1[0x14] = arg2[0x14]
arg1[0x15] = arg2[0x15]
arg1[0x16] = arg2[0x16]
arg1[0x17] = arg2[0x17]
arg1[0x18] = arg2[0x18]
arg1[0x19] = arg2[0x19]
return arg1
