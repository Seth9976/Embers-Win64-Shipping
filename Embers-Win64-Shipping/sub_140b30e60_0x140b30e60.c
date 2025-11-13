// 函数: sub_140b30e60
// 地址: 0x140b30e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 4) = *(arg2 + 4)
*(arg1 + 8) = *(arg2 + 8)

if (&arg1[0x10] != &arg2[0x10])
    int64_t rcx = *(arg1 + 0x10)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *(arg1 + 0x10) = *(arg2 + 0x10)
    *(arg2 + 0x10) = 0
    *(arg1 + 0x18) = *(arg2 + 0x18)
    *(arg1 + 0x1c) = *(arg2 + 0x1c)
    *(arg2 + 0x18) = 0

if (&arg1[0x20] != &arg2[0x20])
    int64_t rcx_1 = *(arg1 + 0x20)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(arg1 + 0x20) = *(arg2 + 0x20)
    *(arg2 + 0x20) = 0
    *(arg1 + 0x28) = *(arg2 + 0x28)
    *(arg1 + 0x2c) = *(arg2 + 0x2c)
    *(arg2 + 0x28) = 0

*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x38) = *(arg2 + 0x38)

if (&arg1[0x40] != &arg2[0x40])
    *(arg1 + 0x40) = *(arg2 + 0x40)
    *(arg2 + 0x40) = 0
    sub_1405aeff0(&arg1[0x48], &arg2[0x48])

return arg1
