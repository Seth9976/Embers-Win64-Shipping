// 函数: sub_141a34420
// 地址: 0x141a34420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t i_1 = arg1[1].d
    void* rcx = *arg1
    
    if (i_1 != 0)
        int64_t* rbx_1 = rcx + 0x80
        int32_t i
        
        do
            char rax_1 = rbx_1[8].b
            
            if ((rax_1 & 1) != 0)
                int64_t* rcx_1 = rbx_1
                
                if ((rax_1 & 2) == 0)
                    rcx_1 = *rbx_1
                
                rbx_1[8].b = rax_1 & 0xfe
                (**rcx_1)(rcx_1, 0)
                
                if ((rbx_1[8].b & 2) == 0)
                    sub_140a74f90(*rbx_1)
            
            int64_t rcx_3 = rbx_1[-4]
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rbx_1 = &rbx_1[0x19]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx = *arg1
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *arg1 = *arg2
    *arg2 = 0
    arg1[1].d = arg2[1].d
    *(arg1 + 0xc) = *(arg2 + 0xc)
    arg2[1] = 0

if (&arg1[2] != &arg2[2])
    sub_141a33bf0(&arg1[2], &arg2[2])
    
    if (arg2[0xa] == 0)
        memmove(&arg1[9], &arg2[9], 4)
    
    int64_t rcx_6 = arg1[0xa]
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    arg1[0xa] = arg2[0xa]
    arg2[0xa] = 0
    arg1[0xb].d = arg2[0xb].d
    arg2[0xb].d = 0

sub_141a33ec0(&arg1[0xc], &arg2[0xc])
*(arg1 + 0x110) = *(arg2 + 0x110)
arg1[0x24].d = arg2[0x24].d
*(arg1 + 0x124) = *(arg2 + 0x124)
sub_141a34030(&arg1[0x27], &arg2[0x27])
return arg1
