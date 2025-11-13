// 函数: sub_141c6c220
// 地址: 0x141c6c220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t** result
int128_t zmm1
result, zmm1 = sub_141c5d7c0(arg1)

if (result != 0)
    void var_58
    int64_t* rax = sub_141c5eea0(result, &var_58, arg2)
    int64_t var_68_1 = 0
    int64_t* var_60
    sub_141c4d620(&var_60, &rax[1])
    int64_t* rbx_1 = var_60
    
    if (rbx_1 != 0)
        var_68_1 = *rax
        *rax = 0
    
    int64_t* var_50
    
    if (var_50 != 0)
        int32_t rax_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (rax_1 == 1 && var_50 != 0)
            (*(*var_50 + 8))(var_50, 1)
        
        rbx_1 = var_60
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        rbx_1 = var_60
    
    int64_t var_20_1 = var_68_1
    int64_t var_38_1 = 0
    void** const var_28_1 = &data_14320ae80
    int64_t (* var_48)(int64_t* arg1) = j_sub_141c52f00
    int64_t* var_18_1 = rbx_1
    int32_t r8
    int32_t var_10_1 = r8
    result = sub_141c56850(result, &var_48, zmm1)
    
    if (rbx_1 != 0)
        result = zx.q(rbx_1[1].d)
        rbx_1[1].d -= 1
        
        if (result.d == 1)
            int64_t* rbx_2 = var_60
            result = (**rbx_2)(rbx_2)
            int32_t rdi_2 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rdi_2 == 1)
                int64_t* rcx_6 = var_60
                return (*(*rcx_6 + 8))(rcx_6, zx.q(rdi_2))

return result
