// 函数: sub_141a33ec0
// 地址: 0x141a33ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    sub_140d16650(arg1, arg2)
    
    if (arg2[8] == 0)
        memmove(&arg1[7], &arg2[7], 4)
    
    int64_t rcx_1 = arg1[8]
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    arg1[8] = arg2[8]
    arg2[8] = 0
    arg1[9].d = arg2[9].d
    arg2[9].d = 0

if (&arg1[0xa] != &arg2[0xa])
    sub_141a33940(&arg1[0xa], &arg2[0xa])
    
    if (arg2[0x12] == 0)
        memmove(&arg1[0x11], &arg2[0x11], 4)
    
    int64_t rcx_4 = arg1[0x12]
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    arg1[0x12] = arg2[0x12]
    arg2[0x12] = 0
    arg1[0x13].d = arg2[0x13].d
    arg2[0x13].d = 0

if (&arg1[0x14] != &arg2[0x14])
    int32_t i_1 = arg1[0x15].d
    int64_t* rbx_1 = arg1[0x14]
    
    if (i_1 != 0)
        int32_t i
        
        do
            char rax_5 = rbx_1[0x10].b
            
            if ((rax_5 & 1) != 0)
                int64_t* rcx_5 = rbx_1
                
                if ((rax_5 & 2) == 0)
                    rcx_5 = *rbx_1
                
                rbx_1[0x10].b = rax_5 & 0xfe
                (**rcx_5)(rcx_5, 0)
                
                if ((rbx_1[0x10].b & 2) == 0)
                    sub_140a74f90(*rbx_1)
            
            rbx_1 = &rbx_1[0x11]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_1 = arg1[0x14]
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    arg1[0x14] = arg2[0x14]
    arg2[0x14] = 0
    arg1[0x15].d = arg2[0x15].d
    *(arg1 + 0xac) = *(arg2 + 0xac)
    arg2[0x15] = 0

return arg1
