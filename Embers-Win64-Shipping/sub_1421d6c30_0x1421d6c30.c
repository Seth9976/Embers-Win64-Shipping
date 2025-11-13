// 函数: sub_1421d6c30
// 地址: 0x1421d6c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = arg2[0x81]
int64_t arg_8
int64_t r8_1

if (r8 == 0)
    arg_8 = 0
    r8_1 = 0
else
    r8_1 = *(r8 + 0x18)

sub_1422883b0(arg1, arg2, r8_1)
*arg1 = &data_1432f7210
arg1[0x2a] = 0
arg1[0x2b] = 0
arg1[0x2c] = arg2[0x14]
arg1[0x2d].b ^= (*(arg2 + 0x20b) u>> 3 ^ arg1[0x2d].b) & 1
arg1[0x2d].b = ((((sub_14219f3e0(arg2) & 0xf9) | arg4 << 2) * 2) | (arg1[0x2d].b & 0xf1)) & 0xef
*(arg1 + 0x169) = arg1[0x21][1].b
int64_t rax_4 = sx.q(*(arg2 + 0x4b4))
int64_t rax_6

if (rax_4.d s>= 0 && rax_4.d s< arg2[0x9b].d)
    rax_6 = *(arg2[0x9a] + (rax_4 << 3))
else if (rax_4.d != 0xffffffff || arg2[0x9b].d s< 1)
    rax_6 = 0
else
    rax_6 = *arg2[0x9a]

arg1[0x2e] = rax_6
arg1[0x2f] = arg3
arg1[0x30] = 0
int64_t* rcx_4 = *(data_143f5b298 + 0x370)
int64_t r14

if (rcx_4 == 0)
    r14 = 0
else
    r14 = (*(*rcx_4 + 0x280))(rcx_4)

void arg_20
int32_t* rax_11
int128_t zmm6
rax_11, zmm6 = sub_140b5e500(&arg_20, 0x3e)
arg_8:4.d = 0
arg_8.d = *rax_11
int128_t var_98 = data_142d8c9b0
int128_t var_88
float* rax_12 = sub_1422a16e0(&var_88, &var_98, 0, 0, 1)
sub_142118c70(&arg1[0x31])
arg1[0x31] = &data_142e0eff8
arg1[0x63] = r14
float zmm0_1[0x4] = *rax_12
arg1[0x66] = arg_8
*(arg1 + 0x320) = zmm0_1
*(arg1 + 0x33c) = 0
arg1[0x68].d = *(arg2 + 0x4b4)
*(arg1 + 0x344) = 0xffffffff
arg1[0x6a].d = 0xffffffff
*(arg1 + 0x354) = 4
arg1[0x69] = &data_142d99570
arg1[0x6b].d = 2
arg1[0x6c] = 0
arg1[0x6d] = 0
arg1[0x72] = 0
arg1[0x73].d = 0
*(arg1 + 0x39c) = 4
arg1[0x7a] = 0
arg1[0x7b].d = 0
*(arg1 + 0x3dc) = 1
arg1[0x7c] = 0
arg1[0x7d] = 0
arg1[0x67].d = zx.d(*(arg2 + 0x43d))
void* rcx_9 = arg2[0x81]
uint32_t rax_15

if (rcx_9 != 0)
    rax_15 = sub_14218c0b0(rcx_9, *(arg2 + 0x4b4))

if (rcx_9 == 0 || rax_15.b == 0)
    rax_15.b = 0
else
    rax_15.b = 4

*(arg1 + 0x3b) &= 0xfb
*(arg1 + 0x3b) |= rax_15.b
char rcx_10 = arg1[0x2d].b

if ((rcx_10 & 8) != 0)
    void* rax_16 = arg2[0x81]
    
    if (rax_16 != 0 && *(rax_16 + 0xb5) == 2)
        int32_t zmm5_1 = *(rax_16 + 0xd0)
        int32_t zmm4_1 = *(rax_16 + 0xd4)
        int128_t var_38_1 = zmm6
        zmm6 = *(rax_16 + 0xcc)
        int128_t zmm7
        zmm7.d = (*(rax_16 + 0xe0)).d f- zmm4_1
        float zmm8[0x4] = *(rax_16 + 0xd8)
        zmm8[0] = zmm8[0] f- zmm6.d
        int128_t zmm9
        zmm9.d = (*(rax_16 + 0xdc)).d f- zmm5_1
        arg1[0x2d].b = rcx_10 | 0x10
        int128_t zmm1_1 = zmm7
        zmm7.d = zmm7.d f* zmm7.d
        zmm1_1.d = zmm1_1.d f* 0.5f
        zmm8[0] = zmm8[0] * 0.5f
        int64_t zmm2_1
        zmm2_1.d = zmm9.q.d f* 0.5f
        zmm9.d = zmm9.d f* zmm9.d
        var_98:8.d = zmm1_1.d
        zmm8[0] = zmm8[0] f+ zmm6.d
        int32_t rax_17 = var_98:8.d
        zmm1_1.d = zmm1_1.d f+ zmm4_1
        float temp0_1[0x4] = _mm_unpacklo_ps(zmm8, zmm2_1)
        zmm2_1.d = zmm2_1.d f+ zmm5_1
        int64_t var_7c_1 = temp0_1.q
        zmm8[0] = zmm8[0] * zmm8[0]
        int32_t var_74_1 = rax_17
        var_98:8.d = zmm1_1.d
        zmm9.d = zmm9.d f+ zmm8[0]
        int32_t var_80_1 = var_98:8.d
        zmm9.d = zmm9.d f+ zmm7.d
        zmm1_1.q = _mm_unpacklo_ps(zmm8, zmm2_1)[0].q
        *(arg1 + 0x3a4) = zmm1_1
        zmm9.d = zmm9.d f* 0.25f
        float var_70_1 = _mm_sqrt_ss(0, zmm9.d)[0]
        *(arg1 + 0x3b4) = var_7c_1
        *(arg1 + 0x3bc) = var_70_1

return arg1
