// 函数: sub_142abba70
// 地址: 0x142abba70
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

if (sub_142abbb50(&var_38, arg1).b != 0)
    zmm6 = var_38.o
    
    do
        var_38.o = zmm6
        void var_28
        uint128_t zmm0 = *sub_142abbd10(&var_28, &var_38, arg1, arg2)
        zmm6 = zmm0
        var_38.o = zmm0
        
        if (*arg2 s> 0)
            break
        
        uint32_t rax_5 = (_mm_bsrli_si128(zmm0, 8).q u>> 0x20).d
        
        if (rax_5 s< 0 && sub_142abb9e0(rax_5) == 7)
            return 1
        
        rax_3 = sub_142abbb50(&var_38, arg1)
    while (rax_3.b != 0)

rax_3.b = 0
return rax_3
