// 函数: sub_1424e8650
// 地址: 0x1424e8650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
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
float (* rsi)[0x4] = &var_c8
float (* rax_3)[0x4] = *(arg2 + 0x38)
uint32_t temp0_2[0x4] = __andps_xmmxud_memxud(zmm2, data_143f65be0)
zmm2[0].q = zx.o(0) u>> 0x40
float temp0_3[0x4] = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)

if (rax_3 != 0)
    rsi = rax_3

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
float (* rcx_2)[0x4] = &var_98

if (rax_5 != 0)
    rcx_2 = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
float var_68[0x4]
float (* result)[0x4] = sub_140ad7d70(rcx_2, &var_68, rsi)
*arg3 = var_68
float var_48[0x4]
arg3[2] = var_48
int128_t var_58
arg3[1] = var_58
__security_check_cookie(rax_1 ^ &var_e8)
return result
