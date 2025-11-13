// 函数: sub_141f02bb0
// 地址: 0x141f02bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = data_143f3ada0
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x10) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x20) = zx.o(0)
*(arg1 + 0x30) = __andps_xmmxud_memxud(data_143f3ada0, data_143f3adb0)
char rax

if ((*(arg2 + 0x14c) & 0x20) == 0 || (*(arg2 + 0x14d) & 4) != 0)
    rax = 0
else
    rax = 1

arg1[8].b = rax
arg1[9].d = 0xbf800000
*(arg1 + 0x41) = *(arg2 + 0x14c) u>> 5 & 1
*(arg1 + 0x4c) = 0x3f800000
arg1[0xa] = 0x3f800000
arg1[0xb].d = *(arg2 + 0x1fc)
int64_t* rax_3 = sub_14210f630(1)
int64_t* r14 = *(arg2 + 0x1f0)
int64_t* rsi = rax_3

if (r14 != 0)
    int64_t rdx = *r14
    
    if (*((*(rdx + 0x268))(r14, rdx) + 0x150) == 1)
        rsi = r14

*arg1 = arg2
arg1[1] = rsi
float zmm0_1[0x4] = *(arg2 + 0x1e0)
int128_t zmm5 = *(arg2 + 0x1c0)
zmm0_1[0] = zmm0_1[0] f* *(arg2 + 0x214)
int128_t zmm4 = *(arg2 + 0x1d0)
float temp0_2[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
temp0_2[0] = temp0_2[0] f* *(arg2 + 0x218)
float temp0_3[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xaa)
temp0_3[0] = temp0_3[0] f* *(arg2 + 0x21c)
float temp0_4[0x4] = _mm_unpacklo_ps(temp0_2, 0)
*(arg1 + 0x10) = zmm5
*(arg1 + 0x30) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm0_1, temp0_3[0].q), temp0_4[0].q)
*(arg1 + 0x20) = zmm4
*(arg1 + 0x42) = sub_141ee7700(arg2)
*(arg1 + 0x44) = *(arg2 + 0x1f8)
void* rax_7 = *(arg2 + 0xa8)
int32_t zmm9 = *(arg2 + 0x20c)
int32_t zmm8 = *(arg2 + 0x208)
int128_t zmm10 = *(arg2 + 0x200)
float zmm6 = *(arg2 + 0x204)

if (rax_7 == 0)
    rax_7 = sub_141ee69e0(arg2)

float zmm2[0x4] = *(rax_7 + 0x520)
float zmm3[0x4] = 0x3f800000

if (not(zmm6 <= 0f))
    int32_t zmm1_1 = 1f / zmm6
    zmm2[0] = zmm2[0] f+ zmm10.d
    arg1[9].d = zmm1_1
    zmm2[0] = zmm2[0] + zmm6
    zmm2[0] = zmm2[0] f* zmm1_1
    arg1[0xa].d = zmm2[0]

if (not(zmm8 f<= 0f))
    zmm3[0] = 1f f/ zmm8
    zmm2[0] = zmm2[0] f+ zmm9
    *(arg1 + 0x4c) = zmm3[0]
    zmm2[0] = zmm2[0] * zmm3[0]
    *(arg1 + 0x54) = (zmm2 ^ data_142d3f780)[0]

void* rax_8 = *(arg2 + 0xa0)

if (rax_8 != 0)
    arg1[8].b &= not.b(*(rax_8 + 0x58) u>> 5) & 1

return arg1
