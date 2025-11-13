// 函数: sub_1424fa6e0
// 地址: 0x1424fa6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
uint32_t zmm2[0x4] = data_143f65c20
float zmm1[0x4] = zmm2
int128_t var_98 = zx.o(0)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm2, data_143f65be0)
zmm1[0].q = zx.o(0) u>> 0x40
float var_a8[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
uint32_t var_88[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_a8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)

zmm2 = data_143f65c20
float (* r14)[0x4] = &var_a8
float (* rax_3)[0x4] = *(arg2 + 0x38)
zmm1 = zmm2
uint32_t temp0_2[0x4] = __andps_xmmxud_memxud(zmm2, data_143f65be0)
zmm1[0].q = zx.o(0) u>> 0x40
float temp0_3[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)

if (rax_3 != 0)
    r14 = rax_3

float var_78[0x4] = temp0_3
int128_t var_68 = zx.o(0)
uint32_t var_58[0x4] = temp0_2
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_78, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int128_t* rax_5 = *(arg2 + 0x38)
int128_t* rdi = &var_78
int32_t var_b0 = 0

if (rax_5 != 0)
    rdi = rax_5

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_b0, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b0)

int32_t var_b4 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_b4, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b4)

int32_t var_b8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_b8, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

int64_t rax_9 = *(arg2 + 0x20)
int32_t zmm0_2 = var_b8
float zmm3[0x4] = var_b4
zmm2 = var_b0
int64_t rsi
rsi.b = rax_9 != 0
*(arg2 + 0x20) = rsi + rax_9
char result = sub_1420cdbd0(r14, rdi, zmm2[0], zmm3, zmm0_2)
*arg3 = result
__security_check_cookie(rax_1 ^ &var_e8)
return result
