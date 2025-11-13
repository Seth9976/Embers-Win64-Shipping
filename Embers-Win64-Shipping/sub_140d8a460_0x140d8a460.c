// 函数: sub_140d8a460
// 地址: 0x140d8a460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x28) != 0)
    int64_t* rcx = *(arg1 - 0x20)
    
    if ((*(*rcx + 0x10))(rcx) != 0)
        int64_t* rcx_1 = *(arg1 - 0x20)
        int64_t var_28
        (*(*rcx_1 + 0x18))(rcx_1, &var_28)
        int64_t* var_20
        
        if (var_28 != 0)
            uint128_t zmm0 = var_28.o
            uint128_t var_18 = zmm0
            void* rax_4 = _mm_bsrli_si128(zmm0, 8).q
            
            if (rax_4 != 0)
                *(rax_4 + 8) += 1
            
            int64_t rax_5 = sub_140d7d8b0(*(arg1 - 0x28), &var_18)
            
            if (rax_5 != 0)
                rax_5 += 0x38
            
            *arg2 = rax_5
            
            if (var_20 != 0)
                var_20[1].d -= 1
                
                if (var_20[1].d == 1)
                    (**var_20)(var_20)
                    int32_t temp3_1 = *(var_20 + 0xc)
                    *(var_20 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*var_20 + 8))(var_20, 1)
            
            return 0
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t temp1_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_20 + 8))(var_20, 1)

return 0x80040201
