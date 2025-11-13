// 函数: sub_140baa580
// 地址: 0x140baa580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[1].d s<= 1)
label_140baa613:
    sub_140596d10(arg1, arg2)
    return arg1

uint64_t var_18
uint128_t zmm0 = *sub_140a1dfc0(arg2, &var_18)
int16_t* i = zmm0.q

for (void* rcx_2 = &i[sx.q(_mm_bsrli_si128(zmm0, 8).d)]; i != rcx_2; i = &i[1])
    if (*i == 0x2f)
        goto label_140baa613

var_18 = 0
int64_t var_10 = 0
sub_140bbd500(arg2, &var_18)
*arg1 = var_18
arg1[1].d = var_10.d
*(arg1 + 0xc) = var_10:4.d
return arg1
