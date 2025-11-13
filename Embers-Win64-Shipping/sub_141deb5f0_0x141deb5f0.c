// 函数: sub_141deb5f0
// 地址: 0x141deb5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x28)
int64_t* rdi = rax

if (rax == 0)
    rdi = nullptr
else
    __builtin_memset(rax, 0, 0x20)
    rax[4].d = 0x800

void*** rax_1 = j_sub_140a82f30(0x18)
void*** rbx = rax_1

if (rax_1 == 0)
    rbx = nullptr
else
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rbx = &data_143240d28
    rbx[2] = rdi

*arg2 = rdi
arg2[1] = rbx

if (rdi != 0)
    if (*rdi == 0)
        goto label_141deb6ab
    
    void* rcx = rdi[1]
    int32_t rax_2
    
    if (rcx != 0)
        rax_2 = 0
        
        if (0 == *(rcx + 8))
            *(rcx + 8) = 0
        else
            rax_2 = *(rcx + 8)
    
    if (rcx == 0 || rax_2 s<= 0)
        rbx = arg2[1]
    label_141deb6ab:
        
        if (rbx != 0)
            rbx[1].d += 1
        
        *rdi = rdi
        int64_t* rcx_1 = rdi[1]
        
        if (rbx != rcx_1)
            if (rbx != 0)
                *(rbx + 0xc) += 1
                rcx_1 = rdi[1]
            
            if (rcx_1 != 0)
                int32_t rax_3 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (rax_3 == 1)
                    (*(*rcx_1 + 8))(rcx_1, 1)
            
            rdi[1] = rbx
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t rax_7 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (rax_7 == 1)
                    (*rbx)[1](rbx, 1)

int64_t* rcx_4 = *(arg1 + 0x10)
int64_t rax_10 = (*(*rcx_4 + 0x80))(rcx_4)
void*** rax_11 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_11

if (rax_11 == 0)
    rbx_1 = nullptr
else
    rax_11[1].d = 1
    *(rax_11 + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = rax_10

void* r15 = *arg2
int64_t var_28 = rax_10
void*** var_20 = rbx_1

if (r15 + 0x10 != &var_28)
    *(r15 + 0x10) = rax_10
    var_28 = 0
    sub_1405aeff0(r15 + 0x18, &var_20)
    rbx_1 = var_20

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rbp_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rbp_1 == 1)
            (*rbx_1)[1](rbx_1, zx.q(rbp_1))

*(*arg2 + 0x20) = *(arg1 + 0x20)
return arg2
