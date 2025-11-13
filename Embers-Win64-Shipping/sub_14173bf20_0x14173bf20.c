// 函数: sub_14173bf20
// 地址: 0x14173bf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0)
    return 

void var_108
void* var_48_1 = __security_cookie ^ &var_108

if (arg5 != 0)
    int64_t* var_b8 = arg5
    float (* rax_2)[0x4] = sub_141746340(&var_b8)
    int128_t* rax_3 = sub_141749180(&var_b8)
    float zmm6[0x4] = data_14399f668
    var_b8 = arg4
    float var_a8[0x4] = *rax_3
    float zmm0[0x4] = (*rax_2)[2]
    float zmm3[0x4] = *rax_2
    float temp0_1[0x4] = _mm_unpacklo_ps((*rax_2)[1], 0)
    float temp0_2[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
    zmm0 = data_14399f670
    float temp0_3[0x4] = _mm_unpacklo_ps(temp0_2, temp0_1[0].q)
    float temp0_4[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
    float temp0_6[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm0[0].q), temp0_4[0].q)
    float var_88_1[0x4] = temp0_6
    float var_98_1[0x4] = temp0_3
    float (* rax_4)[0x4] = sub_141746340(&var_b8)
    float (* rax_5)[0x4] = sub_141749180(&var_b8)
    int64_t r11_1 = sx.q(arg5[1].d)
    int64_t r10_1 = sx.q(arg4[1].d)
    void* rax_6 = *arg5
    float var_78[0x4] = *rax_5
    int64_t zmm1 = (*rax_4)[2]
    zmm3 = *rax_4
    float var_58_1[0x4] = temp0_6
    float temp0_7[0x4] = _mm_unpacklo_ps((*rax_4)[1], 0)
    float var_68_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm1), temp0_7[0].q)
    __acrt_fltout(arg4, arg5, *(*(*arg4 + 0x80) + (r10_1 << 3)), *(*(rax_6 + 0x80) + (r11_1 << 3)), 
        &var_78, &var_a8, arg6[0], *arg1, arg2)

__security_check_cookie(var_48_1 ^ &var_108)
