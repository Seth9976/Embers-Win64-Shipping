// 函数: sub_141ed1d20
// 地址: 0x141ed1d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = 0
int64_t r8 = sub_1422883b0(arg1, arg2, 0)
*arg1 = &data_143260178
sub_1422b4e50(&arg1[0x2a])
sub_142287b50(&arg1[0x3b])
sub_1422877b0(&arg1[0x43])
arg1[0x4c].d = 0xffffffff
*(arg1 + 0x264) = 4
arg1[0x4d] = 0
arg1[0x4b] = &data_142e3cc70
arg1[0x4e] = 0
arg1[0x4f] = 0
arg1[0x51].d = 0xffffffff
*(arg1 + 0x28c) = (arg1[0x21][1].d).b
arg1[0x62] = 0
arg1[0x63].d = 0
*(arg1 + 0x31c) = 8
arg1[0x64].d = 0xffff0101
*(arg1 + 0x324) = 0xff
arg1[0x69] = 0
arg1[0x6a].d = 0
*(arg1 + 0x354) = 2
arg1[0x71] = 0
arg1[0x72].d = 0
*(arg1 + 0x394) = 3
__builtin_memset(&arg1[0x73], 0, 0x18)
arg1[0x50] = &data_142e3cbf8
__builtin_memset(&arg1[0x76], 0, 0x30)
arg1[0x84].d = 0
*(arg1 + 0x424) = 4
__builtin_memset(&arg1[0x85], 0, 0x40)
arg1[0x8d] = -1
arg1[0x8e].d = 0xffffffff
__builtin_memset(arg1 + 0x474, 0, 0x14)
arg1[0x91].d = 0xffffffff
*(arg1 + 0x49c) = arg2[0x81].d
float zmm7[0x4] = *(arg2 + 0x40c)
arg1[0x94].d = zmm7[0]
char rax_2 = *(arg2 + 0x414)
zmm7[0] = zmm7[0] * 80f
*(arg1 + 0x4a4) = rax_2 & 1
int32_t rax_3 = arg2[0x82].d
*(arg1 + 0x39) &= 0xfe
arg1[0x95].d = rax_3
zmm7[0] = zmm7[0] * 0.200000003f
data_142d3f780
int64_t var_6c = 0
float zmm6 = (zmm7[0] - zmm7[0]) * 0.550000012f
int64_t var_60 = 0
int64_t var_58 = 0
float var_70 = zmm6
int32_t zmm6_1
float zmm7_1
int128_t zmm14
zmm6_1, zmm7_1 = sub_142290970(0x3eb2b8c2, 0x3eb2b8c2, r8, zmm7, zmm14, 0x20, &var_60, &arg1[0x4e])
int64_t* var_c0
var_c0.d = zmm6_1
int64_t var_98 = 0x3f800000
int32_t var_90 = 0
int32_t var_8c = 0
int64_t var_88 = 0x3f800000
int64_t var_80 = 0
int32_t var_78 = 0x3f800000
sub_142291690(&var_70, &var_80, &var_8c, &var_98, zmm7_1 * 0.0299999993f, var_c0.d, 0x10, &var_60, 
    &arg1[0x4e])
sub_1423691c0(&arg1[0x2a], &arg1[0x50], &var_60, 1, 0)
sub_141997e80(&arg1[0x4b])
int64_t rcx_7 = var_60

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return arg1
