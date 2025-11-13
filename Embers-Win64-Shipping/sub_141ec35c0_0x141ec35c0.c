// 函数: sub_141ec35c0
// 地址: 0x141ec35c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm10
int128_t var_78 = zmm10
int128_t zmm14
int128_t var_b8 = zmm14
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
float var_ec[0x4]
int40_t var_d4_1
int64_t* var_c8_1
float zmm0[0x4]

if (arg2[2].d != 0xffffffff)
    int64_t* rcx = arg2[1]
    zmm0 = data_142e6da00
    int32_t var_f0 = 5
    var_ec = zmm0
    int64_t var_dc_1 = 0
    var_d4_1 = 0x3f800000
    var_c8_1 = nullptr
    (*(*rcx + 0x70))(rcx, &var_f0)

if (arg2[2].d == 0xffffffff || var_c8_1 == 0)
    int32_t rax_13 = arg4[1].d
    *arg1 = *arg4
    arg1[1].d = rax_13
else
    uint64_t rbx_1 = zx.q(arg2[2].d)
    int64_t rax_4 = (*(*var_c8_1 + 0x50))(var_c8_1)
    uint64_t rcx_3 = zx.q((rbx_1 * 3).d)
    uint64_t r9 = zx.q((rcx_3 + 1).d)
    uint64_t rax_7 = zx.q((rcx_3 + 2).d)
    void var_138
    uint32_t rbx_2
    uint32_t rsi_2
    uint32_t r12_1
    
    if ((*(*(*var_c8_1 + 0x58))(var_c8_1, &var_138) & 2) == 0)
        rbx_2 = *(rax_4 + (rcx_3 << 2))
        r12_1 = *(rax_4 + (r9 << 2))
        rsi_2 = *(rax_4 + (rax_7 << 2))
    else
        rbx_2 = zx.d(*(rax_4 + (rcx_3 << 1)))
        r12_1 = zx.d(*(rax_4 + (r9 << 1)))
        rsi_2 = zx.d(*(rax_4 + (rax_7 << 1)))
    
    int64_t rax_9 = (*(*var_c8_1 + 0x30))(var_c8_1)
    int64_t rcx_5 = sx.q(rbx_2) * 3
    zmm0 = *(rax_9 + (rcx_5 << 2))
    float zmm1[0x4] = *(rax_9 + (rcx_5 << 2) + 4)
    float zmm3[0x4] = *(rax_9 + (rcx_5 << 2) + 8)
    int64_t rdx_2 = sx.q(r12_1) * 3
    float zmm7[0x4] = *(rax_9 + (rdx_2 << 2) + 8)
    float zmm8[0x4] = *(rax_9 + (rdx_2 << 2))
    zmm7[0] = zmm7[0] - zmm3[0]
    float zmm4_1[0x4] = *(rax_9 + (rdx_2 << 2) + 4)
    zmm8[0] = zmm8[0] - zmm0[0]
    zmm4_1[0] = zmm4_1[0] - zmm1[0]
    int64_t rcx_6 = sx.q(rsi_2) * 3
    float zmm2 = *(rax_9 + (rcx_6 << 2) + 8) - zmm3[0]
    float zmm5_1 = *(rax_9 + (rcx_6 << 2) + 4) - zmm1[0]
    int128_t zmm6
    zmm6.d = (*(rax_9 + (rcx_6 << 2))).d f- zmm0[0]
    zmm4_1[0] = zmm4_1[0] * zmm2
    zmm7[0] = zmm7[0] * zmm5_1
    zmm7[0] = zmm7[0] f* zmm6.d
    zmm4_1[0] = zmm4_1[0] - zmm7[0]
    zmm4_1[0] = zmm4_1[0] f* zmm6.d
    zmm8[0] = zmm8[0] * zmm5_1
    zmm8[0] = zmm8[0] * zmm2
    zmm8[0] = zmm8[0] - zmm4_1[0]
    zmm7[0] = zmm7[0] - zmm8[0]
    zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm0 = zx.o(0)
    zmm2 = zmm7[0] * zmm7[0] + zmm4_1[0] + zmm8[0]
    
    if (zmm2 <= 0f)
        zmm1 = zx.o(0)
        zmm2 = (zx.o(0)).d
    else
        zmm1 = 0x3f800000
        zmm1[0] = 1f / _mm_sqrt_ss(0, zmm2)[0]
        zmm0 = zmm1
        zmm2 = zmm1[0] * zmm7[0]
        zmm0[0] = zmm0[0] * zmm8[0]
        zmm1[0] = zmm1[0] * zmm4_1[0]
    
    float var_130 = zmm1[0]
    float var_12c_1 = zmm2
    float var_128_1 = zmm0[0]
    float var_120
    int128_t zmm2_1
    zmm2_1, zmm14 = sub_141ece1a0(&var_120, &var_ec, &var_130)
    float var_110
    zmm10 = sub_141ecfe50(&var_110, arg2[1], *arg2, zmm2_1)
    int32_t var_104
    int64_t zmm6_1 = var_104
    int32_t var_10c
    int64_t zmm2_2 = var_10c
    int64_t zmm11_1 = var_110
    int32_t var_108
    int64_t zmm3_1 = var_108
    float var_118
    float zmm8_1 = var_118 * 2f
    float zmm9_1 = var_120 * 2f
    float var_11c
    float zmm5_2 = var_11c * 2f
    int64_t zmm0_1
    zmm0_1.d = zmm11_1.d f* zmm9_1
    int64_t zmm7_1
    zmm7_1.d = zmm6_1.d f* zmm6_1.d
    zmm7_1.d = zmm7_1.d f- 0.5f
    int64_t zmm12_1
    zmm12_1.d = zmm2_2.d f* zmm8_1
    int64_t zmm13_1
    zmm13_1.d = zmm3_1.d f* zmm9_1
    float zmm4_2 = zmm2_2.d * zmm5_2 f+ zmm0_1.d
    zmm0_1.d = zmm3_1.d f* zmm5_2
    zmm12_1.d = zmm12_1.d f- zmm0_1.d
    zmm0_1.d = zmm7_1.d f* zmm9_1
    zmm4_2 = zmm4_2 + zmm3_1.d * zmm8_1
    zmm12_1.d = zmm12_1.d f* zmm6_1.d
    float zmm1_1 = zmm11_1.d * zmm4_2
    zmm12_1.d = zmm12_1.d f+ zmm0_1.d
    zmm3_1.d = zmm3_1.d f* zmm4_2
    zmm0_1 = zmm11_1
    zmm11_1.d = zmm11_1.d f* zmm5_2
    zmm0_1.d = zmm0_1.d f* zmm8_1
    zmm12_1.d = zmm12_1.d f+ zmm1_1
    zmm1_1 = zmm2_2.d
    zmm2_2.d = zmm2_2.d f* zmm9_1
    zmm13_1.d = zmm13_1.d f- zmm0_1.d
    zmm0_1 = zmm7_1
    zmm11_1.d = zmm11_1.d f- zmm2_2.d
    zmm7_1.d = zmm7_1.d f* zmm8_1
    zmm13_1.d = zmm13_1.d f* zmm6_1.d
    zmm11_1.d = zmm11_1.d f* zmm6_1.d
    zmm0_1.d = zmm0_1.d f* zmm5_2
    zmm11_1.d = zmm11_1.d f+ zmm7_1.d
    var_130 = zmm12_1.d
    zmm13_1.d = zmm13_1.d f+ zmm0_1.d
    zmm11_1.d = zmm11_1.d f+ zmm3_1.d
    zmm13_1.d = zmm13_1.d f+ zmm1_1 * zmm4_2
    int32_t var_128_2 = zmm11_1.d
    int32_t var_12c_2 = zmm13_1.d
    
    if ((var_d4_1:4.b & 2) != 0)
        zmm2_2.d = zmm13_1.d f* arg3[1]
        zmm0_1.d = zmm12_1.d f* *arg3
        zmm2_2.d = zmm2_2.d f+ zmm0_1.d
        zmm2_2.d = zmm2_2.d f+ zmm11_1.d f* arg3[2]
        
        if (not(zmm2_2.d f<= zmm14.d))
            zmm10 = 0xbf800000
        
        zmm12_1.d = zmm12_1.d f* zmm10.d
        zmm13_1.d = zmm13_1.d f* zmm10.d
        zmm11_1.d = zmm11_1.d f* zmm10.d
        var_130 = zmm12_1.d
        int32_t var_12c_3 = zmm13_1.d
        var_128_2 = zmm11_1.d
    
    *arg1 = var_130.q
    arg1[1].d = var_128_2

__security_check_cookie(rax_1 ^ &var_158)
return arg1
