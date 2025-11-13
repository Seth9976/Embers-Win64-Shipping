// 函数: sub_1408eec60
// 地址: 0x1408eec60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x18)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    rax[1] = 0
    rax[2] = 0
    *rdi = &data_142e140c8

void*** rax_1 = j_sub_140a82f30(0x18)
void*** rbx = rax_1

if (rax_1 == 0)
    rbx = nullptr
else
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rbx = &data_142d42ea8
    rbx[2] = rdi

*arg1 = rdi
void**** r15 = &rdi[1]
arg1[1] = rbx

if (rdi == 0)
    r15 = nullptr

if (r15 != 0)
    if (*r15 == 0)
        goto label_1408eed1b
    
    void* rcx = r15[1]
    int32_t rax_2
    
    if (rcx != 0)
        rax_2 = 0
        
        if (0 == *(rcx + 8))
            *(rcx + 8) = 0
        else
            rax_2 = *(rcx + 8)
    
    if (rcx == 0 || rax_2 s<= 0)
        rbx = arg1[1]
    label_1408eed1b:
        
        if (rbx != 0)
            rbx[1].d += 1
        
        *r15 = rdi
        int64_t* rcx_1 = r15[1]
        
        if (rbx != rcx_1)
            if (rbx != 0)
                *(rbx + 0xc) += 1
                rcx_1 = r15[1]
            
            if (rcx_1 != 0)
                int32_t rax_3 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (rax_3 == 1)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            r15[1] = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t rax_7 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (rax_7 == 1)
                    (*rbx)[1](rbx, 1)

void*** var_28 = *arg1
int64_t* rax_10 = arg1[1]

if (rax_10 != 0)
    rax_10[1].d += 1

sub_1422f0ef0(&var_28)

if (rax_10 != 0)
    rax_10[1].d -= 1
    
    if (rax_10[1].d == 1)
        (**rax_10)(rax_10)
        int32_t r14_1 = *(rax_10 + 0xc)
        *(rax_10 + 0xc) -= 1
        
        if (r14_1 == 1)
            (*(*rax_10 + 8))(rax_10, zx.q(r14_1))

return arg1
