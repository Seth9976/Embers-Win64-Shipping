// 函数: sub_142501b40
// 地址: 0x142501b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
uint32_t zmm2[0x4] = data_143f65c20
float zmm1[0x4] = zmm2
int128_t var_88 = zx.o(0)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm2, data_143f65be0)
zmm1[0].q = zx.o(0) u>> 0x40
float var_98[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
uint32_t var_78[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_98, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

zmm2 = data_143f65c20
float (* rbp)[0x4] = &var_98
float (* rax_3)[0x4] = *(arg2 + 0x38)
zmm1 = zmm2
uint32_t temp0_2[0x4] = __andps_xmmxud_memxud(zmm2, data_143f65be0)
zmm1[0].q = zx.o(0) u>> 0x40
float temp0_3[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)

if (rax_3 != 0)
    rbp = rax_3

float var_68[0x4] = temp0_3
int128_t var_58 = zx.o(0)
uint32_t var_48[0x4] = temp0_2
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

float (* rax_5)[0x4] = *(arg2 + 0x38)
float (* rdi)[0x4] = &var_68
int32_t var_a8 = 0

if (rax_5 != 0)
    rdi = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_a8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

int64_t result = *(arg2 + 0x20)
int64_t rsi
rsi.b = result != 0
bool cond:2 = var_a8 != 0
*(arg2 + 0x20) = rsi + result

if (cond:2)
    rdi = rbp

zmm1 = rdi[1]
int128_t zmm0_2 = rdi[2]
*arg3 = *rdi
arg3[1] = zmm1
arg3[2] = zmm0_2
__security_check_cookie(rax_1 ^ &var_c8)
return result
