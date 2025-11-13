// 函数: sub_1420cb1f0
// 地址: 0x1420cb1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = *arg2 - *arg1
uint128_t zmm5
zmm5.d = arg2[1].d f- arg1[1]
int128_t zmm6
zmm6.d = arg2[2].d f- arg1[2]
uint128_t zmm0
zmm0.d = zmm5.d f* arg4[1]
int64_t zmm1
zmm1.d = zmm6.q.d f* arg4[2]
float zmm3 = zmm4 * *arg4 f+ zmm0.d f+ zmm1.d

if (zmm3 != 0f)
    uint128_t zmm2
    zmm2.d = (*(arg3 + 4)).d f- arg1[1]
    zmm0.d = (*arg3).d f- *arg1
    zmm1.d = (*(arg3 + 8)).d f- arg1[2]
    zmm2.d = zmm2.d f* arg4[1]
    zmm0.d = zmm0.d f* *arg4
    zmm1.d = zmm1.d f* arg4[2]
    zmm2.d = zmm2.d f+ zmm0.d
    zmm2.d = zmm2.d f+ zmm1.d
    zmm2.d = zmm2.d f/ zmm3
    *arg5 = zmm2.d
    
    if (not(zmm2.d f< 0f) && not(zmm2.d f> 1f))
        zmm1 = zmm2.q
        zmm0.d = zmm2.d f* zmm4
        zmm2.d = zmm2.d f* zmm6.d
        zmm0.d = zmm0.d f+ *arg1
        zmm2.d = zmm2.d f+ arg1[2]
        zmm1.d = zmm1.d f* zmm5.d
        zmm1.d = zmm1.d f+ arg1[1]
        *arg6 = (_mm_unpacklo_ps(zmm0, zmm1)).q
        arg6[1].d = zmm2.d
        int32_t rax_2
        rax_2.b = 1
        return rax_2
else
    *arg5 = 0xbf800000

*arg6 = data_143dbb1f8.q
arg6[1].d = data_143dbb200
int32_t rax_1
rax_1.b = 0
return rax_1
