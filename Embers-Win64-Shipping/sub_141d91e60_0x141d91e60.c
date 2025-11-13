// 函数: sub_141d91e60
// 地址: 0x141d91e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x428)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 1
    *(rax + 0xc) = 1
    *rbx = &data_1432395d0
    sub_141d94960(&rbx[2])

void* rdi = &rbx[3]

if (rbx == -0x10)
    rdi = nullptr

if (rdi == 0)
label_141d91f42:
    
    if (rbx != 0)
        int32_t rax_5 = rbx[1].d
        rbx[1].d = rax_5
        
        if (rax_5 == 0)
            (**rbx)(rbx)
            int32_t temp0_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp0_1 == 1)
                (*rbx)[1](rbx, 1)
else
    void* rax_1
    
    if (*rdi != 0)
        rax_1 = *(rdi + 8)
    
    if (*rdi != 0 && rax_1 != 0 && *(rax_1 + 8) s> 0)
        goto label_141d91f42
    
    if (rbx != 0)
        rbx[1].d += 1
    
    *rdi = &rbx[2]
    int64_t* rcx_1 = *(rdi + 8)
    
    if (rbx != rcx_1)
        if (rbx != 0)
            *(rbx + 0xc) += 1
            rcx_1 = *(rdi + 8)
        
        if (rcx_1 != 0)
            int32_t temp4_1 = *(rcx_1 + 0xc)
            *(rcx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rcx_1 + 8))(rcx_1, 1)
        
        *(rdi + 8) = rbx
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*rbx)[1](rbx, 1)
        
        goto label_141d91f42

int64_t rbp_1 = sx.q(*(arg1 + 0x18))
int32_t rax_8 = (rbp_1 + 1).d
*(arg1 + 0x18) = rax_8

if (rax_8 s> *(arg1 + 0x1c))
    sub_1405a4f90(arg1 + 0x10)

void** rax_11 = (rbp_1 << 4) + *(arg1 + 0x10)
*rax_11 = &rbx[2]
rax_11[1] = rbx

if (rbx != 0)
    rbx[1].d += 1

*arg2 = &rbx[2]
arg2[1] = rbx

if (rbx != 0)
    int32_t rax_12 = rbx[1].d
    rbx[1].d = rax_12
    
    if (rax_12 == 0)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*rbx)[1](rbx, 1)

return arg2
