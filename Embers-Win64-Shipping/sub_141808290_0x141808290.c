// 函数: sub_141808290
// 地址: 0x141808290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xbc) == 1)
    int64_t* rdi_1 = arg2[1]
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rbx_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_1))
    
    uint64_t rax
    rax.b = 0
    return rax

void*** rax_4 = j_sub_140a82f30(0x18)

if (rax_4 != 0)
    int64_t var_18 = *arg2
    void* rcx_3 = arg2[1]
    void* var_10_1 = rcx_3
    
    if (rcx_3 != 0)
        *(rcx_3 + 8) += 1
    
    rax_4 = sub_1417fe890(rax_4, &var_18)

int64_t* rcx_5 = *(arg1 + 0xb0)
*(arg1 + 0xb0) = rax_4

if (rcx_5 != 0)
    (**rcx_5)(rcx_5, 1)

*(arg1 + 0xb8) = 0
int64_t* rdi_2 = arg2[1]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t rbx_2 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rbx_2 == 1)
            (*(*rdi_2 + 8))(rdi_2, zx.q(rbx_2))

rax_4.b = 1
return rax_4
