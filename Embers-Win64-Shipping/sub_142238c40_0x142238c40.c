// 函数: sub_142238c40
// 地址: 0x142238c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143ef8520
int128_t* rax_1 = (*(*rcx + 0x20))(rcx)
int32_t i_1 = 0
__builtin_memset(&arg1[0x1b], 0, 0x18)
float zmm0[0x4] = *rax_1
zmm0[0] = zmm0[0] * 0.00999999978f
int64_t* arg_10 = nullptr
int64_t* arg_18 = nullptr
arg1[0x1f] = zmm0[0]
arg1[0x21] = 0
__builtin_memset(&arg1[0x23], 0, 0x18)
arg1[0x22] = 0x3f000000
__builtin_memset(&arg1[0x2a], 0, 0x1c)
arg1[0x29] = 0x3f000000
*(arg1 + 0xc4) = 0x7f7fffff
*(arg1 + 0xcc) = 0
*(arg1 + 0xd4) = 0x7f7fffff
*(arg1 + 0xdc) = 0
*(arg1 + 0xe4) = 0x7f7fffff
*(arg1 + 0xec) = 0
*(arg1 + 0xf4) = 0x7f7fffff
*(arg1 + 0xfc) = 0
*(arg1 + 0x104) = 0x7f7fffff
*(arg1 + 0x10c) = 0
*(arg1 + 0x114) = 0x7f7fffff
float zmm1[0x4] = data_143f515b0
*(arg1 + 0x190) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x180) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x1a0) = __andps_xmmxud_memxud(data_143f515b0, data_143f515c0)
float zmm2[0x4] = data_143f515b0
zmm2[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x1b0) = _mm_shuffle_ps(zx.o(0), zmm2, 0xc4)
*(arg1 + 0x1c0) = zx.o(0)
*(arg1 + 0x1d0) = __andps_xmmxud_memxud(data_143f515b0, data_143f515c0)
(*(*arg2 + 0x30))(arg2, &arg_10, &arg_18)
int32_t var_e0[0x7]
int32_t* rax_4 = (*(*arg2 + 0x40))(arg2, &var_e0, 0)
int32_t var_c4[0x7]
void arg_8
int32_t* rax_5 = sub_14223cc30(&arg_8, &var_c4, arg_10)
int128_t zmm12 = *rax_5 ^ 0x80000000
float zmm9 = rax_5[3]
int128_t zmm10 = rax_5[1] ^ 0x80000000
float zmm5 = rax_4[4] f- rax_5[4]
float zmm4 = rax_4[5] f- rax_5[5]
int128_t zmm11 = rax_5[2] ^ 0x80000000
float zmm8 = rax_4[6] f- rax_5[6]
int32_t var_108 = zmm12.d
zmm5 = zmm5 + zmm5
zmm4 = zmm4 + zmm4
int32_t var_104 = zmm10.d
zmm8 = zmm8 + zmm8
int32_t var_100 = zmm11.d
float var_fc = zmm9
float zmm2_1 = zmm10.d * zmm4 + zmm12.d * zmm5 + zmm11.d * zmm8
zmm12.d = zmm12.d f* zmm4
zmm10.d = zmm10.d f* zmm5
zmm12.d = zmm12.d f- zmm10.d
zmm12.d = zmm12.d f* zmm9
zmm12.d = zmm12.d f+ (zmm9 * zmm9 - 0.5f) * zmm8
zmm12.d = zmm12.d f+ zmm2_1 f* zmm11.d
float var_f8[0x6]
float* rax_6
int32_t zmm6_1
int32_t zmm7_1
rax_6, zmm6_1, zmm7_1 = sub_1417c7990(&var_108, &var_f8, rax_4)
int32_t zmm1_2 = rax_6[2]
int32_t zmm2_2 = rax_6[3]
float rax_7 = *rax_6
arg1[5] = rax_6[1]
arg1[6] = zmm1_2
arg1[7] = zmm2_2
arg1[4] = rax_7
arg1[8] = zmm7_1
arg1[9] = zmm6_1
arg1[0xa] = zmm12.d
int32_t* rax_9 = (*(*arg2 + 0x40))(arg2, &var_c4, 1)
int32_t* rax_10
int128_t zmm14
rax_10, zmm14 = sub_14223cc30(&arg_8, &var_e0, arg_18)
float zmm9_1 = rax_10[3]
int128_t zmm12_1 = *rax_10 ^ zmm14
int128_t zmm11_1 = rax_10[2]
float zmm5_1 = rax_9[4] f- rax_10[4]
float zmm4_1 = rax_9[5] f- rax_10[5]
float zmm8_1 = rax_9[6] f- rax_10[6]
int128_t zmm10_1 = rax_10[1] ^ zmm14
var_108 = zmm12_1.d
zmm11_1 ^= zmm14
zmm5_1 = zmm5_1 + zmm5_1
int32_t var_104_1 = zmm10_1.d
zmm4_1 = zmm4_1 + zmm4_1
int32_t var_100_1 = zmm11_1.d
zmm8_1 = zmm8_1 + zmm8_1
float var_fc_1 = zmm9_1
zmm11_1.d = zmm11_1.d f* (zmm10_1.d * zmm4_1 + zmm12_1.d * zmm5_1 + zmm11_1.d * zmm8_1)
zmm12_1.d = zmm12_1.d f* zmm4_1
zmm10_1.d = zmm10_1.d f* zmm5_1
zmm12_1.d = zmm12_1.d f- zmm10_1.d
zmm12_1.d = zmm12_1.d f* zmm9_1
zmm12_1.d = zmm12_1.d f+ (zmm9_1 * zmm9_1 - 0.5f) * zmm8_1
zmm12_1.d = zmm12_1.d f+ zmm11_1.d
float* rax_11
int32_t zmm6_3
int32_t zmm7_3
rax_11, zmm6_3, zmm7_3 = sub_1417c7990(&var_108, &var_f8, rax_9)
*(arg1 + 0x2c) = *rax_11
arg1[0xf] = zmm7_3
arg1[0x10] = zmm6_3
arg1[0x11] = zmm12_1.d
int128_t* rax_13 = (*(*arg2 + 0x118))(arg2, &var_f8)
*(arg1 + 0x6c) = *rax_13
*(arg1 + 0x7c) = rax_13[1].q
int128_t* rax_15 = (*(*arg2 + 0x138))(arg2, &var_c4)
*(arg1 + 0xa0) = *rax_15
*(arg1 + 0xb0) = rax_15[1].q
arg1[0x2e] = *(rax_15 + 0x18)
int128_t* rax_18 = (*(*arg2 + 0x128))(arg2, &var_c4)
int32_t i = 0
void* rbx_2 = &arg1[0x32]
*(arg1 + 0x84) = *rax_18
*(arg1 + 0x94) = rax_18[1].q
arg1[0x27] = *(rax_18 + 0x18)
arg1[0x5d] = 0x3a83126f
uint128_t zmm0_4

do
    int64_t* rax_21 = (*(*arg2 + 0x148))(arg2, &var_f8, zx.q(i))
    i += 1
    rbx_2 += 0x10
    zmm0_4 = zx.o(*rax_21)
    *(rbx_2 - 0x1c) = zmm0_4.q
    *(rbx_2 - 0x14) = rax_21[1].d
    *(rbx_2 - 0x10) = *(rax_21 + 0xc)
while (i u< 6)

(*(*arg2 + 0x168))(arg2, &arg1[0x4e], &arg1[0x51])
int32_t* rax_25 = (*(*arg2 + 0x158))(arg2, &var_c4)
void* rbx_3 = &arg1[0x15]
arg1[0x47] = *rax_25
arg1[0x48] = rax_25[1]
arg1[0x49] = rax_25[2]
arg1[0x4a] = rax_25[3]
arg1[0x4b] = rax_25[4]
arg1[0x4c] = rax_25[5]
arg1[0x4d] = rax_25[6]

do
    int32_t rax_28 = (*(*arg2 + 0xf0))(arg2, zx.q(i_1))
    i_1 += 1
    *rbx_3 = rax_28
    rbx_3 += 4
while (i_1 u< 6)

(*(*arg2 + 0x90))(arg2)
*arg1 = zmm0_4.d
(*(*arg2 + 0xb0))(arg2)
arg1[2] = zmm0_4.d
(*(*arg2 + 0xa0))(arg2)
arg1[1] = zmm0_4.d
(*(*arg2 + 0xc0))(arg2)
arg1[3] = zmm0_4.d
return arg1
