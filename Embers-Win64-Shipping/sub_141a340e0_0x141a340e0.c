// 函数: sub_141a340e0
// 地址: 0x141a340e0
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
    int32_t i_2 = arg1[3].d
    void* rbx_1 = arg1[2]
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_1 = *(rbx_1 + 0x10)
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            int64_t rcx_2 = *rbx_1
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rbx_1 += 0x20
            i = i_2
            i_2 -= 1
        while (i != 1)
        rbx_1 = arg1[2]
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    arg1[2] = arg2[2]
    arg2[2] = 0
    arg1[3].d = arg2[3].d
    *(arg1 + 0x1c) = *(arg2 + 0x1c)
    arg2[3] = 0

if (&arg1[4] != &arg2[4])
    int32_t i_3 = arg1[5].d
    void* rbx_2 = arg1[4]
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            sub_1405ae180(rbx_2 + 0x20)
            int64_t rcx_5 = *(rbx_2 + 0x10)
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            int64_t rcx_6 = *rbx_2
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rbx_2 += 0x70
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        rbx_2 = arg1[4]
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
    
    arg1[4] = arg2[4]
    arg2[4] = 0
    arg1[5].d = arg2[5].d
    *(arg1 + 0x2c) = *(arg2 + 0x2c)
    arg2[5] = 0

return arg1
