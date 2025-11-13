// 函数: sub_140634290
// 地址: 0x140634290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = *(arg3 + 4)
uint32_t zmm5[0x4] = *(arg3 + 8)
int128_t zmm6 = *arg3
int128_t zmm7 = *(arg5 + 8)
uint32_t zmm8[0x4]
uint32_t var_38[0x4] = zmm8
int128_t zmm9
int128_t var_48 = zmm9
int128_t zmm10
int128_t var_58 = zmm10
int128_t zmm14 = *(arg5 + 4)
uint32_t zmm15[0x4] = *arg5
zmm15[0] = zmm15[0] f* zmm6.d
float zmm1 = zmm7.d f* zmm5[0]
zmm15[0] = zmm15[0] f+ zmm14.d * zmm4
zmm15[0] = zmm15[0] f+ zmm1
int128_t* result

if (__andps_xmmxud_memxud(zmm15, data_142d3f770)[0] f< 9.99999975e-06f)
    result.b = 0
else
    zmm8 = *arg4
    zmm10 = *(arg4 + 4)
    zmm9 = *(arg4 + 8)
    zmm8[0] = zmm8[0] f- *arg2
    zmm10.d = zmm10.d f- arg2[1]
    zmm9.d = zmm9.d f- arg2[2]
    zmm8[0] = zmm8[0] f* zmm6.d
    zmm1 = zmm9.d f* zmm5[0]
    zmm8[0] = zmm8[0] f+ zmm10.d * zmm4
    zmm8[0] = zmm8[0] f+ zmm1
    
    if (zmm8[0] f> 0.100000001f)
        result.b = 0
    else
        float zmm0 = zmm5[0] f* zmm14.d
        zmm5[0] = zmm5[0] f* zmm15[0]
        float zmm3 = zmm7.d * zmm4 - zmm0
        zmm0 = zmm7.d f* zmm6.d
        zmm7.d = zmm9.d f* zmm15[0]
        zmm5[0] = zmm5[0] f- zmm0
        zmm9.d = zmm9.d f* zmm14.d
        zmm1 = zmm6.d f* zmm14.d - zmm15[0] * zmm4
        zmm0 = zmm8[0] f* *(arg5 + 8)
        zmm8[0] = zmm8[0] f* zmm14.d
        zmm7.d = zmm7.d f- zmm0
        zmm0 = zmm10.d f* *(arg5 + 8)
        zmm10.d = zmm10.d f* zmm15[0]
        zmm7.d = zmm7.d f* zmm5[0]
        zmm5[0] = zmm5[0] f* zmm5[0]
        zmm8[0] = zmm8[0] f- zmm10.d
        zmm8[0] = zmm8[0] f* zmm1
        zmm7.d = zmm7.d f+ (zmm0 f- zmm9.d) * zmm3
        zmm5[0] = zmm5[0] f+ zmm3 * zmm3
        zmm7.d = zmm7.d f+ zmm8[0]
        zmm5[0] = zmm5[0] f+ zmm1 * zmm1
        zmm7.d = zmm7.d f/ zmm5[0]
        
        if (zmm7.d f> 1f || zmm7.d f< 0f)
            result.b = 0
        else
            zmm6.d = zmm6.d f* zmm7.d
            result.b = 1
            zmm6.d = zmm6.d f+ *arg2
            zmm5[0] = zmm5[0] f* zmm7.d
            zmm4 = zmm4 f* zmm7.d f+ arg2[1]
            zmm5[0] = zmm5[0] f+ arg2[2]
            *arg1 = zmm6.d
            arg1[1] = zmm4
            arg1[2] = zmm5[0]

return result
