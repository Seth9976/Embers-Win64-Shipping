// 函数: sub_141d73890
// 地址: 0x141d73890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x90)
void*** rbp_1
void arg_8

if (rax == 0)
    rbp_1 = nullptr
else
    rbp_1 = sub_141d73b80(rax, &arg_8, arg2, *arg3, *arg4, *arg5, *arg6, *arg7)
void*** rax_2 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_2

if (rax_2 == 0)
    rbx_1 = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = rbp_1

*arg1 = rbp_1
void**** r14 = &rbp_1[1]
arg1[1] = rbx_1

if (rbp_1 == 0)
    r14 = nullptr

if (r14 != 0)
    if (*r14 == 0)
        goto label_141d7398b
    
    void* rcx_3 = r14[1]
    int32_t rax_3
    
    if (rcx_3 != 0)
        rax_3 = 0
        
        if (0 == *(rcx_3 + 8))
            *(rcx_3 + 8) = 0
        else
            rax_3 = *(rcx_3 + 8)
    
    if (rcx_3 == 0 || rax_3 s<= 0)
        rbx_1 = arg1[1]
    label_141d7398b:
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *r14 = rbp_1
        int64_t* rcx_4 = r14[1]
        
        if (rbx_1 != rcx_4)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_4 = r14[1]
            
            if (rcx_4 != 0)
                int32_t rax_4 = *(rcx_4 + 0xc)
                *(rcx_4 + 0xc) -= 1
                
                if (rax_4 == 1)
                    (*(*rcx_4 + 8))(rcx_4, 1)
            
            r14[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_8 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_8 == 1)
                    (*rbx_1)[1](rbx_1, 1)

void*** var_28 = *arg1
int64_t* rax_11 = arg1[1]

if (rax_11 != 0)
    rax_11[1].d += 1

sub_1422f0ef0(&var_28)

if (rax_11 != 0)
    rax_11[1].d -= 1
    
    if (rax_11[1].d == 1)
        (**rax_11)(rax_11)
        int32_t rsi_1 = *(rax_11 + 0xc)
        *(rax_11 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rax_11 + 8))(rax_11, zx.q(rsi_1))

return arg1
