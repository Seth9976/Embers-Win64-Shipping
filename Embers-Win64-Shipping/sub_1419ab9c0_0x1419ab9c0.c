// 函数: sub_1419ab9c0
// 地址: 0x1419ab9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm4 = *arg1
uint128_t zmm5 = arg2

if (zmm4.d f== 0f)
label_1419abb32:
    *arg1 = zmm5.d
    *(arg1 + 4) = 0
    *(arg1 + 0xc) = 0
    *(arg1 + 8) = data_143f13d4c.d
    arg1[1].d = 0
    return 

uint128_t zmm0
zmm0.q = data_143dbb3b8 f- arg4

if (_mm_cvtpd_ps(zmm0).d f>= data_1439c85d0)
    goto label_1419abb32

arg4 = data_1439c85b4

if (arg4.d f< 0f)
    goto label_1419abb32

zmm0.d = zmm4.d f- zmm5.d

if (__andps_xmmxud_memxud(zmm0, data_142d3f770).d f> 9.99999994e-09f)
label_1419aba59:
    uint128_t zmm9 = data_143f13d4c
    
    if (arg4.d f< 0f)
        arg4 = (zx.o(0)).q
    else
        arg4 = arg1[1].d
        zmm0.d = zmm9.d f- *(arg1 + 8)
        zmm0.d = zmm0.d f* *(arg1 + 0xc)
        zmm0.d = _mm_min_ss(zmm0.d, 0x3f800000).d f* *(arg1 + 4)
        arg4.d = arg4.d f- zmm0.d
    
    zmm4.d = zmm4.d f- arg4.d
    
    if (not(zmm4.d f>= 0f))
        zmm4 = zx.o(0)
    else if (not(zmm4.d f< zmm5.d))
        zmm4 = zmm5
    
    arg3.d = arg3.d f- zmm4.d
    *(arg1 + 8) = zmm9.d
    *arg1 = zmm5.d
    *(arg1 + 4) = arg3.d
    
    if (not(__andps_xmmxud_memxud(arg3, data_142d3f770).d f> 9.99999994e-09f))
        *(arg1 + 4) = 0
        *(arg1 + 0xc) = 0
        return 
    
    int64_t rdx = sx.q(arg5)
    zmm5.d = zmm5.d f- zmm4.d
    arg1[1].d = zmm5.d
    
    if (arg3.d f<= 0f)
        arg3.d = arg3.d f* *((rdx << 3) + &data_1439c9114)
        zmm0.d = -1f f/ arg3.d
        *(arg1 + 0xc) = zmm0.d
        return 
    
    arg3.d = arg3.d f* *(&data_1439c9110 + (rdx << 3))
    arg2.d = 1f f/ arg3.d
    *(arg1 + 0xc) = arg2.d
    return 

arg2.d = zmm4.d f- arg1[1].d
arg2.d = arg2.d f+ *(arg1 + 4)
zmm0.d = arg3.d f- arg2.d

if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770).d f<= 9.99999994e-09f))
    goto label_1419aba59
