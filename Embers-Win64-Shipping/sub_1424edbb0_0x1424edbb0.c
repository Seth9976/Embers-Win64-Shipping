// 函数: sub_1424edbb0
// 地址: 0x1424edbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t var_70

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_70, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_70)

uint32_t zmm3[0x4] = data_143f65c20
int128_t var_38 = zx.o(0)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f65be0)
zmm3[0].q = zx.o(0) u>> 0x40
float var_48[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
uint32_t var_28[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

float (* rax_4)[0x4] = *(arg2 + 0x38)
float (* rbp)[0x4] = &var_48
float var_78 = 0f
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    rbp = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_78, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

float* rax_6 = *(arg2 + 0x38)
float* rsi = &var_78
float var_74 = 0f
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    rsi = rax_6

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_74, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_74)

float* rax_8 = *(arg2 + 0x38)
float* r9 = &var_74
int64_t var_58 = var_70

if (rax_8 != 0)
    r9 = rax_8

int64_t rax_9 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_9 != 0
*(arg2 + 0x20) = rdi + rax_9
int32_t var_68
int32_t var_50 = var_68
float* result = sub_1420c2020(&var_58, rbp, rsi, r9, var_78)
__security_check_cookie(rax_1 ^ &var_98)
return result
