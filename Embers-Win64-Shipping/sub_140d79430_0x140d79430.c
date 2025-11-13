// 函数: sub_140d79430
// 地址: 0x140d79430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x30) != 0)
    int64_t* rcx = *(arg1 - 0x28)
    
    if ((*(*rcx + 0x10))(rcx) != 0)
        int64_t* rcx_1 = *(arg1 - 0x28)
        int64_t* rax_4 = (*(*rcx_1 + 0x98))(rcx_1)
        int64_t var_48
        (*(*rax_4 + 8))(rax_4, &var_48, zx.q(int.d(arg2.q)), zx.q(int.d(arg3.q)))
        int64_t rax_7
        
        if (var_48 == 0)
            rax_7 = 0
        else
            uint128_t zmm0 = var_48.o
            uint128_t var_38 = zmm0
            void* rax_5 = _mm_bsrli_si128(zmm0, 8).q
            
            if (rax_5 != 0)
                *(rax_5 + 8) += 1
            
            int64_t rax_6 = sub_140d7d8b0(*(arg1 - 0x30), &var_38)
            
            if (rax_6 == 0)
                rax_7 = 0
            else
                rax_7 = rax_6 + 0x30
        
        *arg4 = rax_7
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp1_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)
        
        return 0

return 0x80040201
