// 函数: sub_14251bcd0
// 地址: 0x14251bcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t var_70 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_70, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

uint32_t zmm3[0x4] = data_143f67580
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f67590)
zmm3[0].q = zx.o(0) u>> 0x40
float var_48[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
int128_t var_38 = zx.o(0)
uint32_t var_28[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

*(arg2 + 0x38)
int128_t result_1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &result_1, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &result_1)

int32_t var_74 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_74, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_74)

int32_t var_78 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_78, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t rax_8 = *(arg2 + 0x20)
int128_t result = result_1
int64_t rdi
rdi.b = rax_8 != 0
uint32_t var_88 = var_78[0]
*(arg2 + 0x20) = rdi + rax_8
int128_t result_2 = result
__security_check_cookie(rax_1 ^ &var_a8)
return result
