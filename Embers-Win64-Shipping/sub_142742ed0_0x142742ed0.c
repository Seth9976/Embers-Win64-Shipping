// 函数: sub_142742ed0
// 地址: 0x142742ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2 = arg2[8]
float zmm0[0x4]
float zmm1[0x4]
float zmm3
float zmm4[0x4]
float zmm5
int128_t zmm6

if (not(zmm2.d f>= 0f))
    zmm3 = *arg2
    zmm0 = arg2[4]
    zmm5 = arg2[3] f+ arg2[1]
    
    if (zmm3 <= zmm0[0])
        zmm1 = 0x3f800000
        zmm4 = arg2[6]
        zmm1[0] = 1f - zmm3
        zmm4[0] = zmm4[0] f- arg2[2]
        zmm1[0] = zmm1[0] + zmm0[0]
        zmm1[0] = zmm1[0] f- zmm2.d
        zmm2.d = 0.5f / _mm_sqrt_ss(0, zmm1[0])[0]
        zmm0 = arg2[7]
        zmm0[0] = zmm0[0] f+ arg2[5]
        zmm4[0] = zmm4[0] f* zmm2.d
        zmm6.d = zmm2.d f* zmm1[0]
        zmm0[0] = zmm0[0] f* zmm2.d
        zmm2.d = zmm2.d f* zmm5
    else
        zmm4 = arg2[5]
        zmm4[0] = zmm4[0] f- arg2[7]
        zmm3 = zmm3 + 1f - zmm0[0] f- zmm2.d
        zmm2.d = 0.5f / _mm_sqrt_ss(0, zmm3)[0]
        zmm0 = arg2[2]
        zmm0[0] = zmm0[0] f+ arg2[6]
        zmm4[0] = zmm4[0] f* zmm2.d
        zmm6.d = zmm2.d f* zmm5
        zmm0[0] = zmm0[0] f* zmm2.d
        zmm2.d = zmm2.d f* zmm3
    
    *arg1 = zmm2.d
    arg1[1] = zmm6.d
    arg1[2] = zmm0[0]
    arg1[3] = zmm4[0]
    return arg1

zmm1 = arg2[4]
zmm4 = *arg2

if (zmm4[0] >= (zmm1 ^ data_142d3f780)[0])
    zmm4[0] = zmm4[0] + 1f
    zmm4[0] = zmm4[0] + zmm1[0]
    zmm1 = arg2[6]
    zmm1[0] = zmm1[0] f- arg2[2]
    zmm4[0] = zmm4[0] f+ zmm2.d
    zmm2.d = arg2[5].d f- arg2[7]
    zmm3 = 0.5f / _mm_sqrt_ss(0, zmm4[0])[0]
    zmm0 = arg2[1]
    zmm0[0] = zmm0[0] f- arg2[3]
    zmm2.d = zmm2.d f* zmm3
    zmm1[0] = zmm1[0] * zmm3
    zmm0[0] = zmm0[0] * zmm3
    zmm3 = zmm3 * zmm4[0]
    *arg1 = zmm2.d
    arg1[1] = zmm1[0]
    arg1[2] = zmm0[0]
    arg1[3] = zmm3
    return arg1

zmm5 = 1f - zmm4[0]
zmm4 = 0x3f000000
zmm6.d = arg2[1].d f- arg2[3]
zmm5 = zmm5 - zmm1[0]
zmm1 = arg2[7]
zmm1[0] = zmm1[0] f+ arg2[5]
zmm5 = zmm5 f+ zmm2.d
zmm2.d = arg2[2].d f+ arg2[6]
zmm4[0] = 0.5f / _mm_sqrt_ss(0, zmm5)[0]
zmm2.d = zmm2.d f* zmm4[0]
zmm4[0] = zmm4[0] * zmm5
zmm1[0] = zmm1[0] * zmm4[0]
zmm6.d = zmm6.d f* zmm4[0]
arg1[2] = zmm4[0]
*arg1 = zmm2.d
arg1[1] = zmm1[0]
arg1[3] = zmm6.d
return arg1
