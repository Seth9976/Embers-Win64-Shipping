// 函数: sub_141a91840
// 地址: 0x141a91840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2].b = arg2[2].b
*(arg1 + 0x11) = *(arg2 + 0x11)
*(arg1 + 0x12) = *(arg2 + 0x12)
*(arg1 + 0x13) = *(arg2 + 0x13)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x15) = *(arg2 + 0x15)
arg1[3].d = arg2[3].d
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg1 + 0x1e) = *(arg2 + 0x1e)

if (&arg1[4] != &arg2[4])
    if (arg2[8] == 0)
        memmove(&arg1[4], &arg2[4], 0x20)
    
    int64_t rcx_1 = arg1[8]
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    arg1[8] = arg2[8]
    arg2[8] = 0
    arg1[9].d = arg2[9].d
    *(arg1 + 0x4c) = *(arg2 + 0x4c)
    arg2[9].d = 0
    *(arg2 + 0x4c) = 8

if (&arg1[0xa] != &arg2[0xa])
    if (arg2[0xc] == 0)
        memmove(&arg1[0xa], &arg2[0xa], 0x10)
    
    int64_t rcx_3 = arg1[0xc]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    arg1[0xc] = arg2[0xc]
    arg2[0xc] = 0
    arg1[0xd].d = arg2[0xd].d
    *(arg1 + 0x6c) = *(arg2 + 0x6c)
    arg2[0xd].d = 0
    *(arg2 + 0x6c) = 4

return arg1
