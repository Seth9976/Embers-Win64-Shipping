// 函数: sub_14258fb80
// 地址: 0x14258fb80
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

uint32_t zmm3[0x4] = data_143f6d500
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f6d510)
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
float (* rbp)[0x4] = &var_68
int32_t var_78 = 0
*(arg2 + 0x38) = 0

if (rax_4 != 0)
    rbp = rax_4

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_78, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int32_t* rax_6 = *(arg2 + 0x38)
int32_t* rsi = &var_78
int32_t var_74 = 0
*(arg2 + 0x38) = 0

if (rax_6 != 0)
    rsi = rax_6

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_74, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_74)

int32_t* rax_8 = *(arg2 + 0x38)
int32_t* rdx_8 = &var_74

if (rax_8 != 0)
    rdx_8 = rax_8

int64_t rax_9 = *(arg2 + 0x20)
int64_t rdx_9 = var_70
int64_t rdi
rdi.b = rax_9 != 0
*(arg2 + 0x20) = rdi + rax_9
int64_t result = sub_142310e40(arg1, rdx_9, rbp, rsi, rdx_8)
*arg3 = result
__security_check_cookie(rax_1 ^ &var_a8)
return result
