// 函数: sub_1424e6040
// 地址: 0x1424e6040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
uint32_t zmm3[0x4] = data_143f65c20
int128_t var_58 = zx.o(0)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f65be0)
zmm3[0].q = zx.o(0) u>> 0x40
float var_68[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
uint32_t var_48[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

float (* rax_3)[0x4] = *(arg2 + 0x38)
float (* r14)[0x4] = &var_68
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    r14 = rax_3

void var_a8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_a8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

void* rax_5 = *(arg2 + 0x38)
void* r13 = &var_a8
*(arg2 + 0x38) = 0

if (rax_5 != 0)
    r13 = rax_5

void var_98

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_98, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

void* rax_7 = *(arg2 + 0x38)
void* r15 = &var_98
*(arg2 + 0x38) = 0

if (rax_7 != 0)
    r15 = rax_7

void var_88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_88, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

void* rax_9 = *(arg2 + 0x38)
void* rbx = &var_88

if (rax_9 != 0)
    rbx = rax_9

int64_t rax_10 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_10 != 0
*(arg2 + 0x20) = rsi + rax_10
float zmm2[0x4] = r14[1]
float var_b0 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
*r13 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
*(r13 + 8) = var_b0
float var_78[0x4] = *r14
int64_t var_b8
sub_140adf5d0(&var_78, &var_b8)
*r15 = var_b8
*(r15 + 8) = var_b0
uint128_t zmm2_1 = r14[2]
int32_t result = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa).d
*rbx = (_mm_unpacklo_ps(zmm2_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0].q)).q
*(rbx + 8) = result
__security_check_cookie(rax_1 ^ &var_d8)
return result
