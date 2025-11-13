// 函数: sub_141ea43a0
// 地址: 0x141ea43a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_14093f560(arg1 + 0xf8, &arg_8, *arg2)
int64_t rax = sx.q(arg_8)
int64_t rdi = 0
int64_t rax_3

if (rax.d == 0xffffffff)
    rax_3 = 0
else
    rax_3 = rax * 0x30 + *(arg1 + 0xf8)

int64_t rdx_1 = rax_3 + 8

if (rax_3 == 0)
    rdx_1 = 0

if (rdx_1 != 0)
    return rdx_1

int64_t* rax_4 = sub_141e8da00(arg1 + 0xf8, arg2)
void* rax_6 = sub_141dec140(sub_140d3c6e0(arg1 + 0x40), *arg2)
int64_t rbx = sx.q(*(arg1 + 8))
rax_4[3].d = 0

if (*(rax_4 + 0x1c) s<= 0xffffffff)
    sub_1405dadb0(&rax_4[2], 0)

if (rbx.d s<= 0)
    return rax_4

int64_t r14_1 = 0
int128_t zmm6
int128_t var_48_1 = zmm6
float zmm7[0x4]
float var_58_1[0x4] = zmm7
float zmm8[0x4]
float var_68_1[0x4] = zmm8
float zmm9[0x4]
float var_78_1[0x4] = zmm9
float zmm10[0x4]
float var_88_1[0x4] = zmm10
float zmm13[0x4]
float var_b8_1[0x4] = zmm13

do
    int64_t rbx_1 = *(arg1 + 0x70)
    void* rax_7 = sub_140d3c6e0(arg1 + 0x40)
    int64_t rax_8 = sx.q(*(rbx_1 + (rdi << 2)))
    
    if (rax_8.d s>= 0 && rax_8.d s< *(rax_7 + 0x40) && *(*(rax_7 + 0x38) + rax_8 * 0x10 + 0xc) == 4)
        float zmm4_1[0x4] = *(*rax_6 + rax_8 * 0x30 + 0x10)
        int64_t rax_12 = *(arg1 + 0xa0)
        float var_158_1 = zmm4_1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
        float zmm5_1[0x4] = *(rax_12 + r14_1 + 0x10)
        zmm4_1[0] = zmm4_1[0] - zmm5_1[0]
        float var_154_1 = temp0_1[0]
        float var_150_1 = temp0_2[0]
        float temp0_3[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
        float temp0_4[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
        float var_148_1 = zmm5_1[0]
        float zmm0_1[0x4] = _mm_and_ps(zmm4_1, 0x7fffffff)
        float var_144_1 = temp0_3[0]
        float var_140_1 = temp0_4[0]
        
        if (zmm0_1[0] > 0.00100000005f)
        label_141ea45db:
            zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
            temp0_2[0] = temp0_2[0] * temp0_2[0]
            float zmm3 = temp0_3[0] * temp0_3[0]
            float zmm2 = temp0_1[0] * temp0_1[0] + zmm4_1[0]
            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
            zmm2 = zmm2 + temp0_2[0]
            zmm3 = zmm3 + zmm5_1[0]
            temp0_4[0] = temp0_4[0] * temp0_4[0]
            float temp0_8 = _mm_sqrt_ss(zmm2, zmm2)
            float temp0_9[0x4] = _mm_sqrt_ss(zx.o(0)[0], zmm3 + temp0_4[0])
            temp0_9[0] = temp0_9[0] * temp0_8
            
            if (not(temp0_9[0] <= 9.99999994e-09f))
                zmm0_1 = 0x3f800000
                zmm0_1[0] = 1f / temp0_9[0]
                zmm6.d = 1f / temp0_8
                zmm5_1[0] = zmm5_1[0] * zmm0_1[0]
                zmm4_1[0] = zmm4_1[0] f* zmm6.d
                temp0_3[0] = temp0_3[0] * zmm0_1[0]
                temp0_4[0] = temp0_4[0] * zmm0_1[0]
                temp0_1[0] = temp0_1[0] f* zmm6.d
                temp0_2[0] = temp0_2[0] f* zmm6.d
                float var_128 = zmm4_1[0]
                float var_124_1 = temp0_1[0]
                float var_120_1 = temp0_2[0]
                float var_138 = zmm5_1[0]
                float var_134_1 = temp0_3[0]
                float var_130_1 = temp0_4[0]
                float var_118[0x4]
                zmm6 = sub_140ad6660(&var_118, &var_128, &var_138)
                int64_t rbx_2 = sx.q(rax_4[1].d)
                float var_108_1[0x4] = var_118
                float var_ec_1 = var_150_1
                zmm6.d = zmm6.d f* temp0_9[0]
                float var_e0_1 = var_140_1
                int32_t rax_15 = (rbx_2 + 1).d
                int64_t var_f4_1 = var_158_1.q
                int64_t var_e8_1 = var_148_1.q
                int32_t var_f8_1 = zmm6.d
                rax_4[1].d = rax_15
                
                if (rax_15 s> *(rax_4 + 0xc))
                    sub_1405c4f50(rax_4)
                
                int64_t rax_16 = *rax_4
                int64_t rcx_13 = rbx_2 * 6
                *(rax_16 + (rcx_13 << 3)) = var_108_1
                *(rax_16 + (rcx_13 << 3) + 0x10) = var_f8_1.o
                *(rax_16 + (rcx_13 << 3) + 0x20) = var_e8_1.o
                
                if (rax_4[3].d == 0)
                    int32_t arg_10 = 0xffffffff
                    sub_141ea4b80(&rax_4[2], &arg_10, rbx.d)
                
                *(rax_4[2] + (rdi << 2)) = rbx_2.d
        else
            temp0_1[0] = temp0_1[0] - temp0_3[0]
            
            if (_mm_and_ps(temp0_1, 0x7fffffff)[0] > 0.00100000005f)
                goto label_141ea45db
            
            temp0_2[0] = temp0_2[0] - temp0_4[0]
            
            if (not(_mm_and_ps(temp0_2, 0x7fffffff)[0] <= 0.00100000005f))
                goto label_141ea45db
    
    rdi += 1
    r14_1 += 0x30
while (rdi s< rbx)

return rax_4
