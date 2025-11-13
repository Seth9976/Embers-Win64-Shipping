// 函数: sub_142703ae0
// 地址: 0x142703ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xe8)
int128_t zmm7 = arg3
int32_t* result

if (rcx == 0)
    result.b = 0
else
    float arg_8 = 0f
    float var_38 = 0f
    int64_t* rcx_1 = *(rcx + 0xa0)
    (*(*rcx_1 + 0x560))(rcx_1, &arg_8, &var_38)
    arg3 = *arg2
    uint32_t zmm1[0x4] = *(arg2 + 4)
    float zmm0 = arg_8
    zmm1[0] = zmm1[0] f- arg5[1]
    arg3.d = arg3.d f- *arg5
    zmm7.d = zmm7.d f+ arg6
    zmm1[0] = zmm1[0] f* zmm1[0]
    arg3.d = arg3.d f* arg3.d
    zmm0 = zmm0 * arg7 f+ zmm7.d
    zmm1[0] = zmm1[0] f+ arg3.d
    
    if (zmm1[0] f> zmm0 * zmm0)
        result.b = 0
    else
        zmm0 = var_38 f* *(arg1 + 0x120)
        zmm1 = *(arg2 + 8)
        zmm1[0] = zmm1[0] f- arg5[2]
        
        if (__andps_xmmxud_memxud(zmm1, data_142d3f770)[0] f> zmm0 f+ arg4.d)
            result.b = 0
        else
            result.b = 1

return result
