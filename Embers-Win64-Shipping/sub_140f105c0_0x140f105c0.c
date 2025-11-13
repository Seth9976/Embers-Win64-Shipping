// 函数: sub_140f105c0
// 地址: 0x140f105c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void* var_118
sub_140e149c0(*(*(data_143e29f28 + 0x20) + 8), &var_118)
int512_t zmm2
zmm2.o = *(arg6 + 8)
int16_t rax_3
int512_t zmm2_1
rax_3, zmm2_1 = sub_140da88e0(var_118, &arg1[0x12])
zmm2_1.o = *(arg6 + 8)
int16_t rax_4
float zmm6_1
uint128_t zmm8
uint128_t zmm9
rax_4, zmm6_1, zmm8, zmm9 = sub_140da2e60(var_118, &arg1[0x12])
int64_t rdx_3 = *arg1
int16_t var_158
int16_t var_154
(*(rdx_3 + 0x10))(arg1, rdx_3, &var_158, &var_154)
uint128_t zmm14
zmm14.d = arg4.d f+ *(arg3 + 0x30)
int128_t zmm13 = *(arg6 + 8)
uint128_t zmm1 = zx.o(sx.d(var_158))
int16_t rax_6 = var_154
uint128_t zmm11
zmm11.d = _mm_cvtepi32_ps(zx.o(rax_3)).d f+ *(arg3 + 0x34)
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(sx.d(rax_4)))

if (1 s>= rax_6)
    rax_6 = 1

zmm11.d = zmm11.d f+ zmm0.d
zmm1.d = _mm_cvtepi32_ps(zmm1).d f* 0.5f
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(sx.d(rax_6)))
zmm11.d = zmm11.d f- zmm1.d
int32_t var_150 = zmm7.d
int128_t zmm15
zmm15.d = 1f f/ zmm13.d
int32_t rdi_2

if (zmm6_1 == 0f)
    rdi_2 = arg8
else
    void* rdx_4 = &arg1[0x1c]
    uint32_t rcx_5 = zx.d(*(rdx_4 + 0x10))
    uint128_t var_58_1 = zmm8
    uint128_t var_68_1 = zmm9
    
    if (rcx_5 != 0)
        if (rcx_5 == 1)
            rdx_4 = *(rdx_4 + 0x18)
        else if (rcx_5 == 3)
            rdx_4 = &arg9[8]
        else
            rdx_4 = &arg9[4]
    
    uint128_t zmm2_2 = arg1[0x21].d
    uint128_t var_138_1 = *rdx_4
    
    if (not(0f f>= *(arg1 + 0x11c)))
        zmm1 = *(arg1 + 0x10c)
        zmm0.d = zmm2_2.d f* zmm2_2.d
        zmm1.d = zmm1.d f* zmm1.d
        zmm0.d = zmm0.d f+ zmm1.d
    
    int32_t rax_7
    
    if (0f f>= *(arg1 + 0x11c) || zmm0.d f<= 0f)
        rax_7.b = 0
    else
        rax_7 = 1
    
    zmm0 = *(arg1 + 0x10c)
    uint128_t zmm5_1
    
    if (zmm0.d f<= 0f)
        zmm5_1 = zx.o(0)
    else
        zmm5_1.d = zmm0.d f* zmm13.d
    
    float zmm4_1
    
    if (zmm2_2.d f<= 0f)
        zmm4_1 = (zx.o(0)).d
    else
        zmm4_1 = zmm2_2.d f* zmm13.d
    
    uint128_t zmm10 = zmm11
    
    if (not(zmm0.d f>= 0f))
        zmm0.d = zmm0.d f* zmm13.d
        zmm10.d = zmm10.d f- zmm0.d
    
    zmm9 = zmm14
    
    if (not(zmm2_2.d f>= 0f))
        zmm2_2.d = zmm2_2.d f* zmm13.d
        zmm9.d = zmm9.d f- zmm2_2.d
    
    int32_t rdi_1 = arg8
    int128_t zmm12
    zmm12.d = zmm15.d f* zmm6_1
    int32_t var_14c
    int32_t var_108
    char var_d4
    char r15
    int32_t zmm3
    
    if (rax_7.b == 0)
        r15 = arg10 ^ 1
    else
        zmm11.d = zmm11.d f+ zmm5_1.d
        zmm0.d = arg1[0x22].d.d f* *arg9
        zmm14.d = zmm14.d f+ zmm4_1
        zmm1.d = (*(arg1 + 0x114)).d f* arg9[1]
        char rcx_7 = *(arg6 + 0x34) & 1
        zmm4_1 = *(arg6 + 0x24)
        zmm8 = zmm7
        zmm2_2 = *(arg6 + 0x1c)
        zmm3 = *(arg6 + 0x28)
        var_14c = zmm0.d
        r15 = arg10 ^ 1
        zmm0.d = arg1[0x23].d.d f* arg9[2]
        rdi_1 += 1
        var_d4 = (rcx_7 * 2) | (var_d4 & 0xfc)
        zmm14.d = zmm14.d f* zmm15.d
        int128_t* var_160_1 = &var_14c
        int32_t var_144_1 = zmm0.d
        int32_t var_148_1 = zmm1.d
        zmm1.d = (*(arg1 + 0x11c)).d f* arg9[3]
        zmm7 = zmm14
        zmm5_1.d = zmm14.d f* zmm2_2.d
        int64_t var_fc_1 = 0
        zmm11.d = zmm11.d f* zmm15.d
        int32_t var_140_1 = zmm1.d
        zmm1 = *(arg6 + 0x20)
        zmm14.d = zmm14.d f* zmm1.d
        zmm0.d = zmm11.d f* zmm4_1
        zmm6_1 = zmm11.d
        zmm11.d = zmm11.d f* zmm3
        zmm5_1.d = zmm5_1.d f+ zmm0.d
        int32_t var_124_1 = zmm1.d
        float var_120_1 = zmm4_1
        zmm14.d = zmm14.d f+ zmm11.d
        int32_t var_11c_1 = zmm3
        zmm5_1.d = zmm5_1.d f+ *(arg6 + 0x2c)
        zmm14.d = zmm14.d f+ *(arg6 + 0x30)
        uint128_t var_ec_1 = zmm2_2.d.o
        zmm7.d = zmm7.d f* zmm13.d
        zmm7.d = zmm7.d f+ *(arg6 + 0xc)
        zmm0 = _mm_unpacklo_ps(zmm5_1, zmm14.q)
        zmm6_1 = zmm6_1 f* zmm13.d f+ *(arg6 + 0x10)
        zmm8.d = zmm8.d f* zmm15.d
        uint64_t var_dc_1 = zmm0.q
        var_108 = zmm7.d
        float var_104_1 = zmm6_1
        int32_t var_100_1 = zmm13.d
        int32_t var_f4_1 = zmm12.d
        int32_t var_f0_1 = zmm8.d
        sub_140db3600(arg7, rdi_1, &var_108, &arg1[1], r15 << 5, var_160_1)
        zmm7 = var_150
    
    zmm0.d = var_138_1.d.d f* *arg9
    rdi_2 = rdi_1 + 1
    zmm1.d = var_138_1:4.d.d f* arg9[1]
    zmm8 = *(arg6 + 8)
    char rdx_6 = *(arg6 + 0x34) & 1
    zmm4_1 = *(arg6 + 0x24)
    zmm2_2 = *(arg6 + 0x1c)
    zmm3 = *(arg6 + 0x28)
    var_14c = zmm0.d
    zmm0.d = var_138_1:8.d.d f* arg9[2]
    char var_d4_1 = (rdx_6 * 2) | (var_d4 & 0xfc)
    int32_t var_148_2 = zmm1.d
    zmm1.d = var_138_1:0xc.d.d f* arg9[3]
    int32_t var_144_2 = zmm0.d
    zmm9.d = zmm9.d f* zmm15.d
    int128_t* var_160_2 = &var_14c
    zmm7.d = zmm7.d f* zmm15.d
    int64_t var_fc_2 = 0
    zmm10.d = zmm10.d f* zmm15.d
    int32_t var_150_1 = zmm7.d
    zmm7 = zmm9
    zmm5_1.d = zmm9.d f* zmm2_2.d
    int32_t var_140_2 = zmm1.d
    zmm1 = *(arg6 + 0x20)
    zmm6_1 = zmm10.d
    zmm0.d = zmm10.d f* zmm4_1
    zmm9.d = zmm9.d f* zmm1.d
    zmm5_1.d = zmm5_1.d f+ zmm0.d
    var_138_1:4.d = zmm1.d
    zmm10.d = zmm10.d f* zmm3
    var_138_1.d = zmm2_2.d
    zmm5_1.d = zmm5_1.d f+ *(arg6 + 0x2c)
    var_138_1:8.d = zmm4_1
    zmm9.d = zmm9.d f+ zmm10.d
    var_138_1:0xc.d = zmm3
    zmm7.d = zmm7.d f* zmm8.d
    zmm9.d = zmm9.d f+ *(arg6 + 0x30)
    uint128_t var_ec_2 = var_138_1
    zmm7.d = zmm7.d f+ *(arg6 + 0xc)
    uint64_t var_dc_2 = (_mm_unpacklo_ps(zmm5_1, zmm9.q)).q
    zmm6_1 = zmm6_1 f* zmm8.d f+ *(arg6 + 0x10)
    var_108 = zmm7.d
    int32_t var_100_2 = zmm8.d
    int32_t var_f4_2 = zmm12.d
    int32_t var_f0_2 = var_150_1.d
    float var_104_2 = zmm6_1
    sub_140db3600(arg7, rdi_2, &var_108, &arg1[1], r15 << 5, var_160_2)

int64_t* var_110

if (var_110 != 0)
    var_110[1].d -= 1
    
    if (var_110[1].d == 1)
        (**var_110)(var_110)
        int32_t temp2_1 = *(var_110 + 0xc)
        *(var_110 + 0xc) -= 1
        
        if (temp2_1 == 1)
            int64_t r8_4 = *var_110
            (*(r8_4 + 8))(var_110, 1, r8_4)

__security_check_cookie(rax_1 ^ &var_188)
return zx.q(rdi_2)
