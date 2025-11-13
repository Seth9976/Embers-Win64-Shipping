// 函数: sub_1424cbb30
// 地址: 0x1424cbb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t var_74 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_74, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_74)

uint32_t zmm3[0x4] = data_143f64e10
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f64e20)
zmm3[0].q = zx.o(0) u>> 0x40
float var_68[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
int128_t var_58 = zx.o(0)
uint32_t var_48[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

float (* rax_4)[0x4] = *(arg2 + 0x38)
float (* rsi)[0x4] = &var_68
int32_t var_78 = 0

if (rax_4 != 0)
    rsi = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_78, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

bool cond:1 = var_78 != 0
int64_t rax_6 = *(arg2 + 0x20)
int32_t rdx_6 = var_74
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
char result = sub_142090f40(arg1, rdx_6, rsi, cond:1)
*arg3 = result
__security_check_cookie(rax_1 ^ &var_98)
return result
