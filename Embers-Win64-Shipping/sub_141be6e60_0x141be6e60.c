// 函数: sub_141be6e60
// 地址: 0x141be6e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_14065da90(arg1 + 0x128, arg2)
int64_t* rcx_1 = *(arg1 + 0x658)

if (rcx_1 != 0)
    int64_t var_38 = *arg2
    int64_t* rax_1 = arg2[1]
    
    if (rax_1 != 0)
        rax_1[1].d += 1
        rcx_1 = *(arg1 + 0x658)
    
    int32_t var_28_1 = arg2[2].d
    int64_t var_18 = 0
    int32_t var_10_1 = 0
    char var_20_1 = 1
    sub_140f8d3d0(rcx_1, &var_38)
    result = sub_140745b20(&var_18)
    
    if (rax_1 != 0)
        result = rax_1[1].d
        rax_1[1].d -= 1
        
        if (result == 1)
            result = (**rax_1)(rax_1)
            int32_t rdi_1 = *(rax_1 + 0xc)
            *(rax_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                return (*(*rax_1 + 8))(rax_1, zx.q(rdi_1))

return result
