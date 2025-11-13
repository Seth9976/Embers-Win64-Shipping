// 函数: sub_140f824f0
// 地址: 0x140f824f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
float zmm2[0x4] = arg5
float zmm1[0x4] = *(arg6 + 0xc4)
zmm1[0] = zmm1[0] f* *(arg10 + 4)
float zmm0[0x4] = *arg10
zmm0[0] = zmm0[0] f* *(arg6 + 0xc0)
int128_t zmm13 = *(arg7 + 8)
arg4.d = arg4.d f+ *(arg3 + 0x30)
float var_d4 = zmm1[0]
zmm1 = *(arg6 + 0xcc)
zmm1[0] = zmm1[0] f* *(arg10 + 0xc)
float var_d8 = zmm0[0]
zmm0 = *(arg6 + 0xc8)
zmm1[0] = zmm1[0] * 0.200000003f
zmm0[0] = zmm0[0] f* *(arg10 + 8)
float var_cc = zmm1[0]
zmm1 = 0x3f800000
float var_d0 = zmm0[0]
bool cond:0 = zmm2[0] <= 0f
zmm1[0] = 1f f/ zmm13.d
uint64_t result

if (cond:0)
    result = zx.q(arg9)
else
    int128_t* rax_2
    
    if (arg11 == 0 || *(arg1 + 8) == 0)
        rax_2.b = 0x20
    else
        rax_2 = nullptr
    
    float zmm10[0x4] = zmm1
    float temp0_1[0x4] = __maxss_xmmss_memss((*(arg3 + 0x40))[0], *(arg3 + 0x3c))
    float zmm4[0x4] = *(arg7 + 0x24)
    float zmm8[0x4] = zmm1
    zmm8[0] = zmm8[0] f* *(arg3 + 0x34)
    float zmm12[0x4] = zmm1
    char r8 = *(arg7 + 0x34) & 1
    zmm10[0] = zmm10[0] f* arg4.d
    int64_t var_bc_1 = 0
    arg4 = *(arg7 + 0x28)
    zmm12[0] = zmm12[0] * zmm2[0]
    char var_94
    char var_94_1 = (r8 * 2) | (var_94 & 0xfc)
    zmm2 = *(arg7 + 0x1c)
    zmm4[0] = zmm4[0] * zmm8[0]
    zmm2[0] = zmm2[0] * zmm10[0]
    temp0_1[0] = temp0_1[0] * zmm1[0]
    zmm1 = *(arg7 + 0x20)
    zmm4[0] = zmm4[0] + zmm2[0]
    int64_t zmm5
    zmm5.d = arg4.d f* zmm8[0]
    zmm1[0] = zmm1[0] * zmm10[0]
    zmm4[0] = zmm4[0] f+ *(arg7 + 0x2c)
    zmm5.d = zmm5.d f+ zmm1[0]
    float var_e4_1 = zmm1[0]
    float var_e0_1 = zmm4[0]
    int32_t var_dc_1 = arg4.d
    zmm5.d = zmm5.d f+ *(arg7 + 0x30)
    float var_ac_1[0x4] = zmm2[0].o
    int128_t zmm9
    zmm9.d = zmm13.d f* zmm10[0]
    float temp0_2[0x4] = _mm_unpacklo_ps(zmm4, zmm5)
    int128_t zmm7
    zmm7.d = zmm13.d f* zmm8[0]
    zmm9.d = zmm9.d f+ *(arg7 + 0xc)
    int64_t var_9c_1 = temp0_2.q
    zmm7.d = zmm7.d f+ *(arg7 + 0x10)
    int32_t var_c0_1 = zmm13.d
    int128_t* var_f0_1 = &var_d8
    int32_t var_c8 = zmm9.d
    float var_b4_1 = zmm12[0]
    int32_t var_c4_1 = zmm7.d
    float var_b0_1 = temp0_1[0]
    sub_140db3600(arg8, arg9 + 1, &var_c8, arg6 + 0xd0, rax_2.b, var_f0_1)
    result = zx.q(arg9 + 1)

__security_check_cookie(rax_1 ^ &var_118)
return result
