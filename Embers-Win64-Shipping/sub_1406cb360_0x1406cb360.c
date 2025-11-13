// 函数: sub_1406cb360
// 地址: 0x1406cb360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 4) = *(arg2 + 4)
arg1[8] = arg2[8]
*(arg1 + 0xc) = *(arg2 + 0xc)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg1 + 0x24) = *(arg2 + 0x24)
arg1[0x28] = arg2[0x28]
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg1 + 0x30) = *(arg2 + 0x30)
*(arg1 + 0x34) = *(arg2 + 0x34)
arg1[0x38] = arg2[0x38]

if (&arg1[0x40] != &arg2[0x40])
    int64_t rcx = *(arg1 + 0x40)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *(arg1 + 0x40) = *(arg2 + 0x40)
    *(arg2 + 0x40) = 0
    *(arg1 + 0x48) = *(arg2 + 0x48)
    *(arg1 + 0x4c) = *(arg2 + 0x4c)
    *(arg2 + 0x48) = 0

*(arg1 + 0x50) = *(arg2 + 0x50)

if (&arg1[0x58] != &arg2[0x58])
    int64_t rcx_1 = *(arg1 + 0x58)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(arg1 + 0x58) = *(arg2 + 0x58)
    *(arg2 + 0x58) = 0
    *(arg1 + 0x60) = *(arg2 + 0x60)
    *(arg1 + 0x64) = *(arg2 + 0x64)
    *(arg2 + 0x60) = 0

*(arg1 + 0x68) = *(arg2 + 0x68)
*(arg1 + 0x6c) = *(arg2 + 0x6c)
*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg1 + 0x74) = *(arg2 + 0x74)
*(arg1 + 0x78) = *(arg2 + 0x78)
*(arg1 + 0x7c) = *(arg2 + 0x7c)
arg1[0x80] = arg2[0x80]

if (&arg1[0x88] != &arg2[0x88])
    int64_t rcx_2 = *(arg1 + 0x88)
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    *(arg1 + 0x88) = *(arg2 + 0x88)
    *(arg2 + 0x88) = 0
    *(arg1 + 0x90) = *(arg2 + 0x90)
    *(arg1 + 0x94) = *(arg2 + 0x94)
    *(arg2 + 0x90) = 0

*(arg1 + 0x98) = *(arg2 + 0x98)
*(arg1 + 0xa8) = *(arg2 + 0xa8)
*(arg1 + 0xac) = *(arg2 + 0xac)
arg1[0xb0] = arg2[0xb0]
*(arg1 + 0xb4) = *(arg2 + 0xb4)
*(arg1 + 0xb8) = *(arg2 + 0xb8)
*(arg1 + 0xbc) = *(arg2 + 0xbc)
*(arg1 + 0xc0) = *(arg2 + 0xc0)
arg1[0xc4] = arg2[0xc4]
*(arg1 + 0xc8) = *(arg2 + 0xc8)
*(arg1 + 0xcc) = *(arg2 + 0xcc)
*(arg1 + 0xd0) = *(arg2 + 0xd0)
*(arg1 + 0xd4) = *(arg2 + 0xd4)
*(arg1 + 0xdc) = *(arg2 + 0xdc)
arg1[0xe0] = arg2[0xe0]
*(arg1 + 0xe4) = *(arg2 + 0xe4)
*(arg1 + 0xe8) = *(arg2 + 0xe8)
*(arg1 + 0xec) = *(arg2 + 0xec)
*(arg1 + 0xf0) = *(arg2 + 0xf0)
*(arg1 + 0xf4) = *(arg2 + 0xf4)
*(arg1 + 0xf8) = *(arg2 + 0xf8)
*(arg1 + 0xfc) = *(arg2 + 0xfc)
*(arg1 + 0x100) = *(arg2 + 0x100)
*(arg1 + 0x104) = *(arg2 + 0x104)
return arg1
