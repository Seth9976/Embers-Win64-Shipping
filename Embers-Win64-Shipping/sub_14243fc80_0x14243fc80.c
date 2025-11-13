// 函数: sub_14243fc80
// 地址: 0x14243fc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x28)
void* rcx = *(rax + 0x58)

if (rcx != 0 && *(rcx + 0x140) != 0)
    rax = (*(*arg2 + 0x30))(arg2)
    
    if (rax.b == 0)
        int64_t* var_20
        
        while (true)
            int64_t* rax_2 = sub_142168400()
            int64_t* var_38_1 = arg2
            int64_t var_28
            rax = (*(*rax_2 + 0x320))(rax_2, &var_28, *(*(*(arg1 + 0x28) + 0x58) + 0x140))
            
            if (var_28 == 0)
                break
            
            void* r8_3 = *(arg1 + 0x28)
            
            if (*(*(r8_3 + 0x58) + 0x88) == 0)
                uint128_t zmm0_1 = var_28.o
                uint128_t var_18 = zmm0_1
                void* rax_4 = _mm_bsrli_si128(zmm0_1, 8).q
                
                if (rax_4 != 0)
                    *(rax_4 + 8) += 1
                    r8_3 = *(arg1 + 0x28)
                
                int64_t* rcx_3 = *(r8_3 + 0x58)
                (*(*rcx_3 + 0x328))(rcx_3, &var_18)
            
            if (var_20 != 0)
                var_20[1].d -= 1
                
                if (var_20[1].d == 1)
                    (**var_20)(var_20)
                    int32_t temp3_1 = *(var_20 + 0xc)
                    *(var_20 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*var_20 + 8))(var_20, 1)
            
            char rax_9 = (*(*arg2 + 0x30))(arg2)
            
            if (rax_9 != 0)
                return rax_9
        
        *(arg2 + 0x29) |= 1
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                rax = (**var_20)(var_20)
                int32_t temp1_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    return (*(*var_20 + 8))(var_20, 1)

return rax
