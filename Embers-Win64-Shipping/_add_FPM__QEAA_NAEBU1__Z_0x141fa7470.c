// 函数: ?add@FPM@@QEAA_NAEBU1@@Z
// 地址: 0x141fa7470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x28) = *(arg2 + 0x28)
arg1[0xc] = arg2[0xc]

if (&arg1[0xe] != &arg2[0xe])
    int64_t rcx = *(arg1 + 0x38)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *(arg1 + 0x38) = *(arg2 + 0x38)
    *(arg2 + 0x38) = 0
    arg1[0x10] = arg2[0x10]
    arg1[0x11] = arg2[0x11]
    *(arg2 + 0x40) = 0

arg1[0x12] = arg2[0x12]

if (&arg1[0x14] != &arg2[0x14])
    int32_t i_2 = arg1[0x16]
    int64_t* rbx_1 = *(arg1 + 0x50)
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx_1 = &rbx_1[3]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rbx_1 = *(arg1 + 0x50)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    *(arg1 + 0x50) = *(arg2 + 0x50)
    *(arg2 + 0x50) = 0
    arg1[0x16] = arg2[0x16]
    arg1[0x17] = arg2[0x17]
    *(arg2 + 0x58) = 0

if (&arg1[0x18] != &arg2[0x18])
    int32_t i_3 = arg1[0x1a]
    int64_t* rbx_2 = *(arg1 + 0x60)
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            int64_t rcx_3 = *rbx_2
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rbx_2 = &rbx_2[2]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        rbx_2 = *(arg1 + 0x60)
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
    
    *(arg1 + 0x60) = *(arg2 + 0x60)
    *(arg2 + 0x60) = 0
    arg1[0x1a] = arg2[0x1a]
    arg1[0x1b] = arg2[0x1b]
    *(arg2 + 0x68) = 0

return arg1
