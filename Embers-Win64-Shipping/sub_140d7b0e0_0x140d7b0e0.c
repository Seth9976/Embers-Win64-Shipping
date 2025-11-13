// 函数: sub_140d7b0e0
// 地址: 0x140d7b0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
*arg2 = 0

if (*(arg1 - 0x30) != 0)
    int64_t* rcx = *(arg1 - 0x28)
    
    if ((*(*rcx + 0x10))(rcx) != 0)
        int64_t* rcx_1 = *(arg1 - 0x28)
        int64_t* rax_4 = (*(*rcx_1 + 0x98))(rcx_1)
        int64_t r8 = *rax_4
        int64_t var_28
        (*(r8 + 0x10))(rax_4, &var_28, r8)
        
        if (var_28 != 0)
            uint128_t zmm0 = var_28.o
            uint128_t var_18 = zmm0
            void* rax_5 = _mm_bsrli_si128(zmm0, 8).q
            
            if (rax_5 != 0)
                *(rax_5 + 8) += 1
            
            int64_t rax_6 = sub_140d7d8b0(*(arg1 - 0x30), &var_18)
            
            if (rax_6 != 0)
                rbx = rax_6 + 0x30
            
            *arg2 = rbx
        
        int64_t* var_20
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t temp1_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_20 + 8))(var_20, 1)
        
        return 0

return 0x80040201
