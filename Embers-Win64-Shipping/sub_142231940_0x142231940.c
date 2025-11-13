// 函数: sub_142231940
// 地址: 0x142231940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm3[0x4] = data_143f51330
float zmm1[0x4] = zmm3
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f51340)
zmm1[0].q = zx.o(0) u>> 0x40
*arg2 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
arg2[1] = zx.o(0)
arg2[2] = temp0
int32_t var_7c = 0
int32_t var_6c = 0
float var_88
uint32_t zmm0[0x4]
int32_t zmm2
float zmm4
uint32_t zmm5[0x4]
int128_t zmm6
int128_t zmm7
int128_t zmm8
int128_t zmm9

if (arg3 != 0)
    zmm1 = *(arg1 + 0x60)
    zmm6 = *(arg1 + 0x64)
    zmm2 = zmm1[0]
    zmm5 = *(arg1 + 0x68)
    zmm9 = *(arg1 + 0x74)
    zmm7 = *(arg1 + 0x70)
    zmm3 = *(arg1 + 0x6c)
    zmm5[0] = zmm5[0] f* zmm7.d
    zmm8.d = zmm6.d f* zmm9.d
    zmm4 = zmm3[0] f* zmm5[0]
    zmm8.d = zmm8.d f- zmm5[0]
    zmm0 = zmm1
    var_88 = zmm1[0]
    zmm1 = *(arg1 + 0x58)
    zmm0[0] = zmm0[0] f* zmm9.d
    zmm4 = zmm4 f- zmm0[0]
    zmm3[0] = zmm3[0] f* zmm6.d
    zmm2 = zmm2 f* zmm7.d f- zmm3[0]
    uint32_t var_58_1 = (*(arg1 + 0x54))[0]
    zmm0 = *(arg1 + 0x5c)
else
    zmm1 = *(arg1 + 0x3c)
    zmm6 = *(arg1 + 0x40)
    zmm2 = zmm1[0]
    zmm5 = *(arg1 + 0x44)
    zmm9 = *(arg1 + 0x50)
    zmm7 = *(arg1 + 0x4c)
    zmm3 = *(arg1 + 0x48)
    zmm5[0] = zmm5[0] f* zmm7.d
    zmm8.d = zmm6.d f* zmm9.d
    zmm4 = zmm3[0] f* zmm5[0]
    zmm8.d = zmm8.d f- zmm5[0]
    zmm0 = zmm1
    var_88 = zmm1[0]
    zmm1 = *(arg1 + 0x34)
    zmm0[0] = zmm0[0] f* zmm9.d
    zmm4 = zmm4 f- zmm0[0]
    zmm3[0] = zmm3[0] f* zmm6.d
    zmm2 = zmm2 f* zmm7.d f- zmm3[0]
    uint32_t var_58 = (*(arg1 + 0x30))[0]
    zmm0 = *(arg1 + 0x38)

float var_54 = zmm1[0]
int32_t var_4c = 0x3f800000
int32_t var_84 = zmm6.d
uint32_t var_80 = zmm5[0]
uint32_t var_78 = zmm3[0]
int32_t var_74 = zmm7.d
int32_t var_70 = zmm9.d
int32_t var_68 = zmm8.d
float var_64 = zmm4
int32_t var_60 = zmm2
uint32_t var_50 = zmm0[0]
int32_t var_5c = 0
uint32_t var_b8[0x4]
sub_1407c8dd0(&var_b8, &var_88)
*arg2 = var_b8
uint32_t var_98[0x4]
arg2[2] = var_98
int128_t var_a8
arg2[1] = var_a8
return arg2
