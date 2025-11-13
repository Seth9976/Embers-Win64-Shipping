// 函数: sub_140f5ffc0
// 地址: 0x140f5ffc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14_1

if (*(arg1 + 0x324) == 0)
label_140f6009d:
    r14_1 = &arg2[2]
    arg1[0x64].d = *arg2
    *(arg1 + 0x324) = arg2[1].b
    sub_1407473e0(&arg1[0x65], r14_1)
    sub_140e19ef0(arg1, 1)
else
    int64_t rbx
    
    if (arg1[0x66].d == 0)
        rbx.b = 0
    else
        int64_t* rcx = arg1[0x65]
        
        if (rcx == 0)
            rbx.b = 0
        else if ((*(*rcx + 0x28))(rcx) == 0)
            rbx.b = 0
        else
            rbx.b = 1
    
    r14_1 = &arg2[2]
    char rax
    
    if (arg2[4] == 0)
        rax = 0
    else
        int64_t* rcx_1 = *r14_1
        
        if (rcx_1 == 0)
            rax = 0
        else if ((*(*rcx_1 + 0x28))(rcx_1) == 0)
            rax = 0
        else
            rax = 1
    
    if (rbx.b != rax)
        goto label_140f6009d
    
    bool cond:2_1
    
    if (rbx.b == 0)
        if (*(arg1 + 0x324) != arg2[1].b)
            goto label_140f6009d
        
        cond:2_1 = arg1[0x64].d == *arg2
    else
        int64_t rbx_1 = 0
        int64_t rdi_1 = 0
        
        if (r14_1[1].d != 0)
            int64_t* rcx_2 = *r14_1
            void arg_8
            
            if (rcx_2 != 0)
                rdi_1 = *(*(*rcx_2 + 0x30))(rcx_2, &arg_8)
        
        if (arg1[0x66].d != 0)
            int64_t* rcx_3 = arg1[0x65]
            void arg_10
            
            if (rcx_3 != 0)
                rbx_1 = *(*(*rcx_3 + 0x30))(rcx_3, &arg_10)
        
        cond:2_1 = rbx_1 == rdi_1
    
    if (not(cond:2_1))
        goto label_140f6009d

return sub_140745b20(r14_1) __tailcall
