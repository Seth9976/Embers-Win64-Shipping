// 函数: sub_140e1aef0
// 地址: 0x140e1aef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm5[0x4] = *arg4
zmm5[0] = zmm5[0] f- *arg3
float zmm4 = *(arg4 + 4) f- arg3[1]
uint32_t zmm8[0x4] = *arg2
uint32_t zmm9[0x4] = *(arg2 + 4)
uint32_t zmm11[0x4] = *(arg1 + 4)
zmm9[0] = zmm9[0] f- zmm11[0]
uint32_t zmm12[0x4] = *arg1
zmm11[0] = zmm11[0] f- arg3[1]
zmm12[0] = zmm12[0] f- *arg3
zmm8[0] = zmm8[0] f- zmm12[0]
zmm5[0] = zmm5[0] f* zmm11[0]
zmm12[0] = zmm12[0] f* zmm4
zmm8[0] = zmm8[0] f* zmm11[0]
zmm5[0] = zmm5[0] f- zmm12[0]
zmm9[0] = zmm9[0] f* zmm12[0]
zmm8[0] = zmm8[0] f* zmm4
zmm8[0] = zmm8[0] f- zmm9[0]
zmm9[0] = zmm9[0] f* zmm5[0]
bool cond:0 = _mm_and_ps(zmm5, 0x7fffffff)[0] f> 9.99999994e-09f
zmm8[0] = zmm8[0] f- zmm9[0]
uint32_t temp0_1[0x4]

if (not(cond:0))
    temp0_1 = _mm_and_ps(zmm8, 0x7fffffff)

void* const* result

if (cond:0 || temp0_1[0] f> 9.99999994e-09f)
    if (_mm_and_ps(zmm8, 0x7fffffff)[0] f<= 9.99999994e-09f)
        result.b = 0
    else
        uint32_t zmm1[0x4] = arg6
        uint32_t zmm0[0x4] = 0x3f800000
        zmm0[0] = 1f f/ zmm8[0]
        uint32_t zmm3[0x4] = zmm1 ^ data_142d3f780
        zmm0[0] = zmm0[0] f* zmm5[0]
        zmm0[0] = zmm0[0] f* zmm8[0]
        
        if (zmm0[0] f< zmm3[0])
            result.b = 0
        else
            zmm1[0] = zmm1[0] f+ 1f
            
            if (zmm0[0] f> zmm1[0] || zmm0[0] f< zmm3[0] || zmm0[0] f> zmm1[0])
                result.b = 0
            else
                zmm8[0] = zmm8[0] f* zmm0[0]
                zmm9[0] = zmm9[0] f* zmm0[0]
                zmm8[0] = zmm8[0] f+ zmm12[0]
                zmm9[0] = zmm9[0] f+ zmm11[0]
                *arg5 = (_mm_unpacklo_ps(zmm8, zmm9[0].q)).q
                result.b = 1
else
    zmm8[0] = zmm8[0] f+ zmm12[0]
    zmm9[0] = zmm9[0] f+ zmm11[0]
    zmm8[0] = zmm8[0] f* 0.5f
    zmm9[0] = zmm9[0] f* 0.5f
    *arg5 = (_mm_unpacklo_ps(zmm8, zmm9[0].q)).q
    result.b = 1

return result
