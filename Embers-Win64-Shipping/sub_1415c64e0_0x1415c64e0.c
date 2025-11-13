// 函数: sub_1415c64e0
// 地址: 0x1415c64e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2 = *arg3
int64_t* rsi = arg4
float zmm1 = arg3[1]
int64_t zmm0 = arg3[2]
int128_t zmm6
zmm6.d = (*arg2).d f- zmm2
int128_t zmm14
zmm14.d = (*(arg2 + 4)).d f- zmm1
int128_t zmm7
zmm7.d = (*(arg4 + 4)).d f- zmm1
int128_t zmm8
zmm8.d = (*(arg5 + 4)).d f- zmm1
int128_t zmm9
zmm9.d = (*(arg4 + 8)).d f- zmm0.d
int128_t zmm10
zmm10.d = (*(arg5 + 8)).d f- zmm0.d
int128_t zmm11
zmm11.d = (*arg5).d f- zmm2
int128_t zmm12
zmm12.d = (*arg4).d f- zmm2
zmm2 = *(arg2 + 8) f- zmm0.d
int64_t zmm5
zmm5.d = zmm8.q.d f* zmm7.d
zmm0.d = zmm12.q.d f* zmm12.d
float zmm3 = zmm14.d f* zmm7.d
int128_t zmm13
zmm13.d = zmm7.d f* zmm7.d
zmm14.d = zmm14.d f* zmm8.d
zmm13.d = zmm13.d f+ zmm0.d
zmm0.d = zmm11.q.d f* zmm11.d
zmm13.d = zmm13.d f+ zmm9.d f* zmm9.d
float zmm4 = zmm8.d f* zmm8.d f+ zmm0.d
zmm0.d = zmm11.q.d f* zmm12.d
zmm4 = zmm4 + zmm10.d f* zmm10.d
zmm5.d = zmm5.d f+ zmm0.d
zmm0.d = zmm6.q.d f* zmm12.d
zmm6.d = zmm6.d f* zmm11.d
zmm5.d = zmm5.d f+ zmm10.d f* zmm9.d
zmm14.d = zmm14.d f+ zmm6.d
zmm3 = zmm3 f+ zmm0.d + zmm2 f* zmm9.d
zmm0.d = zmm5.d f* zmm5.d
zmm14.d = zmm14.d f+ zmm2 f* zmm10.d
zmm1 = zmm4 f* zmm13.d f- zmm0.d
zmm0 = zmm14.q
zmm2 = 1f / zmm1
zmm14.d = zmm14.d f* zmm13.d
zmm0.d = zmm0.d f* zmm5.d
zmm14.d = zmm14.d f- zmm3 f* zmm5.d
zmm14.d = zmm14.d f* zmm2
zmm1 = (zmm3 * zmm4 f- zmm0.d) * zmm2

if (zmm1 < -9.99999975e-05f || zmm1 > 1.00010002f || zmm14.d f< -9.99999975e-05f
    || zmm14.d f> 1.00010002f)
label_1415c6713:
    float var_c8
    sub_1415c63c0(&var_c8, arg3, rsi, arg6)
    float var_b8
    sub_1415c63c0(&var_b8, arg3, arg5, arg6)
    float var_a8
    sub_1415c63c0(&var_a8, rsi, arg5, arg6)
    float zmm3_1 = *arg6
    float zmm4_1 = *(arg6 + 4)
    float zmm1_1 = zmm3_1 - var_c8
    int64_t zmm2_1 = arg6[1].d
    float var_c4
    float zmm5_1 = zmm4_1 - var_c4
    float var_b4
    float zmm6_1 = zmm4_1 - var_b4
    float var_a4
    zmm4_1 = zmm4_1 - var_a4
    int32_t var_c0
    int64_t zmm0_1
    zmm0_1.d = zmm2_1.d f- var_c0
    zmm5_1 = zmm5_1 * zmm5_1 + zmm1_1 * zmm1_1
    zmm0_1.d = zmm0_1.d f* zmm0_1.d
    zmm1_1 = zmm3_1 - var_b8
    zmm3_1 = zmm3_1 - var_a8
    zmm5_1 = zmm5_1 f+ zmm0_1.d
    int32_t var_b0
    zmm0_1.d = zmm2_1.d f- var_b0
    int32_t var_a0
    zmm2_1.d = zmm2_1.d f- var_a0
    zmm0_1.d = zmm0_1.d f* zmm0_1.d
    zmm2_1.d = zmm2_1.d f* zmm2_1.d
    zmm6_1 = zmm6_1 * zmm6_1 + zmm1_1 * zmm1_1 f+ zmm0_1.d
    zmm4_1 = zmm4_1 * zmm4_1 + zmm3_1 * zmm3_1 f+ zmm2_1.d
    int32_t rax_1
    
    if (zmm5_1 >= zmm6_1)
        if (zmm6_1 >= zmm4_1)
            zmm0_1 = var_a8.q
            rax_1 = var_a0
        else
            zmm0_1 = var_b8.q
            rax_1 = var_b0
    else if (zmm5_1 >= zmm4_1)
        zmm0_1 = var_a8.q
        rax_1 = var_a0
    else
        zmm0_1 = var_c8.q
        rax_1 = var_c0
    
    *arg1 = zmm0_1
    arg1[1].d = rax_1
else
    zmm14.d = zmm14.d f+ zmm1
    
    if (zmm14.d f> 1.00010002f)
        goto label_1415c6713
    
    int32_t rax = *(arg2 + 8)
    *arg1 = *arg2
    arg1[1].d = rax

return arg1
