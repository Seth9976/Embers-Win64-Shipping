// 函数: sub_140bace50
// 地址: 0x140bace50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
uint128_t zmm0 = *sub_140a1dfc0(arg1, &var_18)
int16_t* i = zmm0.q

for (void* rcx_1 = &i[sx.q(_mm_bsrli_si128(zmm0, 8).d)]; i != rcx_1; i = &i[1])
    if (*i == 0x2f)
        i.b = 0
        return i

i.b = 1
return i
