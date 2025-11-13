// 函数: sub_1405a9d10
// 地址: 0x1405a9d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x20)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    void* rdx = *arg2
    rax[1] = 0
    rax[2] = 0
    *rdi = &data_142d4b4c0
    sub_140d3a3a0(&rdi[3], rdx)

void*** rax_1 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_1

if (rax_1 == 0)
    rbx_1 = nullptr
else
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = rdi

*arg1 = rdi
void**** r15 = &rdi[1]
arg1[1] = rbx_1

if (rdi == 0)
    r15 = nullptr

if (r15 != 0)
    if (*r15 == 0)
        goto label_1405a9ddb
    
    void* rcx_1 = r15[1]
    int32_t rax_2
    
    if (rcx_1 != 0)
        rax_2 = 0
        
        if (0 == *(rcx_1 + 8))
            *(rcx_1 + 8) = 0
        else
            rax_2 = *(rcx_1 + 8)
    
    if (rcx_1 == 0 || rax_2 s<= 0)
        rbx_1 = arg1[1]
    label_1405a9ddb:
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *r15 = rdi
        int64_t* rcx_2 = r15[1]
        
        if (rbx_1 != rcx_2)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_2 = r15[1]
            
            if (rcx_2 != 0)
                int32_t rax_3 = *(rcx_2 + 0xc)
                *(rcx_2 + 0xc) -= 1
                
                if (rax_3 == 1)
                    (*(*rcx_2 + 8))(rcx_2, 1)
            
            r15[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_7 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_7 == 1)
                    (*rbx_1)[1](rbx_1, 1)

void*** var_28 = *arg1
int64_t* rax_10 = arg1[1]

if (rax_10 != 0)
    rax_10[1].d += 1

sub_1422f0ef0(&var_28)

if (rax_10 != 0)
    rax_10[1].d -= 1
    
    if (rax_10[1].d == 1)
        (**rax_10)(rax_10)
        int32_t rbp_1 = *(rax_10 + 0xc)
        *(rax_10 + 0xc) -= 1
        
        if (rbp_1 == 1)
            (*(*rax_10 + 8))(rax_10, zx.q(rbp_1))

return arg1
