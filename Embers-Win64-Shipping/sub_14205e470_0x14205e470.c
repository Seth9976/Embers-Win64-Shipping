// 函数: sub_14205e470
// 地址: 0x14205e470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
void* var_78 = nullptr
int32_t var_70 = 0
int128_t zmm6
int128_t zmm7
int128_t zmm8
int128_t zmm9
zmm6, zmm7, zmm8, zmm9 = sub_142058770(arg1, arg2, 0, &var_78)
void var_68
sub_1423633d0(*(arg1 + 0x440), &var_68)
void* r9_1 = var_78
void* rcx_1 = r9_1
void* r8_2 = sx.q(var_70) * 0x30 + r9_1

if (r9_1 != r8_2)
    int128_t var_18_1 = zmm6
    int32_t var_54
    zmm6 = var_54
    int128_t var_28_1 = zmm7
    int32_t var_58
    zmm7 = var_58
    int128_t var_38_1 = zmm8
    int32_t var_5c
    zmm8 = var_5c
    int128_t var_48_1 = zmm9
    zmm9 = *arg2
    
    do
        float zmm0_1[0x4] = *(rcx_1 + 0x10)
        float temp0_1[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
        float zmm3_1 = zmm0_1[0]
        float temp0_2[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xaa)
        float zmm4_1 = temp0_1[0]
        zmm0_1[0] = zmm0_1[0] f+ zmm8.d
        float zmm5_1 = temp0_2[0] f+ zmm6.d
        temp0_1[0] = temp0_1[0] f- zmm7.d
        temp0_2[0] = temp0_2[0] f- zmm6.d
        int64_t rax
        
        if (zmm9.d f> zmm0_1[0] || zmm3_1 f- zmm8.d f> *(arg2 + 0xc)
                || zmm4_1 f+ zmm7.d f< *(arg2 + 4) || temp0_1[0] f> arg2[1].d
                || zmm5_1 f< *(arg2 + 8) || temp0_2[0] f> *(arg2 + 0x14))
            rax.b = 0
        else
            rax.b = 1
        
        int32_t rdx_1 = rsi + 1
        
        if (rax.b == 0)
            rdx_1 = rsi
        
        rcx_1 += 0x30
        rsi = rdx_1
    while (rcx_1 != r8_2)

if (r9_1 != 0)
    sub_140a74f90(r9_1)

return zx.q(rsi)
