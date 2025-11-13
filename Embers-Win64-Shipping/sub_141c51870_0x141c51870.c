// 函数: sub_141c51870
// 地址: 0x141c51870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int64_t rcx = *arg1
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *arg1 = *arg2
    *arg2 = 0
    arg1[1].d = arg2[1].d
    *(arg1 + 0xc) = *(arg2 + 0xc)
    arg2[1] = 0

if (&arg1[2] != &arg2[2])
    int64_t rcx_1 = arg1[2]
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    arg1[2] = arg2[2]
    arg2[2] = 0
    arg1[3].d = arg2[3].d
    *(arg1 + 0x1c) = *(arg2 + 0x1c)
    arg2[3] = 0

arg1[4].d = arg2[4].d
*(arg1 + 0x24) = *(arg2 + 0x24)
arg1[5].d = arg2[5].d

if (&arg1[6] != &arg2[6])
    int64_t rcx_2 = arg1[6]
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    arg1[6] = arg2[6]
    arg2[6] = 0
    arg1[7].d = arg2[7].d
    *(arg1 + 0x3c) = *(arg2 + 0x3c)
    arg2[7] = 0

arg1[8].b ^= (arg2[8].b ^ arg1[8].b) & 1
return arg1
