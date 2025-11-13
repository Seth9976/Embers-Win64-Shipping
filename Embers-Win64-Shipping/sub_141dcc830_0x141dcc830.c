// 函数: sub_141dcc830
// 地址: 0x141dcc830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t result
float zmm2[0x4]
float temp0_1[0x4]

if ((*(arg1 + 0x182) & 0x10) != 0)
    zmm2 = *(arg2 + 0x30)
    result.d = zmm2.d f- *(arg1 + 0x26c)
    temp0_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    temp0_1[0] = temp0_1[0] f- *(arg1 + 0x270)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    temp0_2[0] = temp0_2[0] f- *(arg1 + 0x274)
    result.d = result.d f* result.d
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    temp0_1[0] = temp0_1[0] f+ result.d
    temp0_1[0] = temp0_1[0] + temp0_2[0]

float zmm1[0x4]

if ((*(arg1 + 0x182) & 0x10) == 0 || not(temp0_1[0] <= 9.99999975e-05f))
    int32_t var_38_1 = 0x3f000000
    int128_t var_48_1 = zx.o(0)
    int32_t var_34_1 = 0x40000000
    char var_50_1 = 1
    uint128_t result_1
    sub_141e90730(&result_1)
    zmm1 = *(arg2 + 0x30)
    int32_t rdx = *(arg1 + 0x10)
    void* rcx_1 = *(arg1 + 0x50)
    result = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    float var_68 = zmm1[0]
    float var_60_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    int32_t var_64_1 = result.d
    int32_t var_58
    sub_141e7caf0(rcx_1, rdx, &var_68, &var_58)
    result = result_1
    *(arg1 + 0x182) |= 0x10
    *(arg1 + 0x618) = result
    float var_20[0x4]
    *(arg1 + 0x628) = var_20
    int32_t var_10
    *(arg1 + 0x638) = var_10
    *(arg1 + 0x63c) = var_58

void* rcx_4 = sx.q(*(arg1 + 0x6d0)) * 0xc0 + *(*(arg1 + 0x50) + 0x130)

if (not(*(rcx_4 + 0x80) f<= *(arg1 + 0x640)))
    *(arg1 + 0x648) = *(arg1 + 0x650)
    *(arg1 + 0x64c) = *(arg1 + 0x654)
    *(arg1 + 0x640) = data_143dbb3b8

if (*(rcx_4 + 0x70) == *(arg1 + 0x63c) || (*(arg1 + 0x180) & 2) == 0)
    result = *(arg1 + 0x648)
    zmm1 = 0x3f800000
    zmm2 = 0x469c4000
    zmm1[0] = 1f f- result.d
    zmm1[0] = zmm1[0] f* *(rcx_4 + 0xa8)
    zmm1[0] = zmm1[0] f+ result.d
    *(arg1 + 0x650) = zmm1[0]
    *(arg2 + 0x70) = zmm1[0]
    result = *(arg1 + 0x64c)
    zmm2[0] = 20000f f- result.d
    zmm2[0] = zmm2[0] f* *(rcx_4 + 0xac)
    zmm2[0] = zmm2[0] f+ result.d
else
    result = *(arg1 + 0x648)
    
    if (*(arg1 + 0x618) == 0)
        zmm2 = *(arg1 + 0x62c)
        zmm2[0] = zmm2[0] f- result.d
        zmm2[0] = zmm2[0] f* *(rcx_4 + 0xa8)
        zmm2[0] = zmm2[0] f+ result.d
        *(arg1 + 0x650) = zmm2[0]
        result = *(arg1 + 0x648)
        zmm1 = *(rcx_4 + 0x50)
        zmm1[0] = zmm1[0] f- result.d
        zmm1[0] = zmm1[0] f* *(rcx_4 + 0xb0)
        zmm1[0] = zmm1[0] f+ result.d
        zmm2[0] = zmm2[0] * zmm1[0]
        *(arg1 + 0x650) = zmm2[0]
        *(arg2 + 0x70) = zmm2[0]
        result = *(arg1 + 0x64c)
        zmm2 = *(arg1 + 0x634)
        zmm1 = *(rcx_4 + 0x58)
        zmm2[0] = zmm2[0] f- result.d
        zmm1[0] = zmm1[0] f- result.d
        zmm2[0] = zmm2[0] f* *(rcx_4 + 0xac)
        zmm1[0] = zmm1[0] f* *(rcx_4 + 0xb4)
        zmm2[0] = zmm2[0] f+ result.d
        zmm1[0] = zmm1[0] f+ result.d
        
        if (not(zmm2[0] < zmm1[0]))
            zmm2 = zmm1
    else
        zmm1 = *(rcx_4 + 0x50)
        zmm1[0] = zmm1[0] f- result.d
        zmm1[0] = zmm1[0] f* *(rcx_4 + 0xb0)
        zmm1[0] = zmm1[0] f+ result.d
        *(arg1 + 0x650) = zmm1[0]
        *(arg2 + 0x70) = zmm1[0]
        result = *(arg1 + 0x64c)
        zmm2 = *(rcx_4 + 0x58)
        zmm2[0] = zmm2[0] f- result.d
        zmm2[0] = zmm2[0] f* *(rcx_4 + 0xb4)
        zmm2[0] = zmm2[0] f+ result.d

*(arg1 + 0x654) = zmm2[0]
*(arg2 + 0x1c0) = zmm2[0]
return result
