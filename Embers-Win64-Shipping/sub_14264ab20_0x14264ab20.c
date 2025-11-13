// 函数: sub_14264ab20
// 地址: 0x14264ab20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = zx.o(data_143dbb1f8.q)
int32_t rax = data_143dbb200
uint64_t var_74 = zmm0.q
int32_t var_78 = rax
int32_t var_6c = rax
zmm0.q = zmm0.q
*(arg1 + 0xb8) = zmm0
uint128_t var_80 = zmm0
*(arg1 + 0xc8) = var_74
*(arg1 + 0xd0) = 0.d
float var_8c
float* rax_2 = sub_14265bbd0(arg1, &var_8c)

if (*(arg1 + 0xd0) == 0)
    *(arg1 + 0xc4) = *rax_2
    int32_t rax_3 = rax_2[2]
    *(arg1 + 0xcc) = rax_3
    *(arg1 + 0xb8) = *(arg1 + 0xc4)
    *(arg1 + 0xc0) = rax_3
    *(arg1 + 0xd0) = 1
else
    *(arg1 + 0xb8) = __minss_xmmss_memss((*rax_2).d, *(arg1 + 0xb8)).d
    *(arg1 + 0xbc) = __minss_xmmss_memss((*(arg1 + 0xbc)).d, rax_2[1]).d
    *(arg1 + 0xc0) = __minss_xmmss_memss((*(arg1 + 0xc0)).d, rax_2[2]).d
    *(arg1 + 0xc4) = __maxss_xmmss_memss(*rax_2, *(arg1 + 0xc4))
    *(arg1 + 0xc8) = __maxss_xmmss_memss(rax_2[1].d, *(arg1 + 0xc8)).d
    *(arg1 + 0xcc) = __maxss_xmmss_memss(rax_2[2], *(arg1 + 0xcc))

uint64_t* result
float zmm6[0x4]
result, zmm6 = sub_142657790(arg1, &var_8c)

if (*(arg1 + 0xd0) == 0)
    *(arg1 + 0xc4) = *result
    result = zx.q(result[1].d)
    *(arg1 + 0xcc) = result.d
    *(arg1 + 0xb8) = *(arg1 + 0xc4)
    *(arg1 + 0xc0) = result.d
    *(arg1 + 0xd0) = 1
else
    *(arg1 + 0xb8) = __minss_xmmss_memss((*result)[0], *(arg1 + 0xb8))[0]
    *(arg1 + 0xbc) = __minss_xmmss_memss((*(result + 4))[0], *(arg1 + 0xbc))[0]
    *(arg1 + 0xc0) = __minss_xmmss_memss(result[1].d[0], *(arg1 + 0xc0))[0]
    *(arg1 + 0xc4) = __maxss_xmmss_memss((*result)[0], *(arg1 + 0xc4))[0]
    *(arg1 + 0xc8) = __maxss_xmmss_memss((*(result + 4))[0], *(arg1 + 0xc8))[0]
    *(arg1 + 0xcc) = __maxss_xmmss_memss(result[1].d[0], *(arg1 + 0xcc))[0]

if ((*(arg1 + 0x120) & 8) != 0)
    float zmm4_1[0x4] = *(arg1 + 0x130)
    float zmm1_2[0x4] = *(arg1 + 0x138)
    int128_t zmm2_1 = *(arg1 + 0x134)
    float zmm3_1 = *(arg1 + 0x12c)
    int64_t zmm5_1 = *(arg1 + 0x128)
    zmm1_2[0] = zmm1_2[0] + zmm3_1
    float var_18_1[0x4] = zmm6
    zmm3_1 = zmm3_1 - zmm1_2[0]
    zmm6 = *(arg1 + 0x124)
    int128_t zmm7
    zmm7.d = zmm2_1.d f+ zmm5_1.d
    float var_84_1 = zmm1_2[0]
    zmm5_1.d = zmm5_1.d f- zmm2_1.d
    zmm4_1[0] = zmm4_1[0] + zmm6[0]
    float var_78_1 = zmm3_1
    zmm6[0] = zmm6[0] - zmm4_1[0]
    float var_6c_1 = var_84_1
    void* rax_6 = *(arg1 + 0xa0)
    char var_68_1 = 1
    var_80.q = (_mm_unpacklo_ps(zmm6, zmm5_1)).q
    int64_t var_74_1 = (_mm_unpacklo_ps(zmm4_1, zmm7.q)).q
    void* r8_1 = *(rax_6 + 0x130)
    int128_t* r8_2
    
    if (r8_1 == 0)
        r8_2 = &data_143dbb0c0
    else
        r8_2 = r8_1 + 0x1c0
    
    uint64_t var_60[0x5]
    result = sub_140ae2c60(&var_80, &var_60, r8_2)
    
    if (*(arg1 + 0xd0) == 0)
        if (result[3].b != 0)
            *(arg1 + 0xb8) = *result
            *(arg1 + 0xc8) = result[2]
            result = zx.q(result[3].d)
            *(arg1 + 0xd0) = result.d
    else if (result[3].b != 0)
        *(arg1 + 0xb8) = __minss_xmmss_memss((*result)[0], *(arg1 + 0xb8))[0]
        *(arg1 + 0xbc) = __minss_xmmss_memss((*(result + 4)).d, *(arg1 + 0xbc)).d
        *(arg1 + 0xc0) = __minss_xmmss_memss(result[1].d[0], *(arg1 + 0xc0))[0]
        *(arg1 + 0xc4) = __maxss_xmmss_memss((*(result + 0xc)).d, *(arg1 + 0xc4)).d
        *(arg1 + 0xc8) = __maxss_xmmss_memss(result[2].d[0], *(arg1 + 0xc8))[0]
        *(arg1 + 0xcc) = __maxss_xmmss_memss((*(result + 0x14)).d, *(arg1 + 0xcc)).d

return result
