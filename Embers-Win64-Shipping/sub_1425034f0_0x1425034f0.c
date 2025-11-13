// 函数: sub_1425034f0
// 地址: 0x1425034f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
uint32_t zmm2[0x4] = data_143f65c20
int128_t var_b8 = zx.o(0)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm2, data_143f65be0)
zmm2[0].q = zx.o(0) u>> 0x40
float var_c8[0x4] = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)
uint32_t var_a8[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_c8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_c8)

zmm2 = data_143f65c20
float (* rbp)[0x4] = &var_c8
float (* rax_3)[0x4] = *(arg2 + 0x38)
uint32_t temp0_2[0x4] = __andps_xmmxud_memxud(zmm2, data_143f65be0)
zmm2[0].q = zx.o(0) u>> 0x40
float temp0_3[0x4] = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)

if (rax_3 != 0)
    rbp = rax_3

float var_98[0x4] = temp0_3
int128_t var_88 = zx.o(0)
uint32_t var_78[0x4] = temp0_2
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_98, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

float (* rax_5)[0x4] = *(arg2 + 0x38)
float (* rdi)[0x4] = &var_98
int32_t var_d4 = (zx.o(0)).d

if (rax_5 != 0)
    rdi = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_d4, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_d4)

char var_d8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_d8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_d8)

int64_t rax_8 = *(arg2 + 0x20)
float zmm3[0x4] = var_d4
int64_t rsi
rsi.b = rax_8 != 0
char rax_9 = var_d8
*(arg2 + 0x20) = rsi + rax_8
void var_68
int128_t* result = sub_1420d59d0(&var_68, rbp, rdi, zmm3, rax_9)
*arg3 = *result
arg3[1] = result[1]
arg3[2] = result[2]
__security_check_cookie(rax_1 ^ &var_108)
return result
