// 函数: sub_141be1c10
// 地址: 0x141be1c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = (*(*arg1 + 0x288))()
int64_t* result_1 = result

if (result != 0 && (*(result + 0x294) & 2) != 0)
    int64_t rdx_1 = *result
    result = (*(rdx_1 + 0x6a8))(result, rdx_1)
    
    if (result.b != 0 && result_1[0x53] != 0)
        int64_t var_28
        result = sub_141bab3c0(arg1, &var_28)
        
        if (var_28 != 0)
            result = sub_14226dd50(result_1)
            
            if (result != 0)
                int32_t rax_1
                uint128_t zmm0_1
                rax_1, zmm0_1 = sub_140e69900(data_143e29f28, zx.q(result[0x17].d))
                
                if (sub_140e8ab30(data_143e29f28, rax_1, &var_28, 2, zmm0_1) == 0)
                    uint128_t zmm0_2 = var_28.o
                    uint128_t var_18 = zmm0_2
                    void* rax_3 = _mm_bsrli_si128(zmm0_2, 8).q
                    
                    if (rax_3 != 0)
                        *(rax_3 + 8) += 1
                    
                    result = sub_140dbdce0(&result[0x34], &var_18, 2, 0)
                else
                    result = sub_140d9b350(&result[0x34])
        
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
