// 函数: sub_140f10e40
// 地址: 0x140f10e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
float var_128
void* r8
uint128_t zmm0

if (*(arg1 + 0x358) == 0)
    r8 = *(arg1 + 0x318)
    uint32_t rcx_1 = zx.d(*(r8 + 0x30))
    void* rdx_2 = r8 + 0x20
    
    if (rcx_1 != 0)
        if (rcx_1 == 1)
            rdx_2 = *(rdx_2 + 0x18)
        else if (rcx_1 == 3)
            rdx_2 = &arg6[8]
        else
            rdx_2 = &arg6[4]
    
    uint128_t zmm3 = *rdx_2
    float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    float zmm2 = zmm3.d * *arg6
    temp0_2[0] = temp0_2[0] * arg6[1]
    zmm0.d = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d f* arg6[2]
    zmm3.d = _mm_shuffle_ps(zmm3, zmm3, 0xff).d f* arg6[3]
    var_128 = zmm2
    float var_124_1 = temp0_2[0]
    int32_t var_11c_1 = zmm3.d
    int32_t var_120_1 = zmm0.d
else
    int128_t* rax_2 = sub_140e11270(arg1 + 0x330, arg2)
    uint32_t rdx = zx.d(rax_2[1].b)
    
    if (rdx == 0)
        goto label_140f10efd
    
    if (rdx == 1)
        rax_2 = *(rax_2 + 0x18)
    label_140f10efd:
        zmm0 = *rax_2
        r8 = *(arg1 + 0x318)
        var_128.o = zmm0
    else if (rdx == 3)
        zmm0 = *(arg6 + 0x20)
        r8 = *(arg1 + 0x318)
        var_128.o = zmm0
    else
        zmm0 = *(arg6 + 0x10)
        r8 = *(arg1 + 0x318)
        var_128.o = zmm0

int128_t zmm15 = zx.o(0)
int128_t zmm12
zmm12.d = (*arg3).d f- *(r8 + 8)
int128_t zmm13
zmm13.d = (*(arg3 + 4)).d f- *(r8 + 0xc)
int32_t rax_5 = *(arg1 + 0x320)
zmm12.d = zmm12.d f* 0.5f
zmm13.d = zmm13.d f* 0.5f

if (rax_5 s> 0)
    zmm0 = _mm_cvtepi32_ps(zx.o(rax_5))
    zmm15.d = 6.28318548f f/ zmm0.d

uint128_t zmm0_1
int128_t zmm6
float zmm7
float zmm8
uint128_t zmm9
zmm0_1, zmm6, zmm7, zmm8, zmm9 = sub_140da8440(arg1 + 0x308, zmm0)
int32_t r14 = *(arg1 + 0x320)
uint128_t zmm14
zmm14.d = zmm0_1.d f* 2f
int32_t r15 = 0
zmm14.d = zmm14.d f* 3.14159274f
uint64_t result

if (r14 s<= 0)
    result = zx.q(arg5)
else
    float var_48_1 = zmm7
    float var_58_1 = zmm8
    uint128_t var_68_1 = zmm9
    
    do
        uint128_t zmm1
        zmm1.d = _mm_cvtepi32_ps(zx.o(r15)).d f* zmm15.d
        zmm1.d = zmm1.d f+ zmm14.d
        float zmm0_2[0x4]
        int32_t zmm12_1
        int32_t zmm13_1
        zmm0_2, zmm12_1, zmm13_1, zmm14, zmm15 = __libm_sse2_sincosf_(zmm1)
        float zmm10_1 = *(arg3 + 8)
        void* r9_1 = *(arg1 + 0x318)
        r15 += 1
        uint128_t zmm5_1
        zmm5_1.d = zmm0_2.d f* zmm12_1
        char rcx_4 = *(arg3 + 0x34) & 1
        int64_t var_fc_1 = 0
        float temp0_7[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
        temp0_7[0] = temp0_7[0] f* zmm13_1
        zmm5_1.d = zmm5_1.d f+ zmm12_1
        float temp0_8[0x4] = _mm_cvtepi32_ps(zx.o(r14))
        int32_t* var_130_1 = &var_128
        char var_138_1 = 0
        temp0_7[0] = temp0_7[0] f+ zmm13_1
        float zmm6_1[0x4] = zmm5_1
        zmm6_1[0] = zmm6_1[0] f* *(arg3 + 0x1c)
        float zmm8_1 = zmm10_1 f* zmm5_1.d
        zmm5_1.d = zmm5_1.d f* arg3[2].d
        zmm8_1 = zmm8_1 f+ *(arg3 + 0xc)
        uint128_t zmm9_1 = _mm_cvtepi32_ps(zx.o(r15))
        float zmm7_1 = zmm10_1 * temp0_7[0]
        zmm9_1.d = zmm9_1.d f/ temp0_8[0]
        float var_108 = zmm8_1
        temp0_7[0] = temp0_7[0] f* *(arg3 + 0x24)
        temp0_7[0] = temp0_7[0] f* *(arg3 + 0x28)
        float zmm1_1 = zmm9_1.d f* *(arg3 + 0x24)
        zmm6_1[0] = zmm6_1[0] + temp0_7[0]
        zmm7_1 = zmm7_1 f+ arg3[1].d
        temp0_7[0] = temp0_7[0] f+ zmm5_1.d
        zmm10_1 = zmm10_1 f* zmm9_1.d
        zmm0_2 = zmm9_1
        zmm5_1.d = zmm9_1.d f* *(arg3 + 0x1c)
        zmm0_2[0] = zmm0_2[0] f* arg3[2].d
        zmm6_1[0] = zmm6_1[0] f+ *(arg3 + 0x2c)
        zmm9_1.d = zmm9_1.d f* *(arg3 + 0x28)
        temp0_7[0] = temp0_7[0] f+ arg3[3].d
        _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
        zmm5_1.d = zmm0_2[0]
        float var_104_1 = zmm7_1
        _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc6)
        zmm5_1.d = zmm1_1
        float var_100_1 = zmm10_1
        float var_f4_1 = (*(r9_1 + 8))[0]
        zmm1_1 = *(r9_1 + 0xc)
        _mm_shuffle_ps(zmm5_1, zmm5_1, 0x27)
        zmm5_1.d = zmm9_1.d
        float temp0_13[0x4] = _mm_unpacklo_ps(zmm6_1, temp0_7[0].q)
        char var_d4 = (rcx_4 * 2) | (var_d4 & 0xfc)
        uint128_t var_ec_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x39)
        float var_f0_1 = zmm1_1
        int64_t var_dc_1 = temp0_13.q
        sub_140db3600(arg4, arg5, &var_108, r9_1, var_138_1, var_130_1)
        r14 = *(arg1 + 0x320)
    while (r15 s< r14)
    
    result = zx.q(arg5)
    int512_t zmm6_2
    zmm6_2.o = zmm6

__security_check_cookie(rax_1 ^ &var_158)
return result
