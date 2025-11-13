// 函数: sub_140e52ed0
// 地址: 0x140e52ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* rbx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int32_t i
    
    do
        uint64_t rax = zx.q(rbx[1].d)
        uint64_t rcx
        uint64_t r8_1
        
        if (rax.d == 0)
            r8_1 = *rbx
            rcx = 0
        else
            rcx = *rbx
            r8_1 = rcx
        
        int64_t rax_1
        
        if (rcx != 0)
            rax_1 = *rcx
        label_140e52f24:
            (*(rax_1 + 0x38))(rcx, 0)
            uint64_t rcx_1 = *rbx
            
            if (rcx_1 != 0)
                *rbx = sub_140a84c80(rcx_1, 0, 0)
            
            rbx[1].d = 0
        else if (rax.d != 0 && r8_1 != 0)
            rax_1 = *r8_1
            rcx = r8_1
            goto label_140e52f24
        uint64_t rcx_2 = *rbx
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *arg1

if (rbx == 0)
    return 

return sub_140a74f90(rbx) __tailcall
