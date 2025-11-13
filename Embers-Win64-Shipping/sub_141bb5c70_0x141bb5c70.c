// 函数: sub_141bb5c70
// 地址: 0x141bb5c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && (*(arg2 + 0x294) & 2) != 0 && (*(*arg2 + 0x6a8))(arg2) != 0)
    uint64_t var_28
    sub_141bab3c0(arg1, &var_28)
    uint64_t rdi_1 = var_28
    void* rax_2
    int512_t zmm1_1
    
    if (rdi_1 != 0)
        void var_18
        zmm1_1 = sub_1420f3630(&var_18, arg2)
        rax_2 = j_sub_140d3c6e0(&var_18)
    
    if (rdi_1 == 0 || rax_2 == 0)
        rdi_1.b = 0
    else
        rdi_1 =
            zx.q(sub_140e19b90(rdi_1, sub_140e69900(data_143e29f28, zx.q(*(rax_2 + 0xb8))), zmm1_1))
    
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp1_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_20 + 8))(var_20, 1)
    
    return zx.q(rdi_1.b)

return 0
