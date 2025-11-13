// 函数: sub_141bb5b80
// 地址: 0x141bb5b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && arg2[0x53] != 0 && (*(arg2 + 0x294) & 2) != 0 && (*(*arg2 + 0x6a8))(arg2) != 0)
    uint64_t var_30
    sub_141bab3c0(arg1, &var_30)
    uint64_t rdi_1 = var_30
    void* rax_2
    
    if (rdi_1 != 0)
        void var_20
        sub_1420f3630(&var_20, arg2)
        rax_2 = j_sub_140d3c6e0(&var_20)
    
    if (rdi_1 == 0 || rax_2 == 0)
        rdi_1.b = 0
    else
        void var_38
        sub_140e19aa0(rdi_1, &var_38, sub_140e69900(data_143e29f28, zx.q(*(rax_2 + 0xb8))))
        char var_37
        rdi_1 = zx.q(var_37)
    
    int64_t* var_28
    
    if (var_28 != 0)
        var_28[1].d -= 1
        
        if (var_28[1].d == 1)
            int64_t rdx_4 = *var_28
            (*rdx_4)(var_28, rdx_4)
            int32_t temp1_1 = *(var_28 + 0xc)
            *(var_28 + 0xc) -= 1
            
            if (temp1_1 == 1)
                int64_t r8_2 = *var_28
                (*(r8_2 + 8))(var_28, 1, r8_2)
    
    return zx.q(rdi_1.b)

return 0
