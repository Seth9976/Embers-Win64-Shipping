// 函数: sub_14251ba80
// 地址: 0x14251ba80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t var_b0 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_b0, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b0)

int32_t var_90 = 0x42c80000
int64_t var_a0 = 0
int64_t var_98 = 0
int64_t var_8c = 0
char var_84 = 1
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_a0, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a0)

uint32_t zmm3[0x4] = data_143f67580
*(arg2 + 0x38)
float zmm1[0x4] = zmm3
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f67590)
zmm1[0].q = zx.o(0) u>> 0x40
int128_t var_48 = zx.o(0)
float var_58[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
uint32_t var_38[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_58, r8_5, temp0)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58, temp0)

*(arg2 + 0x38)
int64_t var_a8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_a8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_a8)
int128_t var_80

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_80, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_80)

int32_t var_b8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_11 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_11[4]
    sub_140d30490(arg2, &var_b8, r8_11)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_b8)

int64_t rax_10 = *(arg2 + 0x20)
int128_t zmm0_1 = var_80
int64_t rdi
rdi.b = rax_10 != 0
float var_c0 = var_b8[0]
int128_t var_68
int128_t* result = &var_68
*(arg2 + 0x20) = rdi + rax_10
int128_t* var_c8 = &var_68
var_68 = zmm0_1
int64_t rcx_7 = var_a0

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

__security_check_cookie(rax_1 ^ &var_e8)
return result
