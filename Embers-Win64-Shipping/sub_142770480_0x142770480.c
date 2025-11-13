// 函数: sub_142770480
// 地址: 0x142770480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) == 0)
    *arg2 = nullptr
    arg2[1] = 0
    return arg2

void*** rax = j_sub_140a82f30(0x50)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    __builtin_memset(&rax[1], 0, 0x1c)
    *rdi = &data_14349d3b8
    __builtin_memset(&rdi[5], 0, 0x21)

if ((*rdi)[1](rdi, zx.q(arg3), zx.q(arg4)) == 0)
    (**rdi)(rdi, 1)
    rdi = nullptr

*arg2 = rdi
int64_t* rax_4 = j_sub_140a82f30(0x18)
int64_t* rbx_1 = rax_4

if (rax_4 == 0)
    rbx_1 = nullptr
else
    rax_4[1].d = 1
    *(rax_4 + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = rdi

arg2[1] = rbx_1
void**** r14 = &rdi[1]

if (rdi == 0)
    r14 = nullptr

if (r14 != 0)
    void* rax_5
    
    if (*r14 != 0)
        rax_5 = r14[1]
    
    if (*r14 == 0 || rax_5 == 0 || *(rax_5 + 8) s<= 0)
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *r14 = rdi
        int64_t* rcx_2 = r14[1]
        
        if (rbx_1 != rcx_2)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_2 = r14[1]
            
            if (rcx_2 != 0)
                int32_t temp2_1 = *(rcx_2 + 0xc)
                *(rcx_2 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rcx_2 + 8))(rcx_2, 1)
            
            r14[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
