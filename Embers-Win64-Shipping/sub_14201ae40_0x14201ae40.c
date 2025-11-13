// 函数: sub_14201ae40
// 地址: 0x14201ae40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6] = arg2[6]
arg1[7] = arg2[7]
arg1[8] = arg2[8]
arg1[9] = arg2[9]
arg1[0xa] = arg2[0xa]

if (&arg1[0xc] != &arg2[0xc])
    int64_t rcx = *(arg1 + 0x30)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *(arg1 + 0x30) = *(arg2 + 0x30)
    *(arg2 + 0x30) = 0
    arg1[0xe] = arg2[0xe]
    arg1[0xf] = arg2[0xf]
    *(arg2 + 0x38) = 0

if (&arg1[0x10] != &arg2[0x10])
    int64_t rcx_1 = *(arg1 + 0x40)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(arg1 + 0x40) = *(arg2 + 0x40)
    *(arg2 + 0x40) = 0
    arg1[0x12] = arg2[0x12]
    arg1[0x13] = arg2[0x13]
    *(arg2 + 0x48) = 0

return arg1
