// 函数: sub_141c64a30
// 地址: 0x141c64a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
int64_t* rax = sub_141c5eea0(arg1, &var_28, arg2)
int64_t var_68 = 0
int64_t* var_60
int32_t result = sub_141c4d620(&var_60, &rax[1])

if (var_60 != 0)
    var_68 = *rax
    *rax = 0

int64_t* var_20

if (var_20 != 0)
    result = *(var_20 + 0xc)
    *(var_20 + 0xc) -= 1
    
    if (result == 1 && var_20 != 0)
        result = (*(*var_20 + 8))(var_20, 1)

if (var_68 == 0)
    void*** rax_2 = j_sub_140a82f30(0x3b0)
    void*** rbx_1 = rax_2
    
    if (rax_2 == 0)
        rbx_1 = nullptr
    else
        rax_2[1].d = 1
        *(rax_2 + 0xc) = 1
        *rbx_1 = &data_14320ad40
        sub_141c4e480(&rbx_1[2], arg1)
    
    uint128_t zmm0_1 = (&rbx_1[2]).o
    uint128_t var_58 = zmm0_1
    void* rax_3 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    var_68 = var_58.q
    var_58.q = 0
    sub_1405aeff0(&var_60, &var_58:8)
    void* rcx_5 = var_58:8.q
    
    if (rcx_5 != 0)
        int32_t rax_5 = *(rcx_5 + 8)
        *(rcx_5 + 8) -= 1
        
        if (rax_5 == 1)
            int64_t* rbx_2 = var_58:8.q
            (**rbx_2)(rbx_2)
            int32_t rax_7 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_7 == 1)
                int64_t* rcx_7 = var_58:8.q
                (*(*rcx_7 + 8))(rcx_7, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_11 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_11 == 1)
                (*rbx_1)[1](rbx_1, 1)
    
    int64_t arg_20 = arg2
    int64_t* var_38 = &arg_20
    int64_t* var_30_1 = &var_68
    void arg_18
    result = sub_141c4cac0(arg1 + 0x980, &arg_18, &var_38, nullptr)

int64_t* rbx_4 = var_60

if (rbx_4 != 0)
    result = rbx_4[1].d
    rbx_4[1].d -= 1
    
    if (result == 1)
        result = (**rbx_4)(rbx_4)
        int32_t rdi_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_4 + 8))(rbx_4, zx.q(rdi_1))

return result
