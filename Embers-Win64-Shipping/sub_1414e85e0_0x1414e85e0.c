// 函数: sub_1414e85e0
// 地址: 0x1414e85e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = data_1439b7078 == 0
*arg1 = 0x3f000000
arg1[1] = 0x3f000000
arg1[2] = 0x3f000000

if (not(cond:0) && data_1439b7074 != 0)
    int32_t i_1 = arg2 & 0x3ff
    int32_t i_2 = i_1
    float zmm1 = 0.200000003f
    uint128_t zmm2 = zx.o(0)
    int32_t zmm5 = (zx.o(0)).d
    uint128_t zmm0
    
    if (i_1 u> 0)
        uint64_t rdx_2
        
        do
            rdx_2 = zx.q(i_2 s/ 5)
            zmm0 = zx.o(i_2 - (rdx_2 * 5).d)
            i_2 = rdx_2.d
            zmm0.d = _mm_cvtepi32_ps(zmm0).d f* zmm1
            zmm1 = zmm1 * 0.200000003f
            zmm5 = zmm5 f+ zmm0.d
        while (rdx_2.d s> 0)
    
    int32_t i_3 = i_1
    zmm1 = 0.333333343f
    int64_t zmm4 = (zx.o(0)).q
    
    if (i_1 != 0)
        uint64_t rdx_4
        
        do
            rdx_4 = zx.q(i_3 s/ 3)
            zmm0 = zx.o(i_3 - (rdx_4 * 3).d)
            i_3 = rdx_4.d
            zmm0.d = _mm_cvtepi32_ps(zmm0).d f* zmm1
            zmm1 = zmm1 * 0.333333343f
            zmm4.d = zmm4.d f+ zmm0.d
        while (rdx_4.d s> 0)
    
    zmm1 = 0.5f
    
    if (i_1 != 0)
        int32_t i
        
        do
            int32_t rcx_3 = i_1 & 0x80000001
            
            if (rcx_3 s< 0)
                rcx_3 = ((rcx_3 - 1) | 0xfffffffe) + 1
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(i_1)
            i = (temp5_1 - temp4_1) s>> 1
            i_1 = i
            zmm0.d = _mm_cvtepi32_ps(zx.o(rcx_3)).d f* zmm1
            zmm1 = zmm1 * 0.5f
            zmm2.d = zmm2.d f+ zmm0.d
        while (i s> 0)
    
    *arg1 = (_mm_unpacklo_ps(zmm2, zmm4)).q
    arg1[2] = zmm5

return arg1
