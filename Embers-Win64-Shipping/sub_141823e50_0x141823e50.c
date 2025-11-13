// 函数: sub_141823e50
// 地址: 0x141823e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].b = arg2[1].b
arg1[2] = arg2[2]

if (&arg1[4] != &arg2[4])
    int64_t rcx = *(arg1 + 0x10)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *(arg1 + 0x10) = *(arg2 + 0x10)
    *(arg2 + 0x10) = 0
    arg1[6] = arg2[6]
    arg1[7] = arg2[7]
    *(arg2 + 0x18) = 0

if (&arg1[8] != &arg2[8])
    int64_t rcx_1 = *(arg1 + 0x20)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(arg1 + 0x20) = *(arg2 + 0x20)
    *(arg2 + 0x20) = 0
    arg1[0xa] = arg2[0xa]
    arg1[0xb] = arg2[0xb]
    *(arg2 + 0x28) = 0

if (&arg1[0xc] != &arg2[0xc])
    int64_t rcx_2 = *(arg1 + 0x30)
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    *(arg1 + 0x30) = *(arg2 + 0x30)
    *(arg2 + 0x30) = 0
    arg1[0xe] = arg2[0xe]
    arg1[0xf] = arg2[0xf]
    *(arg2 + 0x38) = 0

if (&arg1[0x10] != &arg2[0x10])
    int64_t rcx_3 = *(arg1 + 0x40)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *(arg1 + 0x40) = *(arg2 + 0x40)
    *(arg2 + 0x40) = 0
    arg1[0x12] = arg2[0x12]
    arg1[0x13] = arg2[0x13]
    *(arg2 + 0x48) = 0

sub_141823570(&arg1[0x14], &arg2[0x14])

if (&arg1[0x28] != &arg2[0x28])
    int64_t rcx_5 = *(arg1 + 0xa0)
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    *(arg1 + 0xa0) = *(arg2 + 0xa0)
    *(arg2 + 0xa0) = 0
    arg1[0x2a] = arg2[0x2a]
    arg1[0x2b] = arg2[0x2b]
    *(arg2 + 0xa8) = 0

if (&arg1[0x2c] != &arg2[0x2c])
    int64_t rcx_6 = *(arg1 + 0xb0)
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    *(arg1 + 0xb0) = *(arg2 + 0xb0)
    *(arg2 + 0xb0) = 0
    arg1[0x2e] = arg2[0x2e]
    arg1[0x2f] = arg2[0x2f]
    *(arg2 + 0xb8) = 0

if (&arg1[0x30] != &arg2[0x30])
    int64_t rcx_7 = *(arg1 + 0xc0)
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    *(arg1 + 0xc0) = *(arg2 + 0xc0)
    *(arg2 + 0xc0) = 0
    arg1[0x32] = arg2[0x32]
    arg1[0x33] = arg2[0x33]
    *(arg2 + 0xc8) = 0

if (&arg1[0x34] != &arg2[0x34])
    int64_t rcx_8 = *(arg1 + 0xd0)
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    *(arg1 + 0xd0) = *(arg2 + 0xd0)
    *(arg2 + 0xd0) = 0
    arg1[0x36] = arg2[0x36]
    arg1[0x37] = arg2[0x37]
    *(arg2 + 0xd8) = 0

return arg1
