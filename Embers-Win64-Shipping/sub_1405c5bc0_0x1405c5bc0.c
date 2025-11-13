// 函数: sub_1405c5bc0
// 地址: 0x1405c5bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18
sub_140b58260(&arg_18, u"PreUVMapTranslate", 1)
int64_t arg_8
sub_140b58260(&arg_8, u"PreUVMapMatrix", 1)
int32_t zmm1 = arg1[1]
int32_t zmm2 = arg1[4]
int32_t zmm3 = arg1[5]
int64_t rdx = arg_8
int512_t zmm6
zmm6.o = arg1[0xc]
arg1[0xd]
int32_t var_58 = *arg1
int32_t var_54 = zmm1
int32_t var_50 = zmm2
int32_t var_4c = zmm3
int32_t zmm6_1
int32_t zmm7_1
int512_t zmm8
zmm6_1, zmm7_1, zmm8 = sub_1421321b0(arg2, rdx, &var_58)
int64_t rdx_1 = arg_18
var_58 = zmm6_1
int32_t var_54_1 = zmm7_1
zmm8.o = zx.o(0)
var_50.q = 0
sub_1421321b0(arg2, rdx_1, &var_58)
sub_140b58260(&arg_18, u"PostUVMapTranslate", 1)
sub_140b58260(&arg_8, u"PostUVMapMatrix", 1)
int32_t zmm1_1 = arg1[0x11]
int32_t zmm2_1 = arg1[0x14]
int32_t zmm3_1 = arg1[0x15]
int64_t rdx_2 = arg_8
int512_t zmm6_2
zmm6_2.o = arg1[0x1c]
int512_t zmm7_2
zmm7_2.o = arg1[0x1d]
var_58 = arg1[0x10]
int32_t var_54_2 = zmm1_1
int32_t var_50_1 = zmm2_1
int32_t var_4c_1 = zmm3_1
int32_t zmm6_3
int32_t zmm7_3
zmm6_3, zmm7_3 = sub_1421321b0(arg2, rdx_2, &var_58)
int64_t rdx_3 = arg_18
var_58 = zmm6_3
int32_t var_54_3 = zmm7_3
var_50_1.q = 0
sub_1421321b0(arg2, rdx_3, &var_58)
int32_t zmm1_2 = arg1[0x21]
var_58 = arg1[0x20]
int32_t var_54_4 = zmm1_2
var_50_1.q = 0
sub_1421321b0(arg2, *sub_140b58260(&arg_8, u"UVMapTextureDecoding", 1), &var_58)
int128_t zmm8_1 =
    sub_142131d00(arg2, *sub_140b58260(&arg_8, UVDisplacementMapTexture", 1), *(arg1 + 0x88))

if ((arg1[0x24].b & 1) != 0)
    zmm8_1 = 0x3f800000

int64_t* rax_2
int512_t zmm2_2
rax_2, zmm2_2 = sub_140b58260(&arg_8, u"bUseBlueAndAlphaChannels", 1)
zmm2_2.o = zmm8_1
return sub_142131b70(arg2, *rax_2)
