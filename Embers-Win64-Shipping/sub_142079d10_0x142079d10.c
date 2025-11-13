// 函数: sub_142079d10
// 地址: 0x142079d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 4) = *(arg2 + 4)

if (&arg1[4] != &arg2[4])
    int64_t* rbx_1 = *(arg1 + 0x10)
    int32_t i_1 = arg1[6]
    
    if (i_1 != 0)
        int32_t i
        
        do
            if (*rbx_1 != 0)
                void* rax_2 = rbx_1[2]
                void* rcx = &rbx_1[4]
                
                if (rax_2 != 0)
                    rcx = rax_2
                
                (*(*rcx + 0x10))(rcx)
            
            rbx_1 = &rbx_1[8]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_1 = *(arg1 + 0x10)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    *(arg1 + 0x10) = *(arg2 + 0x10)
    *(arg2 + 0x10) = 0
    arg1[6] = arg2[6]
    arg1[7] = arg2[7]
    *(arg2 + 0x18) = 0

return arg1
