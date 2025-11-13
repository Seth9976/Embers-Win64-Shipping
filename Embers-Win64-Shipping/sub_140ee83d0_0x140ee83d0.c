// 函数: sub_140ee83d0
// 地址: 0x140ee83d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[1]
int64_t* r14 = arg3

if (rbx == 0)
label_140ee84d8:
    void* rax_8 = j_sub_140a82f30(0x70)
    void* const rdi_2 = rax_8
    
    if (rax_8 == 0)
        rdi_2 = nullptr
    else
        __builtin_memset(rax_8, 0, 0x14)
        *(rax_8 + 0x18) = 0
        *(rax_8 + 0x20) = 0
        *(rax_8 + 0x24) = 0
        *(rax_8 + 0x28) = 0
        int64_t arg_8 = 0
        *(rax_8 + 0x30) = data_14399f5e0
        *(rax_8 + 0x40) = 0
        __builtin_memset(rax_8 + 0x48, 0, 0x28)
    
    void*** rax_9 = j_sub_140a82f30(0x18)
    
    if (rax_9 == 0)
        rax_9 = nullptr
    else
        rax_9[1].d = 1
        *rax_9 = &data_142ec7b38
        *(rax_9 + 0xc) = 1
        rax_9[2] = rdi_2
    
    *arg2 = rdi_2
    arg2[1] = rax_9
else
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        rbx[1].d = rax_1 + 1
    
    if (rbx == 0)
        goto label_140ee84d8
    
    void* rcx = *arg1
    
    if (rcx == 0)
        goto label_140ee84d8
    
    int32_t r9 = *arg3
    uint128_t var_38
    sub_140dbddb0(rcx, &var_38, arg4, r9, arg3[1] - r9, &arg3[4], r14[1].d, *(r14 + 0xd), 
        *(r14 + 0xc))
    uint128_t zmm0_1 = var_38
    uint128_t var_28 = zmm0_1
    void* rax_5 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_5 != 0)
        *(rax_5 + 8) += 1
    
    sub_140ee87b0(arg1, arg2, r14, &var_28)
    int64_t* rdi_1 = var_38:8.q
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
