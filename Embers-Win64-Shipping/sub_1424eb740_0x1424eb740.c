// 函数: sub_1424eb740
// 地址: 0x1424eb740
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
float (* rsi)[0x4] = &var_98
float (* rax_3)[0x4] = *(arg2 + 0x38)
zmm1 = zmm2
uint32_t temp0_2[0x4] = __andps_xmmxud_memxud(zmm2, data_143f65be0)
zmm1[0].q = zx.o(0) u>> 0x40
float temp0_3[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)

if (rax_3 != 0)
    rsi = rax_3

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

int128_t* rax_5 = *(arg2 + 0x38)
int128_t* rdx_4 = &var_68
int32_t var_a8 = 0x38d1b717

if (rax_5 != 0)
    rdx_4 = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
char result = sub_1420cdbd0(rsi, rdx_4, 0x38d1b717[0], 0x38d1b717, var_a8)
*arg3 = result
__security_check_cookie(rax_1 ^ &var_c8)
return result
