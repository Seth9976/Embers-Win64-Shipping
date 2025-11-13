// 函数: sub_141a90530
// 地址: 0x141a90530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    uint64_t* rbx_1 = rcx + 0x18
    int32_t i
    
    do
        uint64_t rax = zx.q(rbx_1[1].d)
        uint64_t rcx_1
        uint64_t r8_1
        
        if (rax.d == 0)
            r8_1 = *rbx_1
            rcx_1 = 0
        else
            rcx_1 = *rbx_1
            r8_1 = rcx_1
        
        int64_t rax_1
        
        if (rcx_1 != 0)
            rax_1 = *rcx_1
        label_141a90590:
            (*(rax_1 + 0x38))(rcx_1, 0)
            uint64_t rcx_2 = *rbx_1
            
            if (rcx_2 != 0)
                *rbx_1 = sub_140a84c80(rcx_2, 0, 0)
            
            rbx_1[1].d = 0
        else if (rax.d != 0 && r8_1 != 0)
            rax_1 = *r8_1
            rcx_1 = r8_1
            goto label_141a90590
        uint64_t rcx_3 = *rbx_1
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx_1 = &rbx_1[5]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
