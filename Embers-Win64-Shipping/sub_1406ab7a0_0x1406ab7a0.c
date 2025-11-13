// 函数: sub_1406ab7a0
// 地址: 0x1406ab7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3[1]

if (rbx != 0)
    rbx[1].d += 1
    rbx = arg3[1]

int64_t rax = arg3[2]
int64_t rbp = *arg3
void** const result = j_sub_140a82f30(0x1c8)
void*** result_1 = result

if (result == 0)
    result_1 = nullptr
else
    result[1].d = 1
    *(result + 0xc) = 1
    *result_1 = &data_142d8be50
    
    if (rbx != 0)
        rbx[1].d += 1
        rbx[1].d += 1
    
    int64_t var_48_1 = rax
    int64_t var_58 = rbp
    int64_t* var_50_1 = rbx
    sub_14068edb0(&result_1[2], arg2, &var_58)
    result = &data_142d8b3b8
    result_1[2] = &data_142d8b3b8
    result_1[0x38] = 0
    
    if (rbx != 0)
        result = zx.q(rbx[1].d)
        rbx[1].d -= 1
        
        if (result.d == 1)
            (**rbx)(rbx)
            result = zx.q(*(rbx + 0xc))
            *(rbx + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*rbx + 8))(rbx)

if (rbx != 0)
    result = zx.q(rbx[1].d)
    rbx[1].d -= 1
    
    if (result.d == 1)
        (**rbx)(rbx)
        result = zx.q(*(rbx + 0xc))
        *(rbx + 0xc) -= 1
        
        if (result.d == 1)
            result = (*(*rbx + 8))(rbx)

int64_t* rbx_1 = arg1[1]
*arg1 = &result_1[2]
arg1[1] = result_1

if (rbx_1 != 0)
    result = zx.q(rbx_1[1].d)
    rbx_1[1].d -= 1
    
    if (result.d == 1)
        (**rbx_1)(rbx_1)
        result = zx.q(*(rbx_1 + 0xc))
        *(rbx_1 + 0xc) -= 1
        
        if (result.d == 1)
            result = (*(*rbx_1 + 8))(rbx_1)

if (arg2 != 2)
    int64_t* rbx_2 = arg1[1]
    void* const r12_1 = *arg1
    int64_t* r14
    void* const r15_1
    
    if (rbx_2 == 0)
        r15_1 = r12_1
        rbx_2 = nullptr
        r12_1 = nullptr
        r14 = nullptr
    else
        *(rbx_2 + 0xc) += 1
        r15_1 = *arg1
        *(rbx_2 + 0xc) += 1
        r14 = rbx_2
    
    void*** rax_8 = j_sub_140a82f30(0xd0)
    void*** rsi_1 = rax_8
    
    if (rax_8 == 0)
        rsi_1 = nullptr
    else
        *rsi_1 = &data_142d8b328
        rsi_1[1].d = 1
        *rsi_1 = &data_142d8b338
        rsi_1[2].d = 3
        _Cnd_init_in_situ(&rsi_1[3])
        _Mtx_init_in_situ(&rsi_1[0xc], 2)
        rsi_1[0x16].b = 0
        *rsi_1 = &data_142d8b3a0
        __builtin_memset(&rsi_1[0x17], 0, 0x18)
        
        if (rbx_2 != 0)
            rsi_1[0x18] = r12_1
            rsi_1[0x19] = rbx_2
            *(rbx_2 + 0xc) += 1
    
    void* rcx_9 = *(r15_1 + 0x78)
    *(r15_1 + 0x80) = rsi_1
    result = sub_1406aee40(rcx_9, rsi_1)
    
    if (rbx_2 != 0)
        result = zx.q(*(rbx_2 + 0xc))
        *(rbx_2 + 0xc) -= 1
        
        if (result.d == 1)
            result = (*(*rbx_2 + 8))(rbx_2)
    
    if (r14 != 0)
        result = zx.q(*(r14 + 0xc))
        *(r14 + 0xc) -= 1
        
        if (result.d == 1)
            result = (*(*r14 + 8))(r14)

int64_t* rbx_3 = arg3[1]

if (rbx_3 != 0)
    result = zx.q(rbx_3[1].d)
    rbx_3[1].d -= 1
    
    if (result.d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t rdi_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3)

return result
