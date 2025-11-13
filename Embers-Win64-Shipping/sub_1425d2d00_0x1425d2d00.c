// 函数: sub_1425d2d00
// 地址: 0x1425d2d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return 

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
    sub_140a3cab0(&arg1[6], &arg2[6])
    
    if (arg2[0xe] == 0)
        memmove(&arg1[0xd], &arg2[0xd], 4)
    
    int64_t rcx_5 = arg1[0xe]
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    arg1[0xe] = arg2[0xe]
    arg2[0xe] = 0
    arg1[0xf].d = arg2[0xf].d
    arg2[0xf].d = 0

if (&arg1[0x10] != &arg2[0x10])
    int64_t rcx_6 = arg1[0x10]
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    arg1[0x10] = arg2[0x10]
    arg2[0x10] = 0
    arg1[0x11].d = arg2[0x11].d
    *(arg1 + 0x8c) = *(arg2 + 0x8c)
    arg2[0x11] = 0

if (&arg1[0x12] != &arg2[0x12])
    int64_t rcx_7 = arg1[0x12]
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    arg1[0x12] = arg2[0x12]
    arg2[0x12] = 0
    arg1[0x13].d = arg2[0x13].d
    *(arg1 + 0x9c) = *(arg2 + 0x9c)
    arg2[0x13] = 0

*(arg1 + 0xa4) = *(arg2 + 0xa4)
arg1[0x14].d = arg2[0x14].d

if (&arg1[0x15] == &arg2[0x15])
    return 

int64_t rcx_8 = arg1[0x15]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

arg1[0x15] = arg2[0x15]
arg2[0x15] = 0
arg1[0x16].d = arg2[0x16].d
*(arg1 + 0xb4) = *(arg2 + 0xb4)
arg2[0x16] = 0
