// 函数: sub_1420cb0d0
// 地址: 0x1420cb0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm3
zmm3.d = (*arg2).d f- *arg1
uint128_t zmm4
zmm4.d = (*(arg2 + 4)).d f- arg1[1]
float zmm5 = *(arg2 + 8) f- arg1[2]
float zmm2 = *(arg3 + 4)
int128_t zmm7 = *arg3
uint128_t zmm6
zmm6.d = zmm3.d f* zmm7.d
uint128_t zmm0
zmm0.d = zmm4.d f* zmm2
int128_t zmm8 = *(arg3 + 8)
zmm6.d = zmm6.d f+ zmm0.d
zmm6.d = zmm6.d f+ zmm5 f* zmm8.d
float result

if (zmm6.d f!= 0f)
    zmm7.d = zmm7.d f* *arg1
    zmm8.d = zmm8.d f* arg1[2]
    zmm0.d = (*(arg3 + 0xc)).d f- (zmm2 f* arg1[1] f+ zmm7.d f+ zmm8.d)
    zmm0.d = zmm0.d f/ zmm6.d
    *arg4 = zmm0.d
    
    if (zmm0.d f< 0f || zmm0.d f> 1f)
        goto label_1420cb14b
    
    zmm3.d = zmm3.d f* zmm0.d
    zmm4.d = zmm4.d f* zmm0.d
    zmm3.d = zmm3.d f+ *arg1
    zmm4.d = zmm4.d f+ arg1[1]
    zmm5 = zmm5 f* zmm0.d f+ arg1[2]
    *arg5 = (_mm_unpacklo_ps(zmm3, zmm4.q)).q
    arg5[1].d = zmm5
    result.b = 1
else
    *arg4 = 0xbf800000
label_1420cb14b:
    *arg5 = data_143dbb1f8.q
    arg5[1].d = data_143dbb200
    result.b = 0

return result
