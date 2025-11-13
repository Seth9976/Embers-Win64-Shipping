// 函数: sub_1408f8500
// 地址: 0x1408f8500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x56]
int32_t i_1 = arg1[0x57].d

if (i_1 != 0)
    int32_t i
    
    do
        int32_t rax_1 = rbx[1].d
        int64_t* rcx
        int64_t* r8_1
        
        if (rax_1 == 0)
            r8_1 = *rbx
            rcx = nullptr
        else
            rcx = *rbx
            r8_1 = rcx
        
        int64_t rax_2
        
        if (rcx != 0)
            rax_2 = *rcx
        label_1408f8560:
            (*(rax_2 + 0x38))(rcx, 0)
            int64_t rcx_1 = *rbx
            
            if (rcx_1 != 0)
                *rbx = sub_140a84c80(rcx_1, 0, 0)
            
            rbx[1].d = 0
        else if (rax_1 != 0 && r8_1 != 0)
            rax_2 = *r8_1
            rcx = r8_1
            goto label_1408f8560
        int64_t rcx_2 = *rbx
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[0x56]

if (rbx != 0)
    sub_140a74f90(rbx)

int64_t* rbx_1 = arg1[0x53]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rdi = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(rdi))

int64_t rcx_6 = arg1[0x44]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return sub_1405ae4b0(arg1) __tailcall
