// 函数: sub_140ad0b80
// 地址: 0x140ad0b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x48)
void*** r14 = rax

if (rax == 0)
    r14 = nullptr
else
    __builtin_memset(&rax[1], 0, 0x1c)
    *r14 = &data_142e4a850
    sub_140a96170(&r14[5])
    r14[8].d = arg2
    *r14 = &data_142e6c390
    void var_28
    int64_t* rax_1 = sub_140ad86f0(&var_28, arg2)
    int64_t rdx_1 = r14[5]
    r14[5] = *rax_1
    *rax_1 = rdx_1
    int64_t rdx_2 = r14[6]
    r14[6] = rax_1[1]
    rax_1[1] = rdx_2
    r14[7].d = rax_1[2].d
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t rdi_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_20 + 8))(var_20, zx.q(rdi_1))

void*** rax_6 = j_sub_140a82f30(0x18)
void*** rbx_2 = rax_6

if (rax_6 == 0)
    rbx_2 = nullptr
else
    rax_6[1].d = 1
    *(rax_6 + 0xc) = 1
    *rbx_2 = &data_142d42ea8
    rbx_2[2] = r14

*arg1 = r14
void**** rdi_2 = &r14[1]
arg1[1] = rbx_2

if (r14 == 0)
    rdi_2 = nullptr

if (rdi_2 != 0)
    void* rax_7
    
    if (*rdi_2 != 0)
        rax_7 = rdi_2[1]
    
    if (*rdi_2 == 0 || rax_7 == 0 || *(rax_7 + 8) s<= 0)
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        *rdi_2 = r14
        int64_t* rcx_6 = rdi_2[1]
        
        if (rbx_2 != rcx_6)
            if (rbx_2 != 0)
                *(rbx_2 + 0xc) += 1
                rcx_6 = rdi_2[1]
            
            if (rcx_6 != 0)
                int32_t temp3_1 = *(rcx_6 + 0xc)
                *(rcx_6 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rcx_6 + 8))(rcx_6, 1)
            
            rdi_2[1] = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp2_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*rbx_2)[1](rbx_2, 1)

return arg1
