// 函数: sub_142abb6b0
// 地址: 0x142abb6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg1 + 8)
int32_t rax_2

if (rax s< 0)
    rax_2 = *(arg1 + 0xc)
else
    rax_2 = sx.d(rax) s>> 5

if (rax_2 == 0)
    return rax_2

uint128_t zmm6
uint128_t var_18 = zmm6
int32_t var_38 = 0
int32_t var_30 = 0
int32_t* rax_3

if (sub_142abbb50(&var_38, arg1).b == 0)
label_142abb760:
    rax_3.b = 0
else
    zmm6 = var_38.o
    
    while (true)
        var_38.o = zmm6
        void var_28
        uint128_t zmm0 = *sub_142abbd10(&var_28, &var_38, arg1, arg3)
        zmm6 = zmm0
        var_38.o = zmm0
        
        if (*arg3 s> 0)
            goto label_142abb760
        
        if ((_mm_bsrli_si128(zmm0, 8).q u>> 0x20).d == arg2)
            rax_3.b = 1
            break
        
        if (sub_142abbb50(&var_38, arg1).b == 0)
            goto label_142abb760

return rax_3
