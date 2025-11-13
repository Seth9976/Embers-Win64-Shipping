// 函数: sub_141bc6280
// 地址: 0x141bc6280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405a46b0(&data_143a30728, arg1)
void* rax = *(arg1 + 0xa8)

if (rax == 0)
    rax = sub_141ee69e0(arg1)

if (sub_14243ade0(rax) != 0)
    int64_t* rcx_2 = data_143f5b298
    int64_t var_28
    (*(*rcx_2 + 0x358))(rcx_2, &var_28)
    
    if (var_28 != 0)
        uint128_t zmm0_1 = var_28.o
        uint128_t var_18 = zmm0_1
        void* rax_3 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_3 != 0)
            *(rax_3 + 8) += 1
        
        sub_141bf3e50(arg1, &var_18)
    
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp1_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_20 + 8))(var_20, 1)

return sub_141f20b40(arg1) __tailcall
