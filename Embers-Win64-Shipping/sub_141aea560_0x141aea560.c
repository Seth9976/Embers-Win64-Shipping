// 函数: sub_141aea560
// 地址: 0x141aea560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
uint32_t zmm3[0x4] = data_143f2c2d0
int128_t var_88 = zx.o(0)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f2c2e0)
zmm3[0].q = zx.o(0) u>> 0x40
float var_98[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
uint32_t var_78[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_98, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

float (* rax_3)[0x4] = *(arg2 + 0x38)
float (* r14)[0x4] = &var_98
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    r14 = rax_3

void var_d0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_d0, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_d0)

void* rax_5 = *(arg2 + 0x38)
void* rsi = &var_d0

if (rax_5 != 0)
    rsi = rax_5

int64_t var_e0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_e0, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e0)

int32_t var_f8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_f8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_f8)

int64_t r15
r15.b = var_f8 != 0
int64_t var_f0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_f0, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_f0)

int32_t var_f4 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_f4, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_f4)

int64_t rax_10 = *(arg2 + 0x20)
int64_t var_b8 = var_f0
int64_t rdi
rdi.b = rax_10 != 0
int64_t var_a8 = var_e0
int32_t var_e8
int32_t var_b0 = var_e8
int32_t var_108 = var_f4.d
int32_t var_d8
int32_t var_a0 = var_d8
uint32_t (* var_110)[0x4] = &var_b8
char var_118 = r15.b
*(arg2 + 0x20) = rdi + rax_10
void var_68
int128_t* result = sub_141ac72b0(&var_68, r14, rsi, &var_a8, var_118, var_110, var_108)
*arg3 = *result
arg3[1] = result[1]
arg3[2] = result[2]
__security_check_cookie(rax_1 ^ &var_138)
return result
