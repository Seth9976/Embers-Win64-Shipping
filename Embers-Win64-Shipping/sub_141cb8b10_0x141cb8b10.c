// 函数: sub_141cb8b10
// 地址: 0x141cb8b10
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

if (&arg1[4] != &arg2[4])
    int64_t rcx_2 = arg1[4]
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    arg1[4] = arg2[4]
    arg2[4] = 0
    arg1[5].d = arg2[5].d
    *(arg1 + 0x2c) = *(arg2 + 0x2c)
    arg2[5] = 0

if (&arg1[6] != &arg2[6])
    int64_t rcx_3 = arg1[6]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    arg1[6] = arg2[6]
    arg2[6] = 0
    arg1[7].d = arg2[7].d
    *(arg1 + 0x3c) = *(arg2 + 0x3c)
    arg2[7] = 0

if (&arg1[8] != &arg2[8])
    sub_141cb8850(&arg1[8], &arg2[8])
    
    if (arg2[0x10] == 0)
        memmove(&arg1[0xf], &arg2[0xf], 4)
    
    int64_t rcx_6 = arg1[0x10]
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    arg1[0x10] = arg2[0x10]
    arg2[0x10] = 0
    arg1[0x11].d = arg2[0x11].d
    arg2[0x11].d = 0

if (&arg1[0x12] != &arg2[0x12])
    sub_140780e10(&arg1[0x12], &arg2[0x12])
    
    if (arg2[0x1a] == 0)
        memmove(&arg1[0x19], &arg2[0x19], 4)
    
    int64_t rcx_9 = arg1[0x1a]
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    arg1[0x1a] = arg2[0x1a]
    arg2[0x1a] = 0
    arg1[0x1b].d = arg2[0x1b].d
    arg2[0x1b].d = 0

arg1[0x1c].b = arg2[0x1c].b
*(arg1 + 0xe1) = *(arg2 + 0xe1)
*(arg1 + 0xe2) = *(arg2 + 0xe2)
return arg1
