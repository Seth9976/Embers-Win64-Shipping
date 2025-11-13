// 函数: sub_142cbe9f0
// 地址: 0x142cbe9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* rbx = data_143de5658
int32_t i_1 = data_143de5660

if (i_1 != 0)
    int32_t i
    
    do
        uint64_t rax = zx.q(rbx[1].d)
        uint64_t rcx_1
        uint64_t r8_1
        
        if (rax.d == 0)
            r8_1 = *rbx
            rcx_1 = 0
        else
            rcx_1 = *rbx
            r8_1 = rcx_1
        
        int64_t rax_1
        
        if (rcx_1 != 0)
            rax_1 = *rcx_1
        label_142cbea43:
            (*(rax_1 + 0x38))(rcx_1, 0)
            uint64_t rcx_2 = *rbx
            
            if (rcx_2 != 0)
                *rbx = sub_140a84c80(rcx_2, 0, 0)
            
            rbx[1].d = 0
        else if (rax.d != 0 && r8_1 != 0)
            rax_1 = *r8_1
            rcx_1 = r8_1
            goto label_142cbea43
        uint64_t rcx_3 = *rbx
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = data_143de5658

if (rbx == 0)
    return 

return sub_140a74f90(rbx) __tailcall
