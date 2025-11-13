// 函数: sub_142180790
// 地址: 0x142180790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
int64_t rbx = *sub_140b58260(&arg_8, u"Sprite", 1)
sub_140d19090(arg2, rbx)
sub_140d17260(&arg2[4], rbx, nullptr)
void arg_10
int64_t rbx_1 = *sub_140b58260(&arg_10, u"ArrowComponent0", 1)
sub_140d19090(arg2, rbx_1)
sub_140d17260(&arg2[4], rbx_1, nullptr)
sub_141db5b80(arg1)
*arg1 = &data_1432e47b8
__builtin_memset(&arg1[0x46], 0, 0x40)
void arg_18
uint64_t rbx_2 = *sub_140b58260(&arg_18, u"ParticleSystemComponent0", 1)
int64_t* rax_3 = sub_14255cbc0()
void* rax_4 = sub_140cd9110(arg1, rbx_2, rax_3, rax_3, 1, 0)
arg1[0x44] = rax_4
int32_t var_38 = 0
int32_t var_30 = 0
*(rax_4 + 0x4b8) = 0x3f800000
arg1[0x26] = arg1[0x44]
*arg1 = &data_1432e8e80
float zmm1[0x4] = data_143f4d4a0
*(arg1 + 0x2a0) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x290) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x2b0) = __andps_xmmxud_memxud(data_143f4d4a0, data_143f4d4b0)
arg1[0x59] = 0
arg1[0x5a] = 0
arg1[0x45].d |= 1
*(arg1 + 0x94) = 0x41200000
arg1[0x58].d = 0x42a00000
int32_t var_34 = 0x43340000
float var_28[0x4]
sub_140ade170(&var_38, &var_28)
int64_t zmm0_1 = data_14399f670
float zmm2[0x4] = data_14399f66c
float zmm3[0x4] = data_14399f668
int128_t zmm4 = data_1432e9b10
*(arg1 + 0x290) = var_28
*(arg1 + 0x2a0) = zmm4
*(arg1 + 0x2b0) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0_1), _mm_unpacklo_ps(zmm2, 0)[0].q)
void* rax_6 = arg1[0x44]
*(rax_6 + 0x20a) |= 0x20
arg1[0x44][0x97].d = 0
*(arg1 + 0x2c4) &= 0xfd
arg1[0x5b].d = 0x7f7fffff
return arg1
