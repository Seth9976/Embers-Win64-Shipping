// 函数: sub_141be3690
// 地址: 0x141be3690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
int64_t* result = sub_141bab3c0(arg1, &var_28)

if (var_28 != 0)
    result = sub_140e892d0(data_143e29f28, &var_28, 2, arg2)
    
    if (result.b == 0)
        result = (*(*arg1 + 0x150))(arg1)
        
        if (result != 0)
            result = sub_142436860(result)
            
            if (result != 0)
                uint128_t zmm0 = var_28.o
                uint128_t var_18 = zmm0
                void* rcx_3 = _mm_bsrli_si128(zmm0, 8).q
                
                if (rcx_3 != 0)
                    *(rcx_3 + 8) += 1
                
                result = sub_140dbdce0(&result[0x34], &var_18, 2, 0)

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
