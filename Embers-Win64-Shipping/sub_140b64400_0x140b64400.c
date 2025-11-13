// 函数: sub_140b64400
// 地址: 0x140b64400
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

if (&arg1[6] != &arg2[6])
    int64_t rcx_1 = *(arg1 + 0x18)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(arg1 + 0x18) = *(arg2 + 0x18)
    *(arg2 + 0x18) = 0
    arg1[8] = arg2[8]
    arg1[9] = arg2[9]
    *(arg2 + 0x20) = 0

if (&arg1[0xa] != &arg2[0xa])
    int64_t rcx_2 = *(arg1 + 0x28)
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    *(arg1 + 0x28) = *(arg2 + 0x28)
    *(arg2 + 0x28) = 0
    arg1[0xc] = arg2[0xc]
    arg1[0xd] = arg2[0xd]
    *(arg2 + 0x30) = 0

if (&arg1[0xe] != &arg2[0xe])
    int64_t rcx_3 = *(arg1 + 0x38)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *(arg1 + 0x38) = *(arg2 + 0x38)
    *(arg2 + 0x38) = 0
    arg1[0x10] = arg2[0x10]
    arg1[0x11] = arg2[0x11]
    *(arg2 + 0x40) = 0

if (&arg1[0x12] != &arg2[0x12])
    int64_t rcx_4 = *(arg1 + 0x48)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    *(arg1 + 0x48) = *(arg2 + 0x48)
    *(arg2 + 0x48) = 0
    arg1[0x14] = arg2[0x14]
    arg1[0x15] = arg2[0x15]
    *(arg2 + 0x50) = 0

if (&arg1[0x16] != &arg2[0x16])
    int64_t rcx_5 = *(arg1 + 0x58)
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    *(arg1 + 0x58) = *(arg2 + 0x58)
    *(arg2 + 0x58) = 0
    arg1[0x18] = arg2[0x18]
    arg1[0x19] = arg2[0x19]
    *(arg2 + 0x60) = 0

return arg1
