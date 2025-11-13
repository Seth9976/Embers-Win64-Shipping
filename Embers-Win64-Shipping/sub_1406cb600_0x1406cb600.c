// 函数: sub_1406cb600
// 地址: 0x1406cb600
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

sub_1406cb260(&arg1[8], &arg2[8])
arg1[0xa].b = arg2[0xa].b

if (&arg1[0xb] != &arg2[0xb])
    int64_t rcx_5 = arg1[0xb]
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    arg1[0xb] = arg2[0xb]
    arg2[0xb] = 0
    arg1[0xc].d = arg2[0xc].d
    *(arg1 + 0x64) = *(arg2 + 0x64)
    arg2[0xc] = 0

arg1[0xd].d = arg2[0xd].d
return arg1
