// 函数: sub_142003540
// 地址: 0x142003540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

sub_140d3a3a0(&arg4[0x68], arg2)
*arg4 |= 1
*(arg4 + 0x78) = 0
void* const rsi_1 = *(arg2 + 0x130)
void* rax_1
int64_t rax_2
void* rdx

if (rsi_1 != 0)
    rax_1 = sub_142577430()
    rdx = *(rsi_1 + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rsi_1 == 0 || rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rsi_1 = nullptr

sub_140d3a3a0(&arg4[0x70], rsi_1)
void* rax_4 = *(arg2 + 0x130)
int64_t var_58
float var_50_1
float zmm1_1[0x4]

if (rax_4 == 0)
    var_58 = data_143dbb1f8.q
    var_50_1 = data_143dbb200
else
    zmm1_1 = *(rax_4 + 0x1d0)
    var_58.d = zmm1_1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
    var_50_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
    var_58:4.d = temp0_1[0]

float zmm0_1[0x4] = zx.o(var_58)
*(arg4 + 0x1c) = zmm0_1.q
*(arg4 + 0x10) = zmm0_1.q
*(arg4 + 0x24) = var_50_1
*(arg4 + 0x18) = var_50_1
int64_t var_58_1
float var_50_4

if (arg3 == 0)
    var_58_1 = data_143dbb1f8.q
    var_50_4 = data_143dbb200
else
    void* rax_7 = *(arg3 + 0x130)
    float var_50_2
    
    if (rax_7 == 0)
        var_58 = data_143dbb1f8.q
        var_50_2 = data_143dbb200
    else
        zmm1_1 = *(rax_7 + 0x1d0)
        var_58.d = zmm1_1[0]
        float temp0_3[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
        var_50_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
        var_58:4.d = temp0_3[0]
    
    float zmm6[0x4] = *(arg4 + 0x1c)
    zmm1_1 = zx.o(var_58)
    float zmm7[0x4] = *(arg4 + 0x20)
    zmm6[0] = zmm6[0] - zmm1_1[0]
    float zmm8[0x4] = *(arg4 + 0x24)
    float temp0_5[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
    zmm7[0] = zmm7[0] - temp0_5[0]
    var_58_1 = zmm1_1.q
    zmm8[0] = zmm8[0] - var_50_2
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm7[0] = zmm7[0] + zmm6[0]
    zmm7[0] = zmm7[0] + zmm8[0]
    
    if (zmm7[0] != 1f)
        if (zmm7[0] >= 9.99999994e-09f)
            float temp0_6[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
            float zmm2[0x4] = 0x3f000000
            zmm7[0] = zmm7[0] * 0.5f
            temp0_6[0] = temp0_6[0] * temp0_6[0]
            zmm7[0] = zmm7[0] * temp0_6[0]
            zmm2[0] = 0.5f - zmm7[0]
            temp0_6[0] = temp0_6[0] * zmm2[0]
            temp0_6[0] = temp0_6[0] + temp0_6[0]
            temp0_6[0] = temp0_6[0] * temp0_6[0]
            zmm7[0] = zmm7[0] * temp0_6[0]
            temp0_6[0] = temp0_6[0] * (0.5f - zmm7[0])
            temp0_6[0] = temp0_6[0] + temp0_6[0]
            zmm1_1 = temp0_6
            temp0_6[0] = temp0_6[0] * zmm6[0]
            temp0_6[0] = temp0_6[0] * zmm8[0]
            var_58_1.d = temp0_6[0]
            zmm1_1[0] = zmm1_1[0] * zmm7[0]
            var_50_4 = temp0_6[0]
        else
            zmm1_1 = data_143dbb1fc
            var_58_1.d = data_143dbb1f8[0]
            var_50_4 = data_143dbb200[0]
        
        var_58_1:4.d = zmm1_1[0]
    else
        var_58_1.d = zmm6[0]
        var_58_1:4.d = zmm7[0]
        var_50_4 = zmm8[0]

*arg5 = var_58_1
*(arg5 + 8) = var_50_4
zmm0_1 = *(arg5 + 8) ^ 0x80000000
float temp0_7[0x4] = _mm_unpacklo_ps(*arg5 ^ 0x80000000, (*(arg5 + 4) ^ 0x80000000)[0].q)
*(arg4 + 0x34) = temp0_7.q
*(arg4 + 0x28) = temp0_7.q
float var_50_5 = zmm0_1[0]
*(arg4 + 0x3c) = var_50_5
*(arg4 + 0x30) = var_50_5
