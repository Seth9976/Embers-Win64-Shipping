// 函数: sub_142503050
// 地址: 0x142503050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
uint32_t zmm2[0x4] = data_143f65c20
int128_t var_c8 = zx.o(0)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm2, data_143f65be0)
zmm2[0].q = zx.o(0) u>> 0x40
float var_d8[0x4] = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)
uint32_t var_b8[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_d8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_d8)

zmm2 = data_143f65c20
float (* r14)[0x4] = &var_d8
float (* rax_3)[0x4] = *(arg2 + 0x38)
uint32_t temp0_2[0x4] = __andps_xmmxud_memxud(zmm2, data_143f65be0)
zmm2[0].q = zx.o(0) u>> 0x40
float temp0_3[0x4] = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)

if (rax_3 != 0)
    r14 = rax_3

float var_a8[0x4] = temp0_3
int128_t var_98 = zx.o(0)
uint32_t var_88[0x4] = temp0_2
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_a8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

float (* rax_5)[0x4] = *(arg2 + 0x38)
float (* rdi)[0x4] = &var_a8
int32_t var_dc = 0

if (rax_5 != 0)
    rdi = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_dc, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_dc)

char var_e8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_e8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e8)

int32_t var_e0 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_e0, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e0)

int32_t var_e4 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_e4, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e4)

int64_t rax_10 = *(arg2 + 0x20)
int32_t zmm0_2 = var_e0
float zmm3[0x4] = var_dc
int64_t rsi
rsi.b = rax_10 != 0
int32_t rax_11 = var_e4
char rax_12 = var_e8
*(arg2 + 0x20) = rsi + rax_10
void var_78
int128_t* result = sub_1420d5900(&var_78, r14, rdi, zmm3, rax_12, zmm0_2, rax_11)
*arg3 = *result
arg3[1] = result[1]
arg3[2] = result[2]
__security_check_cookie(rax_1 ^ &var_128)
return result
