// 函数: sub_142507120
// 地址: 0x142507120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_58

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_10 = (zx.o(0)).d

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
uint128_t zmm9 = arg_10
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
int32_t result

if (zmm9.d f>= 9.99999975e-05f)
    int32_t var_54
    uint128_t zmm6 = var_54
    uint128_t zmm7 = var_58
    uint128_t zmm2
    zmm2.d = zmm6.d f* zmm6.d
    uint128_t zmm0_1
    zmm0_1.d = zmm7.d f* zmm7.d
    int32_t var_50
    int128_t zmm8 = var_50
    zmm2.d = zmm2.d f+ zmm0_1.d
    zmm0_1.d = zmm9.d f* zmm9.d
    zmm2.d = zmm2.d f+ zmm8.d f* zmm8.d
    
    if (not(zmm2.d f<= zmm0_1.d))
        float zmm3 = zmm2.d
        uint128_t zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm3)
        zmm3 = zmm3 * 0.5f
        zmm0_1.d = zmm5_1.d f* zmm5_1.d
        zmm2.d = 0.5f - zmm3 f* zmm0_1.d
        zmm0_1.d = zmm5_1.d f* zmm2.d
        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
        zmm0_1.d = zmm5_1.d f* (0.5f - zmm3 * zmm5_1.d f* zmm5_1.d)
        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
        zmm5_1.d = zmm5_1.d f* zmm9.d
        zmm7.d = zmm7.d f* zmm5_1.d
        zmm6.d = zmm6.d f* zmm5_1.d
        zmm8.d = zmm8.d f* zmm5_1.d
    
    result = zmm8.d
    int32_t var_54_2 = zmm6.d
    var_58 = zmm7.d
else
    float zmm1 = data_143dbb1fc
    var_58 = data_143dbb1f8.d
    result = data_143dbb200.d
    float var_54_1 = zmm1

*arg3 = var_58.q
arg3[1].d = result
return result
