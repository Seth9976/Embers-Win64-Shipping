// 函数: sub_14205e740
// 地址: 0x14205e740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm3 = *(arg2 + 0xc)
float zmm4[0x4] = *arg2
int32_t rdi = 0
float zmm1[0x4] = *(arg2 + 8)
int64_t zmm2 = *(arg2 + 4)
zmm1[0] = zmm1[0] f+ zmm3
zmm1[0] = zmm1[0] f- zmm3
int64_t zmm5 = zmm2
void* var_90 = nullptr
zmm4[0] = zmm4[0] f- zmm3
int32_t var_88 = 0
float var_94 = zmm1[0]
zmm2.d = zmm2.d f- zmm3
zmm4[0] = zmm4[0] f+ zmm3
float var_a0 = zmm1[0]
zmm5.d = zmm5.d f+ zmm3
int64_t var_80 = (_mm_unpacklo_ps(zmm4, zmm2)).q
float var_78 = var_a0
int64_t var_74 = (_mm_unpacklo_ps(zmm4, zmm5)).q
float var_6c = var_94
char var_68 = 1
int128_t zmm7
int128_t zmm8
zmm7, zmm8 = sub_142058770(arg1, &var_80, 0, &var_90)
void var_60
sub_1423633d0(*(arg1 + 0x440), &var_60)
void* rcx_1 = var_90
void* rdx_2 = rcx_1
void* r8_2 = sx.q(var_88) * 0x30 + rcx_1

if (rcx_1 != r8_2)
    float zmm6_1 = *arg2
    int128_t var_28_1 = zmm7
    zmm7 = *(arg2 + 4)
    int128_t var_38_1 = zmm8
    zmm8 = *(arg2 + 8)
    float var_48
    float temp0_2 = _mm_max_ss(*(arg2 + 0xc) + 9.99999975e-05f + var_48, 0)
    
    do
        float zmm2_1[0x4] = *(rdx_2 + 0x10)
        int32_t rax_3 = rdi + 1
        float temp0_3[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
        float zmm3_1 = zmm6_1 - zmm2_1[0]
        float temp0_4[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
        float zmm4_1 = zmm7.d - temp0_3[0]
        float zmm1_1 = zmm8.d - temp0_4[0]
        
        if (temp0_2 * temp0_2 < zmm4_1 * zmm4_1 + zmm3_1 * zmm3_1 + zmm1_1 * zmm1_1)
            rax_3 = rdi
        
        rdx_2 += 0x30
        rdi = rax_3
    while (rdx_2 != r8_2)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

return zx.q(rdi)
