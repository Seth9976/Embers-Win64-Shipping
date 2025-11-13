// 函数: sub_142abbc30
// 地址: 0x142abbc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg1 + 8)
uint64_t result

if (rax s< 0)
    result = zx.q(*(arg1 + 0xc))
else
    result = zx.q(sx.d(rax) s>> 5)

if (result.d != 0)
    int32_t var_38 = 0
    int32_t var_30_1 = 0
    result = sub_142abbb50(&var_38, arg1)
    
    if (result.b != 0)
        uint128_t zmm6 = var_38.o
        
        do
            var_38.o = zmm6
            void var_28
            result = sub_142abbd10(&var_28, &var_38, arg1, arg3)
            uint128_t zmm0 = *result
            zmm6 = zmm0
            var_38.o = zmm0
            
            if (*arg3 s> 0)
                break
            
            result =
                (*(*arg2 + 8))(arg2, _mm_bsrli_si128(zmm0, 8).q u>> 0x20, zmm6.q u>> 0x20, arg3)
            
            if (*arg3 s> 0)
                break
            
            result = sub_142abbb50(&var_38, arg1)
        while (result.b != 0)

return result
