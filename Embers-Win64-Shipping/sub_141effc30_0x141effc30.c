// 函数: sub_141effc30
// 地址: 0x141effc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result

if (arg2[0] f<= 0f)
    result.b = 0
else if (_finite(fconvert.d(arg2[0])).d == 0)
    result.b = 0
else
    int32_t zmm3 = *(arg3 + 0x60)
    int64_t zmm0 = arg1[0x9a].d
    arg2[0] = arg2[0] f- zmm3
    zmm0.d = zmm0.d f* 0.5f
    
    if (__andps_xmmxud_memxud(arg2, data_142d3f770)[0] f<= zmm0.d)
        if (arg2[0] f<= zmm3 || arg2[0] f< 9.99999997e-07f)
            result.b = 0
        else
            (*(*arg1 + 0x9d8))(arg1, arg2, arg3)
            result.b = 1
    else if (arg2[0] f>= 0f)
        result.b = 0
    else
        uint32_t zmm6[0x4] = *(arg1 + 0x4d4)
        result = sub_1405be820(arg1)
        float zmm0_1 = arg1[0x9a].d f* 0.5f
        arg2 = result[0xa4].d
        arg2[0] = arg2[0] f- zmm6[0]
        
        if (arg2[0] f< zmm0_1)
            result.b = 0
        else
            int32_t rcx_2 = *(sub_1405be820(arg1) + 0x520)
            int64_t rax_1 = *arg1
            *(arg1 + 0x4d4) = rcx_2
            (*(rax_1 + 0x9d0))(arg1, arg2)
            *(arg3 + 0x60) = *(arg3 + 0x60) f- arg1[0x9a].d
            sub_141ffbbd0(&arg1[0x9b], arg1[0x9a].d[0])
            result.b = 1

return result
