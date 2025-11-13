// 函数: sub_142086630
// 地址: 0x142086630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = arg4
char result
int128_t zmm6
result, zmm6 = sub_142099320(arg1)

if (result != 0 && arg2 != 0)
    arg4 = arg7
    int64_t rax = *arg2
    int128_t var_18_1 = zmm6
    zmm6 = arg11
    float var_dc = arg4.d + arg9
    float var_d8_1 = arg8 + arg10
    int32_t var_d4 = arg4.d
    float var_cc = arg5 f* zmm6.d
    float var_d0_1 = arg8
    int32_t var_e8 = arg3.d
    float var_c8_1 = arg6 f* zmm6.d
    int32_t var_e4_1 = zmm7.d
    void var_b8
    sub_1423fab70(&var_b8, &var_e8, (*(rax + 0x280))(arg2), &var_cc, &var_d4, &var_dc)
    int64_t var_50_1 = _mm_unpacklo_ps(zx.o(0), arg13)
    int32_t var_e0_1 = 0
    int64_t var_44_1 = arg14
    int32_t var_48_1 = 0
    
    if (arg12 != 0)
        int32_t var_b0
        int64_t zmm0_2
        zmm0_2.d = var_b0.d f* zmm6.d
        int32_t var_ac
        int64_t zmm1_2
        zmm1_2.d = var_ac.d f* zmm6.d
        int32_t var_b0_1 = zmm0_2.d
        int32_t var_ac_1 = zmm1_2.d
    
    int512_t zmm6_1
    result, zmm6_1 = sub_142409850(*(arg1 + 0x270), &var_b8)
    zmm6_1.o = var_18_1

return result
