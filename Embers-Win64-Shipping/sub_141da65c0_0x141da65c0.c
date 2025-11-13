// 函数: sub_141da65c0
// 地址: 0x141da65c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x258) - 1

if (result u<= 1)
    int64_t* rax_1 = sub_141802500()
    int64_t* var_28
    (*(*rax_1 + 0x40))(rax_1, &var_28)
    int64_t* rcx_1 = var_28
    sub_141da4560((*(*rcx_1 + 0x90))(rcx_1), arg1, sub_141dad630)
    void*** rax_4 = j_sub_140a82f30(0x70)
    void*** rbx_1
    
    if (rax_4 == 0)
        rbx_1 = nullptr
    else
        uint128_t zmm0_1 = var_28.o
        uint128_t var_18 = zmm0_1
        void* rcx_3 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rcx_3 != 0)
            *(rcx_3 + 8) += 1
        
        rbx_1 = sub_141da55a0(rax_4, arg2, arg3, arg4, arg5, arg6, &var_18)
    
    void*** var_38 = rbx_1
    void*** rax_8 = j_sub_140a82f30(0x18)
    
    if (rax_8 != 0)
        rax_8[1].d = 1
        *rax_8 = &data_142d42ea8
        *(rax_8 + 0xc) = 1
        rax_8[2] = rbx_1
    
    void*** var_30_1 = rax_8
    result = sub_141da6460(arg1, &var_38)
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            result = (**var_20)(var_20)
            int32_t temp1_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*var_20 + 8))(var_20, 1)

return result
