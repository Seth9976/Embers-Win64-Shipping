// 函数: sub_141707360
// 地址: 0x141707360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141707440(arg1, arg2)
*(arg1 + 0xd8) = *(arg2 + 0xd8)
*(arg1 + 0xdc) = *(arg2 + 0xdc)
arg1[0xe].q = arg2[0xe].q
*(arg1 + 0xe8) = *(arg2 + 0xe8)
*(arg1 + 0xec) = *(arg2 + 0xec)
*(arg1 + 0xf4) = *(arg2 + 0xf4)

if (arg1 + 0xf8 != arg2 + 0xf8)
    if (*(arg2 + 0x128) == 0)
        memmove(arg1 + 0xf8, arg2 + 0xf8, 0x30)
    
    int64_t rcx_1 = *(arg1 + 0x128)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(arg1 + 0x128) = *(arg2 + 0x128)
    *(arg2 + 0x128) = 0
    arg1[0x13].d = arg2[0x13].d
    *(arg1 + 0x134) = *(arg2 + 0x134)
    arg2[0x13].d = 0
    *(arg2 + 0x134) = 4

return arg1
