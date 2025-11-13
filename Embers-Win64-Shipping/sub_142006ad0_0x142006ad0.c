// 函数: sub_142006ad0
// 地址: 0x142006ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cddf60(arg1, arg2)
uint64_t rax = zx.q(*(arg1 + 0x41))

if (rax.b == 2)
    void* rax_1 = arg1[9]
    *(arg2 + 8) += sx.q(*(rax_1 + 0xc))
    return rax_1

if (rax.b == 0)
    void* rcx_1 = data_143e29f28
    
    if (rcx_1 != 0)
        void* var_18
        sub_140e149c0(*(*(rcx_1 + 0x20) + 8), &var_18)
        rax = zx.q(sub_140da64d0(var_18, arg1))
        *(arg2 + 8) += rax
        int64_t* var_10
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                rax = (**var_10)(var_10)
                int32_t temp1_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    return (*(*var_10 + 8))(var_10, 1)

return rax
