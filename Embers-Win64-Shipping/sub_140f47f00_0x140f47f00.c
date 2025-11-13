// 函数: sub_140f47f00
// 地址: 0x140f47f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_18[0x4] = zmm6
float zmm7[0x4] = arg3
float zmm8[0x4]
float var_38[0x4] = zmm8
float zmm9[0x4]
float var_48[0x4] = zmm9

if (*(arg1 + 0x405) != 0)
    zmm7 = sub_140f636c0(arg1)

zmm6 = 0x3f800000
zmm6[0] = 1f / zmm7[0]
zmm7 = zmm6
zmm7[0] = zmm7[0] f* *(arg1 + 0x408)
zmm7[0] = zmm7[0] + 0.5f
int32_t rcx = int.d(zmm7[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm7[0]))
    zmm7 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm7, zmm7[0].q)) & 1)))

zmm7[0] = zmm7[0] f* *(arg1 + 0x3f0)
zmm8 = zmm6
zmm8[0] = zmm8[0] f* *(arg1 + 0x40c)
zmm8[0] = zmm8[0] + 0.5f
int32_t rcx_2 = int.d(zmm8[0])

if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== zmm8[0]))
    zmm8 = _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm8, zmm8[0].q)) & 1)))

zmm8[0] = zmm8[0] f* *(arg1 + 0x3f4)
zmm9 = zmm6
zmm9[0] = zmm9[0] f* *(arg1 + 0x410)
zmm9[0] = zmm9[0] + 0.5f
int32_t rcx_4 = int.d(zmm9[0])

if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== zmm9[0]))
    zmm9 = _mm_cvtepi32_ps(zx.o(rcx_4 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm9, zmm9[0].q)) & 1)))

zmm6[0] = zmm6[0] f* *(arg1 + 0x414)
zmm9[0] = zmm9[0] f* *(arg1 + 0x3f8)
zmm6[0] = zmm6[0] + 0.5f
int32_t rcx_6 = int.d(zmm6[0])

if (rcx_6 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_6)).d f== zmm6[0]))
    zmm6 = _mm_cvtepi32_ps(zx.o(rcx_6 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm6, zmm6[0].q)) & 1)))

bool cond:1 = *(arg1 + 0x3e8) == 0
zmm6[0] = zmm6[0] f* *(arg1 + 0x3fc)

if (not(cond:1))
    int64_t* rcx_8 = *(arg1 + 0x3e0)
    
    if (rcx_8 != 0 && (*(*rcx_8 + 0x28))(rcx_8) != 0)
        int64_t* rcx_9
        
        if (*(arg1 + 0x3e8) == 0)
            rcx_9 = nullptr
        else
            rcx_9 = *(arg1 + 0x3e0)
        
        uint128_t var_58
        (*(*rcx_9 + 0x48))(rcx_9, &var_58)
        *(arg1 + 0x3c8) = var_58

zmm7[0] = zmm7[0] f+ *(arg1 + 0x3c8)
zmm8[0] = zmm8[0] f+ *(arg1 + 0x3cc)
zmm9[0] = zmm9[0] f+ *(arg1 + 0x3d0)
zmm6[0] = zmm6[0] f+ *(arg1 + 0x3d4)
*arg2 = zmm7[0]
arg2[1] = zmm8[0]
arg2[2] = zmm9[0]
arg2[3] = zmm6[0]
return arg2
