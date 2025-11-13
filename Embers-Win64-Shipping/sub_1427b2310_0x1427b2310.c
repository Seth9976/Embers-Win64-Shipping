// 函数: sub_1427b2310
// 地址: 0x1427b2310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg5 = 0
*arg6 = *arg1
int32_t result = arg1[1].d
arg6[1].d = result
uint128_t zmm5 = *(arg4 + 4)
uint128_t zmm4 = *arg4
uint128_t zmm0
zmm0.d = zmm5.d f* arg2[1]
uint128_t zmm7
zmm7.d = zmm4.d f* *arg2
int128_t zmm6 = *(arg4 + 8)
zmm7.d = zmm7.d f+ zmm0.d
zmm7.d = zmm7.d f+ zmm6.d f* arg2[2]

if (not(__andps_xmmxud_memxud(zmm7, data_142d3f770).d f< 9.99999994e-09f))
    zmm0.d = (*arg2).d f* *arg1
    float zmm3 = arg2[1] f* *(arg1 + 4) f+ zmm0.d
    zmm0.d = arg3[1].d f* arg2[1]
    zmm3 = (zmm3 + arg2[2] f* arg1[1].d - (*arg3 f* *arg2 f+ zmm0.d + arg3[2] f* arg2[2])) f/ zmm7.d
    
    if (not(zmm3 < 0f))
        zmm4.d = zmm4.d f* zmm3
        zmm5.d = zmm5.d f* zmm3
        zmm4.d = zmm4.d f+ *arg3
        zmm6.d = zmm6.d f* zmm3
        zmm5.d = zmm5.d f+ arg3[1]
        zmm6.d = zmm6.d f+ arg3[2]
        *arg6 = (_mm_unpacklo_ps(zmm4, zmm5.q)).q
        result = zmm6.d
        arg6[1].d = result
        *arg5 = 1

return result
