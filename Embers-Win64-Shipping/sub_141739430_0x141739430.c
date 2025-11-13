// 函数: sub_141739430
// 地址: 0x141739430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = *arg4
int128_t zmm7 = *(arg4 + 8)
float zmm8[0x4] = *(arg4 + 4)
int128_t zmm9 = *arg3
zmm6[0] = zmm6[0] f- zmm9.d
int128_t zmm10 = *(arg3 + 4)
zmm8[0] = zmm8[0] f- zmm10.d
float zmm11[0x4] = *(arg3 + 8)
zmm7.d = zmm7.d f- zmm11[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm8[0] = zmm8[0] * zmm8[0]
int64_t zmm1
zmm1.d = zmm7.q.d f* zmm7.d
zmm8[0] = zmm8[0] + zmm6[0]
zmm8[0] = zmm8[0] f+ zmm1.d
bool cond:0 = zmm8[0] == 1f
float temp0[0x4] = _mm_sqrt_ss(0, zmm8[0])
float zmm2[0x4]
int64_t zmm3

if (not(cond:0))
    if (zmm8[0] >= 9.99999994e-09f)
        zmm3 = zmm8[0].q
        float temp0_1[0x4] = _mm_rsqrt_ss(zmm8[0], zmm3.d)
        zmm2 = 0x3f000000
        zmm3.d = zmm3.d f* 0.5f
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        zmm1.d = zmm3.d f* temp0_1[0]
        zmm2[0] = 0.5f f- zmm1.d
        temp0_1[0] = temp0_1[0] * zmm2[0]
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        zmm1.d = temp0_1[0].q.d f* temp0_1[0]
        zmm3.d = zmm3.d f* zmm1.d
        temp0_1[0] = temp0_1[0] * (0.5f f- zmm3.d)
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        zmm6[0] = zmm6[0] * temp0_1[0]
        zmm8[0] = zmm8[0] * temp0_1[0]
        zmm7.d = zmm7.d f* temp0_1[0]
    else
        zmm6 = data_143dbb1f8
        zmm8 = data_143dbb1fc
        zmm7 = data_143dbb200

zmm3.d = zmm9.q.d f- *(arg1 + 0x10)
float zmm4 = zmm10.d f- *(arg1 + 0x14)
zmm11[0] = zmm11[0] f- *(arg1 + 0x18)
zmm6[0] = zmm6[0] f* zmm3.d
zmm8[0] = zmm8[0] * zmm4
zmm1.d = zmm7.q.d f* zmm11[0]
zmm8[0] = zmm8[0] + zmm6[0]
float zmm0[0x4] = arg5
zmm0[0] = zmm0[0] f+ *(arg1 + 0x1c)
zmm3.d = zmm3.d f* zmm3.d
zmm8[0] = zmm8[0] f+ zmm1.d
zmm11[0] = zmm11[0] * zmm11[0]
zmm0[0] = zmm0[0] * zmm0[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm8[0] = zmm8[0] - (zmm4 * zmm4 f+ zmm3.d + zmm11[0])
zmm8[0] = zmm8[0] + zmm0[0]
float var_90

if (zmm8[0] < 0f)
label_141739700:
    *(arg2 + 0xc) = 0
    var_90 = 0f
    zmm0 = _mm_unpacklo_ps(zx.o(0), (zx.o(0)).q)
else
    zmm2 = zmm8 ^ data_142d3f780
    
    if (zmm8[0] != 0f)
        float temp0_2[0x4] = _mm_sqrt_ss(0, zmm8[0])
        zmm3 = temp0_2[0].q
        zmm2[0] = zmm2[0] - temp0_2[0]
        zmm3.d = zmm3.d f- zmm8[0]
        
        if (zmm3.d f< 0f || zmm3.d f> temp0[0])
            if (zmm2[0] < 0f || zmm2[0] > temp0[0])
                goto label_141739700
            
            zmm6[0] = zmm6[0] * zmm2[0]
            zmm1 = zmm2[0].q
            *(arg2 + 0xc) = 1
            zmm2[0] = zmm2[0] f* zmm7.d
            zmm6[0] = zmm6[0] f+ zmm9.d
            zmm1.d = zmm1.d f* zmm8[0]
            zmm2[0] = zmm2[0] + zmm11[0]
            zmm1.d = zmm1.d f+ zmm10.d
            var_90 = zmm2[0]
            zmm0 = _mm_unpacklo_ps(zmm6, zmm1)
        else if (zmm2[0] < 0f || zmm2[0] > temp0[0])
            zmm6[0] = zmm6[0] f* zmm3.d
            *(arg2 + 0xc) = 1
            zmm8[0] = zmm8[0] f* zmm3.d
            zmm7.d = zmm7.d f* zmm3.d
            zmm6[0] = zmm6[0] f+ zmm9.d
            zmm8[0] = zmm8[0] f+ zmm10.d
            zmm7.d = zmm7.d f+ zmm11[0]
            zmm0 = _mm_unpacklo_ps(zmm6, zmm8[0].q)
            var_90 = zmm7.d
        else
            bool cond:2_1 = zmm3.d f>= zmm2[0]
            *(arg2 + 0xc) = 1
            
            if (cond:2_1)
                zmm6[0] = zmm6[0] * zmm2[0]
                zmm8[0] = zmm8[0] * zmm2[0]
                zmm7.d = zmm7.d f* zmm2[0]
            else
                zmm6[0] = zmm6[0] f* zmm3.d
                zmm8[0] = zmm8[0] f* zmm3.d
                zmm7.d = zmm7.d f* zmm3.d
            
            zmm6[0] = zmm6[0] f+ zmm9.d
            zmm8[0] = zmm8[0] f+ zmm10.d
            zmm7.d = zmm7.d f+ zmm11[0]
            zmm0 = _mm_unpacklo_ps(zmm6, zmm8[0].q)
            var_90 = zmm7.d
    else
        if (zmm2[0] < 0f || zmm2[0] > temp0[0])
            goto label_141739700
        
        *(arg2 + 0xc) = 1
        zmm1 = zmm2[0].q
        zmm2[0] = zmm2[0] * zmm6[0]
        zmm2[0] = zmm2[0] f* zmm7.d
        zmm1.d = zmm1.d f* zmm8[0]
        zmm2[0] = zmm2[0] f+ zmm9.d
        zmm2[0] = zmm2[0] + zmm11[0]
        zmm1.d = zmm1.d f+ zmm10.d
        var_90 = zmm2[0]
        zmm0 = _mm_unpacklo_ps(zmm2, zmm1)

*arg2 = zmm0.q
arg2[1].d = var_90
return arg2
