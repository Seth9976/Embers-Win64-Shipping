// 函数: sub_1421cd960
// 地址: 0x1421cd960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_18 = arg3
void* r14 = *(arg2 + 0x18)
int64_t var_120 = 0
float var_100
int512_t zmm1
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
zmm1, zmm8, zmm9, zmm10 =
    sub_141fe56b0(arg1 + 0x30, &var_100, *(arg2 + 0x12c), arg5, r14.d, nullptr)
zmm1.o = *(arg2 + 0x12c)
float zmm0[0x4]
float zmm7[0x4]
zmm0, zmm7 = sub_141fe5610(arg1 + 0x78, zmm1, r14, nullptr)
int128_t zmm13 = 0x3f800000
float zmm12[0x4] = zmm0
void* rax = *(arg2 + 0x28)
zmm0 = 0x3f800000
float zmm1_1[0x4] = 0x3f800000
float zmm2_1[0x4] = 0x3f800000
float var_fc
float var_f8

if ((*(*(rax + 0x30) + 0x59) & 1) == 0 && (*(arg1 + 0xd8) & 8) == 0)
    float zmm5_1[0x4] = *(r14 + 0x1c0)
    float temp0_4[0x4] = __mulps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(var_100, var_f8[0].q), _mm_unpacklo_ps(var_fc, 0)[0].q), 
        *(r14 + 0x1e0))
    float temp0_5[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_5)
    float temp0_12[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0_6), temp0_9)
    float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
    float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
    float temp0_16[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
    float temp0_17[0x4] = _mm_mul_ps(temp0_15, temp0_5)
    float temp0_18[0x4] = _mm_mul_ps(temp0_16, temp0_6)
    float temp0_19[0x4] = _mm_add_ps(temp0_14, temp0_4)
    float temp0_22[0x4] =
        __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_18, temp0_17), temp0_19), *(r14 + 0x1d0))
    var_100 = temp0_22[0]
    var_fc = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)[0]
    var_f8 = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
    zmm1_1 = *(r14 + 0x1e0)
    zmm0 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
    zmm2_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)

int32_t rax_2 = *(arg1 + 0xd8)
float zmm15[0x4] = 0xbf800000
zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
zmm0[0] = zmm0[0] * zmm0[0]
zmm1_1[0] = zmm1_1[0] + zmm0[0]
zmm1_1[0] = zmm1_1[0] + zmm2_1[0]
zmm2_1 = _mm_sqrt_ss(0, zmm1_1[0])
arg_18 = zmm2_1[0]
zmm12[0] = zmm12[0] * zmm2_1[0]
int32_t arg_8

if (not(test_bit(rax_2, 9)))
    arg_8 = 0
else
    arg_8 = 0xbf800000

int32_t var_118

if (not(test_bit(rax_2, 8)))
    var_118 = 0
else
    var_118 = 0xbf800000

if (rax_2.b s>= 0)
    zmm15 = zx.o(0)

int32_t arg_10

if ((rax_2.b & 0x40) == 0)
    arg_10 = 0
else
    arg_10 = 0x3f800000

int32_t var_114

if ((rax_2.b & 0x20) == 0)
    var_114 = 0
else
    var_114 = 0x3f800000

if ((rax_2.b & 0x10) == 0)
    zmm13 = zx.o(0)

int32_t rax_3 = *(arg2 + 0x118)
int64_t r15 = *(arg2 + 0xf0)
uint64_t result = zx.q(rax_3 - 1)
int32_t r12 = *(arg2 + 0x114)
int64_t r13 = *(arg2 + 0xf8)
int64_t rsi = sx.q(result.d)

if (rax_3 - 1 s>= 0)
    float var_68_1[0x4] = zmm7
    float var_78_1[0x4] = zmm8
    float var_88_1[0x4] = zmm9
    float var_98_1[0x4] = zmm10
    int64_t temp1_1
    
    do
        void* rbx_3 = zx.q(zx.d(*(r13 + (rsi << 1))) * r12) + r15
        
        if ((*(rbx_3 + 0x5c) & 0x4000000) == 0)
            zmm8 = var_100
            zmm7 = var_fc
            zmm8[0] = zmm8[0] f- *(rbx_3 + 0x10)
            zmm7[0] = zmm7[0] f- *(rbx_3 + 0x14)
            float zmm6_1[0x4] = var_f8
            zmm6_1[0] = zmm6_1[0] f- *(rbx_3 + 0x18)
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm10 = zmm7
            zmm10[0] = zmm10[0] * zmm7[0]
            zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
            zmm10[0] = zmm10[0] + zmm8[0]
            zmm10[0] = zmm10[0] + zmm6_1[0]
            float temp0_29[0x4] = _mm_sqrt_ss(0, zmm10[0])
            
            if (not(temp0_29[0] > zmm12[0]))
                if ((*(arg1 + 0xd8) & 1) == 0)
                    zmm1_1 = *(arg2 + 0x12c)
                label_1421cdc9b:
                    zmm0, zmm6_1, zmm7 = sub_141fe5610(arg1 + 0xa8, zmm1_1, r14, nullptr)
                    zmm2_1 = arg_18
                    zmm9 = zmm0
                else
                    if (zmm12[0] != 0f)
                        zmm1_1 = zmm12
                        zmm1_1[0] = zmm1_1[0] - temp0_29[0]
                        zmm1_1[0] = zmm1_1[0] / zmm12[0]
                        goto label_1421cdc9b
                    
                    zmm9 = zx.o(0)
                
                result = *(rax + 0x30)
                
                if ((*(result + 0x59) & 1) == 0 && (*(arg1 + 0xd8) & 8) == 0)
                    zmm9[0] = zmm9[0] * zmm2_1[0]
                
                if (not(zmm10[0] <= 9.99999994e-09f))
                    float zmm4_1[0x4] = 0x3f000000
                    float temp0_30[0x4] = _mm_rsqrt_ss(zmm10[0], zmm10[0])
                    zmm2_1 = 0x3f000000
                    zmm10[0] = zmm10[0] * 0.5f
                    temp0_30[0] = temp0_30[0] * temp0_30[0]
                    zmm10[0] = zmm10[0] * temp0_30[0]
                    zmm2_1[0] = 0.5f - zmm10[0]
                    temp0_30[0] = temp0_30[0] * zmm2_1[0]
                    temp0_30[0] = temp0_30[0] + temp0_30[0]
                    temp0_30[0] = temp0_30[0] * temp0_30[0]
                    zmm10[0] = zmm10[0] * temp0_30[0]
                    zmm4_1[0] = 0.5f - zmm10[0]
                    temp0_30[0] = temp0_30[0] * zmm4_1[0]
                    temp0_30[0] = temp0_30[0] + temp0_30[0]
                    temp0_30[0] = temp0_30[0] * zmm7[0]
                    temp0_30[0] = temp0_30[0] * zmm6_1[0]
                    temp0_30[0] = temp0_30[0] * zmm8[0]
                    zmm7 = temp0_30
                    zmm6_1 = temp0_30
                    zmm8 = temp0_30
                
                if (not(zmm9[0] >= 0f))
                    zmm8 ^= 0x80000000
                    zmm7 ^= 0x80000000
                    zmm6_1 ^= 0x80000000
                    zmm9 ^= 0x80000000
                
                zmm2_1 = arg_8
                
                if (zmm6_1[0] >= zmm2_1[0])
                    zmm6_1 = __minss_xmmss_memss(zmm6_1[0], arg_10)
                else
                    zmm6_1 = zmm2_1
                
                zmm1_1 = var_118
                
                if (zmm7[0] >= zmm1_1[0])
                    zmm7 = __minss_xmmss_memss(zmm7[0], var_114)
                else
                    zmm7 = zmm1_1
                
                if (zmm8[0] >= zmm15[0])
                    zmm8 = _mm_min_ss(zmm8[0], zmm13.d)
                else
                    zmm8 = zmm15
                
                zmm10 = arg4
                zmm2_1 = arg_18
                zmm8[0] = zmm8[0] * zmm9[0]
                zmm7[0] = zmm7[0] * zmm9[0]
                zmm6_1[0] = zmm6_1[0] * zmm9[0]
                zmm8[0] = zmm8[0] * zmm10[0]
                zmm7[0] = zmm7[0] * zmm10[0]
                zmm6_1[0] = zmm6_1[0] * zmm10[0]
                zmm8[0] = zmm8[0] f+ *(rbx_3 + 0x30)
                *(rbx_3 + 0x30) = zmm8[0]
                zmm7[0] = zmm7[0] f+ *(rbx_3 + 0x34)
                *(rbx_3 + 0x34) = zmm7[0]
                zmm6_1[0] = zmm6_1[0] f+ *(rbx_3 + 0x38)
                *(rbx_3 + 0x38) = zmm6_1[0]
                
                if ((*(arg1 + 0xd8) & 2) != 0)
                    zmm8[0] = zmm8[0] f+ *(rbx_3 + 0x20)
                    zmm7[0] = zmm7[0] f+ *(rbx_3 + 0x24)
                    zmm6_1[0] = zmm6_1[0] f+ *(rbx_3 + 0x28)
                    *(rbx_3 + 0x20) = zmm8[0]
                    *(rbx_3 + 0x24) = zmm7[0]
                    *(rbx_3 + 0x28) = zmm6_1[0]
        
        temp1_1 = rsi
        rsi -= 1
    while (temp1_1 - 1 s>= 0)

return result
