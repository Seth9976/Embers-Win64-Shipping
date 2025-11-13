// 函数: sub_142a67110
// 地址: 0x142a67110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    *(arg1 + 0xc) = *(arg2 + 0xc)
    *(arg1 + 0x1c) = *(arg2 + 0x1c)
    *(arg1 + 0x2c) = *(arg2 + 0x2c)
    *(arg1 + 0x3c) = *(arg2 + 0x3c)
    *(arg1 + 0x4c) = *(arg2 + 0x4c)
    *(arg1 + 0x5c) = *(arg2 + 0x5c)
    *(arg1 + 0x64) = *(arg2 + 0x64)
    *(arg1 + 0x68) = *(arg2 + 0x68)
    *(arg1 + 0x78) = *(arg2 + 0x78)
    *(arg1 + 0x7c) = *(arg2 + 0x7c)
    *(arg1 + 0x7e) = *(arg2 + 0x7e)
    *(arg1 + 0x80) = *(arg2 + 0x80)
    *(arg1 + 0x90) = *(arg2 + 0x90)
    *(arg1 + 0xa0) = *(arg2 + 0xa0)
    *(arg1 + 0xb0) = *(arg2 + 0xb0)
    *(arg1 + 0xc0) = *(arg2 + 0xc0)
    *(arg1 + 0xd0) = *(arg2 + 0xd0)
    *(arg1 + 0xd8) = *(arg2 + 0xd8)
    *(arg1 + 0xe0) = *(arg2 + 0xe0)
    *(arg1 + 8) = *(arg2 + 8)
    *(arg1 + 0xa) = *(arg2 + 0xa)
    *(arg1 + 9) = *(arg2 + 9)
    *(arg1 + 0xb) = *(arg2 + 0xb)
    *(arg1 + 0xe8) = *(arg2 + 0xe8)
    *(arg1 + 0xf8) = *(arg2 + 0xf8)
    *(arg1 + 0xfc) = *(arg2 + 0xfc)
    int64_t* rcx = *(arg1 + 0xf0)
    
    if (rcx != 0)
        (**rcx)(rcx, 1)
    
    *(arg1 + 0xf0) = 0
    int64_t* rcx_1 = *(arg2 + 0xf0)
    
    if (rcx_1 != 0)
        *(arg1 + 0xf0) = (*(*rcx_1 + 0x58))(rcx_1)
    
    *(arg1 + 0x100) = *(arg2 + 0x100)
    *(arg1 + 0x104) = *(arg2 + 0x104)
    *(arg1 + 0x108) = *(arg2 + 0x108)
    *(arg1 + 0x10c) = *(arg2 + 0x10c)
    *(arg1 + 0x110) = *(arg2 + 0x110)
    *(arg1 + 0x114) = *(arg2 + 0x114)
    *(arg1 + 0xdc) = *(arg2 + 0xdc)
    strncpy(arg1 + 0x128, arg2 + 0x128, 0x9d)
    strncpy(arg1 + 0x1c5, arg2 + 0x1c5, 0x9d)
    *(arg1 + 0x1c4) = 0
    *(arg1 + 0x261) = 0

return arg1
