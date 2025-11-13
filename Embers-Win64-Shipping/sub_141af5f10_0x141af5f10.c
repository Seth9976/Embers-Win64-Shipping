// 函数: sub_141af5f10
// 地址: 0x141af5f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x18) = 0

if (*(arg2 + 0x18) == 0)
    memmove(arg1, arg2, 0x18)

int64_t rcx = *(arg1 + 0x18)

if (rcx != 0)
    sub_140a74f90(rcx)

*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg2 + 0x18) = 0
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x24) = *(arg2 + 0x24)
*(arg2 + 0x20) = 0
*(arg2 + 0x24) = 2
*(arg1 + 0x40) = 0

if (*(arg2 + 0x40) == 0)
    memmove(arg1 + 0x28, arg2 + 0x28, 0x18)

int64_t rcx_2 = *(arg1 + 0x40)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*(arg1 + 0x40) = *(arg2 + 0x40)
*(arg2 + 0x40) = 0
*(arg1 + 0x48) = *(arg2 + 0x48)
*(arg1 + 0x4c) = *(arg2 + 0x4c)
*(arg2 + 0x48) = 0
*(arg2 + 0x4c) = 2
*(arg1 + 0x70) = 0

if (*(arg2 + 0x70) == 0)
    memmove(arg1 + 0x50, arg2 + 0x50, 0x20)

int64_t rcx_4 = *(arg1 + 0x70)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

*(arg1 + 0x70) = *(arg2 + 0x70)
*(arg2 + 0x70) = 0
*(arg1 + 0x78) = *(arg2 + 0x78)
*(arg1 + 0x7c) = *(arg2 + 0x7c)
*(arg2 + 0x78) = 0
*(arg2 + 0x7c) = 2
*(arg1 + 0xa8) = 0

if (*(arg2 + 0xa8) == 0)
    memmove(arg1 + 0x80, arg2 + 0x80, 0x28)

int64_t rcx_6 = *(arg1 + 0xa8)

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

*(arg1 + 0xa8) = *(arg2 + 0xa8)
*(arg2 + 0xa8) = 0
*(arg1 + 0xb0) = *(arg2 + 0xb0)
*(arg1 + 0xb4) = *(arg2 + 0xb4)
*(arg2 + 0xb0) = 0
*(arg2 + 0xb4) = 2
*(arg1 + 0xe8) = 0

if (*(arg2 + 0xe8) == 0)
    memmove(arg1 + 0xb8, arg2 + 0xb8, 0x30)

int64_t rcx_8 = *(arg1 + 0xe8)

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

*(arg1 + 0xe8) = *(arg2 + 0xe8)
*(arg2 + 0xe8) = 0
*(arg1 + 0xf0) = *(arg2 + 0xf0)
*(arg1 + 0xf4) = *(arg2 + 0xf4)
*(arg2 + 0xf0) = 0
*(arg2 + 0xf4) = 2
*(arg1 + 0x150) = 0

if (*(arg2 + 0x150) == 0)
    memmove(arg1 + 0xf8, arg2 + 0xf8, 0x58)

int64_t rcx_10 = *(arg1 + 0x150)

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

*(arg1 + 0x150) = *(arg2 + 0x150)
*(arg2 + 0x150) = 0
*(arg1 + 0x158) = *(arg2 + 0x158)
*(arg1 + 0x15c) = *(arg2 + 0x15c)
*(arg2 + 0x158) = 0
*(arg2 + 0x15c) = 2
return arg1
